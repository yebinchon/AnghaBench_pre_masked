
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int tld_name; } ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const*,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int const*,int) ;
 int * FUNC_4 (int const*,char,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_5(const WCHAR *VAR_1, DWORD VAR_2,
                             INT *VAR_3) {
    const WCHAR *VAR_4, *VAR_5, *VAR_6;

    VAR_6 = VAR_1+VAR_2-1;

    *VAR_3 = -1;




    if(VAR_2 < 4)
        return;

    VAR_4 = FUNC_4(VAR_1, '.', VAR_2);
    if(!VAR_4)

        return;

    VAR_5 = FUNC_4(VAR_1, '.', VAR_4-VAR_1);
    if(!VAR_5) {






        if(VAR_4-VAR_1 == 0) {
            if(VAR_6-(VAR_4-1) < 3)
                return;
        } else if(VAR_4-VAR_1 == 3) {
            DWORD VAR_7;
            for(VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); ++VAR_7) {
                if(!FUNC_1(VAR_1, VAR_0[VAR_7].tld_name, 3))
                    return;
            }
        } else if(VAR_4-VAR_1 < 3)




            return;


        *VAR_3 = 0;
    } else if(VAR_6+1-VAR_4 > 3) {




        *VAR_3 = (VAR_5+1)-VAR_1;
    } else if(VAR_4 - (VAR_5+1) < 4) {
        DWORD VAR_8;






        if(VAR_4 - (VAR_5+1) == 3) {
            for(VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); ++VAR_8) {
                if(!FUNC_1(VAR_5+1, VAR_0[VAR_8].tld_name, 3)) {
                    const WCHAR *VAR_9 = FUNC_4(VAR_1, '.', VAR_5-VAR_1);

                    if(!VAR_9)
                        *VAR_3 = 0;
                    else
                        *VAR_3 = (VAR_9+1) - VAR_1;
                    FUNC_2("Found domain name %s\n", FUNC_3(VAR_1+*VAR_3,
                                                        (VAR_1+VAR_2)-(VAR_1+*VAR_3)));
                    return;
                }
            }

            *VAR_3 = (VAR_5+1)-VAR_1;
        } else {




            const WCHAR *VAR_10 = FUNC_4(VAR_1, '.', VAR_5-VAR_1);

            if(!VAR_10)
                *VAR_3 = 0;
            else
                *VAR_3 = (VAR_10+1) - VAR_1;
        }
    } else {




        *VAR_3 = (VAR_5+1)-VAR_1;
    }

    FUNC_2("Found domain name %s\n", FUNC_3(VAR_1+*VAR_3,
                                        (VAR_1+VAR_2)-(VAR_1+*VAR_3)));
}
