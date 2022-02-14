
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* string; TYPE_2__* list; TYPE_1__* ba; int flag; int double_; int int64; } ;
struct TYPE_9__ {int format; TYPE_3__ u; } ;
typedef TYPE_4__ mpv_node ;
typedef int js_State ;
struct TYPE_7__ {int num; int * keys; TYPE_4__* values; } ;
struct TYPE_6__ {int size; int data; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int ) ;

__attribute__((used)) static void FUNC_9(js_State *VAR_0, mpv_node *VAR_1)
{
    int VAR_2;
    switch (VAR_1->format) {
    case 129: FUNC_4(VAR_0); break;
    case 128: FUNC_6(VAR_0, VAR_1->u.string); break;
    case 132: FUNC_5(VAR_0, VAR_1->u.int64); break;
    case 134: FUNC_5(VAR_0, VAR_1->u.double_); break;
    case 133: FUNC_2(VAR_0, VAR_1->u.flag); break;
    case 135:
        FUNC_3(VAR_0, VAR_1->u.ba->data, VAR_1->u.ba->size);
        break;
    case 131:
        FUNC_0(VAR_0);
        VAR_2 = VAR_1->u.list->num;
        for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
            FUNC_9(VAR_0, &VAR_1->u.list->values[VAR_3]);
            FUNC_7(VAR_0, -2, VAR_3);
        }
        break;
    case 130:
        FUNC_1(VAR_0);
        VAR_2 = VAR_1->u.list->num;
        for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
            FUNC_9(VAR_0, &VAR_1->u.list->values[VAR_4]);
            FUNC_8(VAR_0, -2, VAR_1->u.list->keys[VAR_4]);
        }
        break;
    default:
        FUNC_6(VAR_0, "[UNSUPPORTED_MPV_FORMAT]");
        break;
    }
}
