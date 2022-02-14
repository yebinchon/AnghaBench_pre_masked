
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int MEMRMP; } ;
struct TYPE_4__ {int Pin; int Pull; int Mode; int Speed; } ;
typedef TYPE_1__ GPIO_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{


 GPIO_InitTypeDef VAR_10;





    FUNC_4();
    VAR_10.Mode = VAR_5;
    VAR_10.Pull = VAR_6;
    VAR_10.Speed = VAR_8;
    VAR_10.Pin = VAR_0;
    FUNC_1(VAR_1, &VAR_10);

    FUNC_0(VAR_1, VAR_0);
    FUNC_3();
    VAR_10.Mode = VAR_4;
    VAR_10.Pull = VAR_7;
    VAR_10.Pin = VAR_2;
    FUNC_1(VAR_3, &VAR_10);


    if ( FUNC_2(VAR_3, VAR_2 ))

    {

        VAR_9->MEMRMP = 0x00000001;


    asm (
        "LDR     R0, =0x00000000\n\t"
        "LDR     SP,[R0, #0]\n\t"
        );



    asm (
        "LDR     R0,[R0, #4]\n\t"
        "BX      R0\n\t"
        );

    }
}
