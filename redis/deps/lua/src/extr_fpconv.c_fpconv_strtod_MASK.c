
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char VAR_1 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;
 int VAR_2 ;
 char* FUNC_5 (char*,char) ;
 double FUNC_6 (char const*,char**) ;
 int FUNC_7 (char const*) ;

double FUNC_8(const char *VAR_3, char **VAR_4)
{
    char VAR_5[VAR_0];
    char *VAR_6, *VAR_7, *VAR_8;
    int VAR_9;
    double VAR_10;


    if (VAR_1 == '.')
        return FUNC_6(VAR_3, VAR_4);

    VAR_9 = FUNC_7(VAR_3);
    if (!VAR_9) {

        *VAR_4 = (char *)VAR_3;
        return 0;
    }


    if (VAR_9 >= VAR_0) {

        VAR_6 = FUNC_3(VAR_9 + 1);
        if (!VAR_6) {
            FUNC_1(VAR_2, "Out of memory");
            FUNC_0();
        }
    } else {

        VAR_6 = VAR_5;
    }
    FUNC_4(VAR_6, VAR_3, VAR_9);
    VAR_6[VAR_9] = 0;


    VAR_8 = FUNC_5(VAR_6, '.');
    if (VAR_8)
        *VAR_8 = VAR_1;

    VAR_10 = FUNC_6(VAR_6, &VAR_7);
    *VAR_4 = (char *)&VAR_3[VAR_7 - VAR_6];
    if (VAR_9 >= VAR_0)
        FUNC_2(VAR_6);

    return VAR_10;
}
