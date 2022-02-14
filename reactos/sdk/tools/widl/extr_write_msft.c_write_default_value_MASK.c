
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int type_t ;
typedef int msft_typelib_t ;
struct TYPE_4__ {int sval; } ;
struct TYPE_5__ {scalar_t__ type; int cval; TYPE_1__ u; } ;
typedef TYPE_2__ expr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int*,int,int ) ;
 int FUNC_8 (int *,int*,int ) ;

__attribute__((used)) static void FUNC_9(msft_typelib_t *VAR_5, type_t *VAR_6, expr_t *VAR_7, int *VAR_8)
{
    int VAR_9;

    if (VAR_7->type == VAR_0 || VAR_7->type == VAR_1) {
        if (FUNC_2(VAR_6) != VAR_3)
            FUNC_1("string default value applied to non-string type\n");
        FUNC_0("default value '%s'\n", VAR_7->u.sval);
        FUNC_8(VAR_5, VAR_8, VAR_7->u.sval);
        return;
    }

    if (FUNC_4(VAR_6) == VAR_2) {
        VAR_9 = 134;
    } else if (FUNC_3(VAR_6)) {
        VAR_9 = FUNC_2(FUNC_5(VAR_6));
        if (VAR_9 == VAR_4)
            VAR_9 = 134;
        if (VAR_7->cval)
            FUNC_6("non-null pointer default value\n");
    } else {
        VAR_9 = FUNC_2(VAR_6);
        switch(VAR_9) {
        case 135:
        case 134:
        case 132:
        case 138:
        case 136:
        case 131:
        case 130:
        case 129:
        case 133:
        case 128:
        case 137:
            break;
        default:
            FUNC_6("can't write value of type %d yet\n", VAR_9);
            return;
        }
    }

    FUNC_7(VAR_5, VAR_8, VAR_9, VAR_7->cval);
}
