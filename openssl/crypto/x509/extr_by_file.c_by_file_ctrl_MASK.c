
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_LOOKUP ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 char const* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char const*,long) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(X509_LOOKUP *VAR_4, int VAR_5, const char *VAR_6,
                        long VAR_7, char **VAR_8)
{
    int VAR_9 = 0;
    const char *VAR_10;

    switch (VAR_5) {
    case 128:
        if (VAR_7 == VAR_0) {
            VAR_10 = FUNC_5(FUNC_1());
            if (VAR_10)
                VAR_9 = (FUNC_2(VAR_4, VAR_10,
                                              VAR_1) != 0);

            else
                VAR_9 = (FUNC_2
                      (VAR_4, FUNC_0(),
                       VAR_1) != 0);

            if (!VAR_9) {
                FUNC_4(VAR_2, VAR_3);
            }
        } else {
            if (VAR_7 == VAR_1)
                VAR_9 = (FUNC_2(VAR_4, VAR_6,
                                              VAR_1) != 0);
            else
                VAR_9 = (FUNC_3(VAR_4, VAR_6, (int)VAR_7) != 0);
        }
        break;
    }
    return VAR_9;
}
