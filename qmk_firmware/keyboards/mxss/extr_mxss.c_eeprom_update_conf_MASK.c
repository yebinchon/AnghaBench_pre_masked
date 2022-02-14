
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; int raw; int mode; } ;
typedef TYPE_1__ fled_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(void)
{

    fled_config VAR_4;
    VAR_4.mode = VAR_2;


    if (VAR_3 == 255)
        VAR_4.val = 256 / VAR_1;
    else
        VAR_4.val = VAR_3 / VAR_1;


    FUNC_0(1);
 FUNC_1(VAR_0, VAR_4.raw);
}
