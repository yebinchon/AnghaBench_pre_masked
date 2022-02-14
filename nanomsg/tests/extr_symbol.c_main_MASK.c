
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sym ;
struct nn_symbol_properties {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (int,int*) ;
 int FUNC_3 (int,struct nn_symbol_properties*,int) ;

int FUNC_4 ()
{
    int VAR_1;
    struct nn_symbol_properties VAR_2;
    int VAR_3;

    FUNC_0 (FUNC_2 (-1, ((void*)0)) == ((void*)0));
    FUNC_0 (FUNC_1 () == VAR_0);
    FUNC_0 (FUNC_3 (-1, &VAR_2, (int) sizeof (VAR_2)) == 0);

    FUNC_0 (FUNC_2 (2000, ((void*)0)) == ((void*)0));
    FUNC_0 (FUNC_1 () == VAR_0);
    FUNC_0 (FUNC_3 (2000, &VAR_2, (int) sizeof (VAR_2)) == 0);

    FUNC_0 (FUNC_2 (6, &VAR_3) != ((void*)0));
    FUNC_0 (VAR_3 != 0);
    FUNC_0 (FUNC_3 (6, &VAR_2, (int) sizeof (VAR_2)) == sizeof (VAR_2));

    for (VAR_1 = 0; ; ++VAR_1) {
        const char* VAR_4 = FUNC_2 (VAR_1, &VAR_3);
        if (VAR_4 == ((void*)0)) {
            FUNC_0 (FUNC_1 () == VAR_0);
            break;
        }
    }

    for (VAR_1 = 0; ; ++VAR_1) {
        if (FUNC_3 (VAR_1, &VAR_2, sizeof (VAR_2)) == 0)
            break;
    }

    return 0;
}
