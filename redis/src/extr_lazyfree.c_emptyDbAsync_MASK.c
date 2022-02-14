
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * expires; int * dict; } ;
typedef TYPE_1__ redisDb ;
typedef int dict ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int VAR_1 ;
 void* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(redisDb *VAR_4) {
    dict *VAR_5 = VAR_4->dict, *VAR_6 = VAR_4->expires;
    VAR_4->dict = FUNC_2(&VAR_1,((void*)0));
    VAR_4->expires = FUNC_2(&VAR_2,((void*)0));
    FUNC_0(VAR_3,FUNC_3(VAR_5));
    FUNC_1(VAR_0,((void*)0),VAR_5,VAR_6);
}
