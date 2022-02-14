
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_2__ {int cbuf; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,int) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,char*) ;
 char** FUNC_8 (int) ;

sds *FUNC_9(int *VAR_1) {
    sds *VAR_2 = ((void*)0);
    int VAR_3 = 0;
    if (FUNC_4(VAR_0.cbuf) == 0) return ((void*)0);



    sds VAR_4 = FUNC_1(VAR_0.cbuf);
    char *VAR_5 = VAR_4;






    VAR_5 = FUNC_6(VAR_5,'*'); if (!VAR_5) goto protoerr;
    char *VAR_6 = VAR_5+1;
    VAR_5 = FUNC_7(VAR_5,"\r\n"); if (!VAR_5) goto protoerr;
    *VAR_5 = '\0'; VAR_5 += 2;
    *VAR_1 = FUNC_0(VAR_6);
    if (*VAR_1 <= 0 || *VAR_1 > 1024) goto protoerr;


    VAR_2 = FUNC_8(sizeof(sds)*(*VAR_1));
    VAR_3 = 0;
    while(VAR_3 < *VAR_1) {
        if (*VAR_5 != '$') goto protoerr;
        VAR_6 = VAR_5+1;
        VAR_5 = FUNC_7(VAR_5,"\r\n"); if (!VAR_5) goto protoerr;
        *VAR_5 = '\0'; VAR_5 += 2;
        int VAR_7 = FUNC_0(VAR_6);
        if (VAR_7 <= 0 || VAR_7 > 1024) goto protoerr;
        VAR_2[VAR_3++] = FUNC_5(VAR_5,VAR_7);
        VAR_5 += VAR_7;
        if (VAR_5[0] != '\r' || VAR_5[1] != '\n') goto protoerr;
        VAR_5 += 2;
    }
    FUNC_2(VAR_4);
    return VAR_2;

protoerr:
    FUNC_3(VAR_2,VAR_3);
    FUNC_2(VAR_4);
    return ((void*)0);
}
