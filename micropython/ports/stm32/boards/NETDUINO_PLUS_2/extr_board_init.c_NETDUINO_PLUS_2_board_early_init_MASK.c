
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* Pin; int Pull; int Mode; int Speed; } ;
typedef TYPE_1__ GPIO_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 () ;

void FUNC_3(void) {

    FUNC_2();


    GPIO_InitTypeDef VAR_7;
    VAR_7.Speed = VAR_6;
    VAR_7.Mode = VAR_1;
    VAR_7.Pull = VAR_5;
    VAR_7.Pin = VAR_3;
    FUNC_0(VAR_0, &VAR_7);
    FUNC_1(VAR_0, VAR_3, VAR_4);
}
