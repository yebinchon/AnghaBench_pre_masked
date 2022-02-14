
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sbuf ;
typedef int dbuf ;
struct TYPE_5__ {int resp; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (char*,int,char*,double,...) ;

void FUNC_4(client *VAR_1, double VAR_2) {
    if (FUNC_2(VAR_2)) {


        if (VAR_1->resp == 2) {
            FUNC_0(VAR_1, VAR_2 > 0 ? "inf" : "-inf");
        } else {
            FUNC_1(VAR_1, VAR_2 > 0 ? ",inf\r\n" : ",-inf\r\n",
                              VAR_2 > 0 ? 6 : 7);
        }
    } else {
        char VAR_3[VAR_0+3],
             VAR_4[VAR_0+32];
        int VAR_5, VAR_6;
        if (VAR_1->resp == 2) {
            VAR_5 = FUNC_3(VAR_3,sizeof(VAR_3),"%.17g",VAR_2);
            VAR_6 = FUNC_3(VAR_4,sizeof(VAR_4),"$%d\r\n%s\r\n",VAR_5,VAR_3);
            FUNC_1(VAR_1,VAR_4,VAR_6);
        } else {
            VAR_5 = FUNC_3(VAR_3,sizeof(VAR_3),",%.17g\r\n",VAR_2);
            FUNC_1(VAR_1,VAR_3,VAR_5);
        }
    }
}
