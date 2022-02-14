
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dir; } ;
typedef TYPE_1__ LP_DIR_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(LP_DIR_CTX **VAR_2)
{
    if (VAR_2 != ((void*)0) && *VAR_2 != ((void*)0)) {
        int VAR_3 = FUNC_0((*VAR_2)->dir);

        FUNC_1(*VAR_2);
        switch (VAR_3) {
        case 0:
            return 1;
        case -1:
            return 0;
        default:
            break;
        }
    }
    VAR_1 = VAR_0;
    return 0;
}
