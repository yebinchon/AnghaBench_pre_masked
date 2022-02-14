
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SYS_PORTS_PIN_DIRECTION ;
typedef int PORTS_MODULE_ID ;
typedef int PORTS_CHANNEL ;
typedef int PORTS_BIT_POS ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;

void FUNC_2 ( PORTS_MODULE_ID VAR_1,
                                 SYS_PORTS_PIN_DIRECTION VAR_2,
                                 PORTS_CHANNEL VAR_3,
                                 PORTS_BIT_POS VAR_4 )
{
    if (VAR_2 == VAR_0)
    {
        FUNC_1(VAR_1, VAR_3, VAR_4);
    }
    else
    {
        FUNC_0(VAR_1, VAR_3, VAR_4);
    }
}
