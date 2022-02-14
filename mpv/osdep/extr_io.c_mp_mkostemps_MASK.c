
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crap ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,int) ;
 size_t FUNC_2 () ;
 int FUNC_3 (char*,int,char*,size_t) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int FUNC_6(char *VAR_7, int VAR_8, int VAR_9)
{
    size_t VAR_10 = FUNC_4(VAR_7);
    char *VAR_11 = VAR_10 >= 6 + VAR_8 ? &VAR_7[VAR_10 - (6 + VAR_8)] : ((void*)0);
    if (!VAR_11 || FUNC_5(VAR_11, "XXXXXX", 6) != 0) {
        VAR_6 = VAR_1;
        return -1;
    }

    for (size_t VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {


        size_t VAR_13 = FUNC_2();
        char VAR_14[7] = "";
        FUNC_3(VAR_14, sizeof(VAR_14), "%06zx", VAR_13);
        FUNC_0(VAR_11, VAR_14, 6);

        int VAR_15 = FUNC_1(VAR_7, VAR_4 | VAR_2 | VAR_3 | VAR_9, 0600);
        if (VAR_15 >= 0 || VAR_6 != VAR_0)
            return VAR_15;
    }

    VAR_6 = VAR_0;
    return -1;
}
