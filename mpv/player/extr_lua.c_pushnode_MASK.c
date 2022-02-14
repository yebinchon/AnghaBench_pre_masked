
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* ba; TYPE_1__* list; int flag; int double_; int int64; int string; } ;
struct TYPE_9__ {int format; TYPE_3__ u; } ;
typedef TYPE_4__ mpv_node ;
typedef int lua_State ;
struct TYPE_7__ {int size; int data; } ;
struct TYPE_6__ {int num; TYPE_4__* values; int * keys; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(lua_State *VAR_1, mpv_node *VAR_2)
{
    FUNC_0(VAR_1, 6, "stack overflow");

    switch (VAR_2->format) {
    case 128:
        FUNC_7(VAR_1, VAR_2->u.string);
        break;
    case 132:
        FUNC_6(VAR_1, VAR_2->u.int64);
        break;
    case 134:
        FUNC_6(VAR_1, VAR_2->u.double_);
        break;
    case 129:
        FUNC_5(VAR_1);
        break;
    case 133:
        FUNC_3(VAR_1, VAR_2->u.flag);
        break;
    case 131:
        FUNC_2(VAR_1);
        FUNC_1(VAR_1, VAR_0, "ARRAY");
        FUNC_10(VAR_1, -2);
        for (int VAR_3 = 0; VAR_3 < VAR_2->u.list->num; VAR_3++) {
            FUNC_11(VAR_1, &VAR_2->u.list->values[VAR_3]);
            FUNC_9(VAR_1, -2, VAR_3 + 1);
        }
        break;
    case 130:
        FUNC_2(VAR_1);
        FUNC_1(VAR_1, VAR_0, "MAP");
        FUNC_10(VAR_1, -2);
        for (int VAR_4 = 0; VAR_4 < VAR_2->u.list->num; VAR_4++) {
            FUNC_7(VAR_1, VAR_2->u.list->keys[VAR_4]);
            FUNC_11(VAR_1, &VAR_2->u.list->values[VAR_4]);
            FUNC_8(VAR_1, -3);
        }
        break;
    case 135:
        FUNC_4(VAR_1, VAR_2->u.ba->data, VAR_2->u.ba->size);
        break;
    default:


        FUNC_2(VAR_1);
        FUNC_1(VAR_1, VAR_0, "UNKNOWN_TYPE");
        FUNC_10(VAR_1, -2);
        break;
    }
}
