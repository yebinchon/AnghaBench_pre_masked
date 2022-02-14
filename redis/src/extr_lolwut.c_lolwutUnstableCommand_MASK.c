
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int client ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(client *VAR_1) {
    sds VAR_2 = FUNC_5("Redis ver. ");
    VAR_2 = FUNC_1(VAR_2,VAR_0);
    VAR_2 = FUNC_2(VAR_2,"\n",1);
    FUNC_0(VAR_1,VAR_2,FUNC_4(VAR_2),"txt");
    FUNC_3(VAR_2);
}
