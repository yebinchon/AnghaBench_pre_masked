
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,unsigned int*,char*,size_t,int,int ,int) ;
 int FUNC_1 (char*,unsigned int*,char*,unsigned int,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (int const*,char*,size_t) ;
 int VAR_1 ;

int
FUNC_7(const uint8_t *VAR_2, size_t VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    unsigned int VAR_8, VAR_9;
    VAR_8 = VAR_3 + 600 + (VAR_3 / 100);
    char *VAR_10 = FUNC_5(VAR_8);

    VAR_5 = (VAR_3 % 11) + 1;
    if (VAR_5 > 9) {
        VAR_5 = 9;
    }
    VAR_6 = VAR_3 % 251;


    VAR_4 = FUNC_0(VAR_10, &VAR_8, (char *)VAR_2, VAR_3,
            VAR_5, 0, VAR_6);
    if (VAR_4 != VAR_0) {



        FUNC_4(VAR_10);
        return 0;
    }

    VAR_9 = VAR_3*2;
    char *VAR_11 = FUNC_5(VAR_9);
    VAR_7 = VAR_3 % 2;
    VAR_4 = FUNC_1(VAR_11, &VAR_9, VAR_10, VAR_8, VAR_7,
                          0);
    if (VAR_4 != VAR_0) {



        FUNC_4(VAR_10);
        FUNC_4(VAR_11);
        return 0;
    }

    FUNC_2(VAR_9 == VAR_3);
    FUNC_2(FUNC_6(VAR_2, VAR_11, VAR_3) == 0);
    FUNC_4(VAR_10);
    FUNC_4(VAR_11);
    return 0;
}
