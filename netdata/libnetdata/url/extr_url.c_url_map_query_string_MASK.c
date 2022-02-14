
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(char **VAR_0, char *VAR_1) {
    (void)VAR_0;
    (void)VAR_1;
    int VAR_2 = 0;


    char *VAR_3 = VAR_1;
    char *VAR_4;


    VAR_0[VAR_2++] = VAR_3;
    while(VAR_3) {
        VAR_4 = FUNC_0((VAR_3+1), '&');
        if(VAR_4) {
            VAR_0[VAR_2++] = VAR_4;
        }

        VAR_3 = VAR_4;
    }


    if (VAR_2 == 1) {
        VAR_3 = VAR_1;
        while(VAR_3) {
            VAR_4 = FUNC_0((VAR_3+1), '%');
            if(VAR_4) {
                char *VAR_5 = (VAR_4+1);
                if (!FUNC_1(VAR_5, "3f", 2) || !FUNC_1(VAR_5, "3F", 2)) {
                    VAR_0[VAR_2++] = VAR_4;
                }
            }
            VAR_3 = VAR_4;
        }
    }

    return VAR_2;
}
