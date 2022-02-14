
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

VOID FUNC_1(CHAR VAR_1)
{
    switch (VAR_1)
    {
        case '\0':
        {

            break;
        }

        case '\b':
        {

            FUNC_0(VAR_0, '\b');
            FUNC_0(VAR_0, ' ');
            FUNC_0(VAR_0, '\b');
            break;
        }

        default:
        {




            if (VAR_1 < 0x20 && VAR_1 != '\r' && VAR_1 != '\n')
            {
                FUNC_0(VAR_0, '^');
                VAR_1 += 'A' - 1;
            }


            FUNC_0(VAR_0, VAR_1);
        }
    }
}
