
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int resp; } ;
typedef TYPE_1__ client ;
typedef int buf ;


 int FUNC_0 (TYPE_1__*,char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;
 size_t FUNC_2 (char*,int,char*,size_t) ;

void FUNC_3(client *VAR_0, const char *VAR_1, size_t VAR_2, const char *VAR_3) {
    if (VAR_0->resp == 2) {
        FUNC_0(VAR_0,VAR_1,VAR_2);
    } else {
        char VAR_4[32];
        size_t VAR_5 = FUNC_2(VAR_4,sizeof(VAR_4),"=%zu\r\nxxx:",VAR_2+4);
        char *VAR_6 = VAR_4+VAR_5-4;
        for (int VAR_7 = 0; VAR_7 < 3; VAR_7++) {
            if (*VAR_3 == '\0') {
                VAR_6[VAR_7] = ' ';
            } else {
                VAR_6[VAR_7] = *VAR_3++;
            }
        }
        FUNC_1(VAR_0,VAR_4,VAR_5);
        FUNC_1(VAR_0,VAR_1,VAR_2);
        FUNC_1(VAR_0,"\r\n",2);
    }
}
