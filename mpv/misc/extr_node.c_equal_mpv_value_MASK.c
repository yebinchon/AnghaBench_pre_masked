
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_byte_array {int size; int data; } ;
struct TYPE_2__ {int num; char** keys; void const* values; } ;
typedef TYPE_1__ mpv_node_list ;
typedef int mpv_format ;
typedef int int64_t ;
 int FUNC_0 () ;
 int FUNC_1 (void const*,void const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,char*) ;

bool FUNC_4(const void *VAR_0, const void *VAR_1, mpv_format VAR_2)
{
    switch (VAR_2) {
    case 130:
        return 1;
    case 128:
    case 129:
        return FUNC_3(*(char **)VAR_0, *(char **)VAR_1) == 0;
    case 135:
        return *(int *)VAR_0 == *(int *)VAR_1;
    case 134:
        return *(int64_t *)VAR_0 == *(int64_t *)VAR_1;
    case 136:
        return *(double *)VAR_0 == *(double *)VAR_1;
    case 133:
        return FUNC_1(VAR_0, VAR_1);
    case 137: {
        const struct mpv_byte_array *VAR_3 = VAR_0, *VAR_4 = VAR_1;
        if (VAR_3->size != VAR_4->size)
            return 0;
        return FUNC_2(VAR_3->data, VAR_4->data, VAR_3->size) == 0;
    }
    case 132:
    case 131:
    {
        mpv_node_list *VAR_5 = *(mpv_node_list **)VAR_0, *VAR_6 = *(mpv_node_list **)VAR_1;
        if (VAR_5->num != VAR_6->num)
            return 0;
        for (int VAR_7 = 0; VAR_7 < VAR_5->num; VAR_7++) {
            if (VAR_2 == 131) {
                if (FUNC_3(VAR_5->keys[VAR_7], VAR_6->keys[VAR_7]) != 0)
                    return 0;
            }
            if (!FUNC_1(&VAR_5->values[VAR_7], &VAR_6->values[VAR_7]))
                return 0;
        }
        return 1;
    }
    }
    FUNC_0();
}
