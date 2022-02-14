
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;


 int FUNC_0 (char*,int,struct timeval*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,char const*,int) ;

int FUNC_4(const char *VAR_0, int VAR_1, struct timeval *VAR_2, size_t *VAR_3, char *VAR_4, size_t VAR_5) {
    int VAR_6 = -1;

    const char *VAR_7 = VAR_0;
    while(*VAR_7) {
        const char *VAR_8 = VAR_7;


        if(*VAR_8 == '/')
            while(!FUNC_1(*VAR_8) && *VAR_8 != ',') VAR_7 = ++VAR_8;


        while(FUNC_1(*VAR_8) || *VAR_8 == ',') VAR_7 = ++VAR_8;


        while(*VAR_8 && !FUNC_1(*VAR_8) && *VAR_8 != ',' && *VAR_8 != '/') VAR_8++;


        if(!*VAR_7 || VAR_7 == VAR_8) break;

        char VAR_9[VAR_8 - VAR_7 + 1];
        FUNC_3(VAR_9, VAR_7, VAR_8 - VAR_7);
        if(VAR_3) *VAR_3 += 1;
        VAR_6 = FUNC_0(VAR_9, VAR_1, VAR_2);
        if(VAR_6 != -1) {
            if(VAR_4 && VAR_5) {
                FUNC_2(VAR_4, VAR_9, VAR_5);
                VAR_4[VAR_5 - 1] = '\0';
            }
            break;
        }
        VAR_7 = VAR_8;
    }

    return VAR_6;
}
