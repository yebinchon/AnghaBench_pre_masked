
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_5__ {int resp; } ;
typedef TYPE_1__ client ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int * FUNC_2 (long double,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,long double,int ) ;

void FUNC_5(client *VAR_2, long double VAR_3) {
    if (VAR_2->resp == 2) {
        robj *VAR_4 = FUNC_2(VAR_3,1);
        FUNC_0(VAR_2,VAR_4);
        FUNC_3(VAR_4);
    } else {
        char VAR_5[VAR_1];
        int VAR_6 = FUNC_4(VAR_5,sizeof(VAR_5),VAR_3,VAR_0);
        FUNC_1(VAR_2,",",1);
        FUNC_1(VAR_2,VAR_5,VAR_6);
        FUNC_1(VAR_2,"\r\n",2);
    }
}
