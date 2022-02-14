
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,char*) ;

void
FUNC_2(void)
{
    u_char *VAR_1;
    uint32_t VAR_2[5], VAR_3[4], VAR_4;

    VAR_2[0] = 0;
    VAR_2[1] = 0;
    VAR_2[2] = 0;
    VAR_2[3] = 0;
    VAR_2[4] = 0;

    FUNC_0(0, VAR_2);

    VAR_1 = (u_char *) &VAR_2[1];

    if (VAR_2[0] == 0) {
        return;
    }

    FUNC_0(1, VAR_3);

    if (FUNC_1(VAR_1, "GenuineIntel") == 0) {

        switch ((VAR_3[0] & 0xf00) >> 8) {


        case 5:
            VAR_0 = 32;
            break;


        case 6:
            VAR_0 = 32;

            VAR_4 = ((VAR_3[0] & 0xf0000) >> 8) | (VAR_3[0] & 0xf0);

            if (VAR_4 >= 0xd0) {

                VAR_0 = 64;
            }

            break;





        case 15:
            VAR_0 = 128;
            break;
        }

    } else if (FUNC_1(VAR_1, "AuthenticAMD") == 0) {
        VAR_0 = 64;
    }
}
