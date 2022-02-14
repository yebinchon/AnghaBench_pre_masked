
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
    uint8_t VAR_3 = FUNC_1(VAR_1, VAR_0);

    if (VAR_3 == 0)
    {
        FUNC_2();

        if (!VAR_2)
        {
            VAR_2 = 1;
            FUNC_3();
            FUNC_0();
            FUNC_4("mcp23017 attached!!!\n");
        }
    }
    else
    {
        if (VAR_2)
        {
            VAR_2 = 0;
            FUNC_0();
            FUNC_4("mcp23017 deattached!!!\n");
        }
    }

    return;
}
