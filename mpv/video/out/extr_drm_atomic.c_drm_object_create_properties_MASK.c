
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct drm_object {int id; TYPE_1__* props; int * props_info; int type; } ;
struct TYPE_2__ {int count_props; int * props; } ;


 int FUNC_0 (int,int ) ;
 TYPE_1__* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct drm_object*) ;
 int FUNC_3 (struct mp_log*,char*,...) ;
 int * FUNC_4 (int *,int) ;

int FUNC_5(struct mp_log *VAR_0, int VAR_1,
                                 struct drm_object *VAR_2)
{
    VAR_2->props = FUNC_1(VAR_1, VAR_2->id, VAR_2->type);
    if (VAR_2->props) {
        VAR_2->props_info = FUNC_4(((void*)0), VAR_2->props->count_props
                                              * sizeof(VAR_2->props_info));
        if (VAR_2->props_info) {
            for (int VAR_3 = 0; VAR_3 < VAR_2->props->count_props; VAR_3++)
                VAR_2->props_info[VAR_3] = FUNC_0(VAR_1, VAR_2->props->props[VAR_3]);
        } else {
            FUNC_3(VAR_0, "Out of memory\n");
            goto fail;
        }
    } else {
        FUNC_3(VAR_0, "Failed to retrieve properties for object id %d\n", VAR_2->id);
        goto fail;
    }

    return 0;

  fail:
    FUNC_2(VAR_2);
    return -1;
}
