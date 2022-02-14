
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Speed; int Pull; int Mode; int Pin; } ;
typedef TYPE_1__ GPIO_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;

void FUNC_3(void) {
    GPIO_InitTypeDef VAR_6;

    FUNC_2();


    VAR_6.Pin = VAR_2;
    VAR_6.Mode = VAR_1;
    VAR_6.Pull = VAR_4;
    VAR_6.Speed = VAR_5;
    FUNC_0(VAR_0, &VAR_6);
    FUNC_1(VAR_0, VAR_2, VAR_3);
}
