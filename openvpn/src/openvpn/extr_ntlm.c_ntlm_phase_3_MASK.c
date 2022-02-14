
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int username ;
typedef int userdomain ;
typedef int uint8_t ;
struct TYPE_2__ {char* username; char* password; } ;
struct http_proxy_info {scalar_t__ auth_method; TYPE_1__ up; } ;
struct gc_arena {int dummy; } ;
typedef int phase3 ;
typedef int domain ;
typedef int buf2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,...) ;
 int FUNC_3 (unsigned char*,int*,int*) ;
 int FUNC_4 (int*,unsigned char*) ;
 int FUNC_5 (int*,int,int*,int,int*) ;
 int FUNC_6 (int*,int,int*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (unsigned char*,int,struct gc_arena*) ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char const*,int*,int) ;
 int FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,char*,size_t) ;
 int FUNC_20 (char*,char*) ;

const char *
FUNC_21(const struct http_proxy_info *VAR_5, const char *VAR_6,
             struct gc_arena *VAR_7)
{






    char VAR_8[sizeof(VAR_5->up.password) * 2];
    uint8_t VAR_9[128];
    uint8_t VAR_10[464];

    uint8_t VAR_11[VAR_2 + 5];
    uint8_t VAR_12[8], VAR_13[24];
    int VAR_14, VAR_15;

    uint8_t VAR_16[144];
    char VAR_17[256];
    char VAR_18[128];
    uint8_t VAR_19[VAR_3];
    uint8_t VAR_20[16];
    uint8_t *VAR_21 = VAR_16 + 16;
    int VAR_22 = 0;
    int VAR_23 = 0x40;
    size_t VAR_24;

    char VAR_25[128];
    char VAR_26[128];
    char *VAR_27;

    bool VAR_28 = (VAR_5->auth_method == VAR_1);

    FUNC_1(VAR_9);

    FUNC_0(FUNC_18(VAR_5->up.username) > 0);
    FUNC_0(FUNC_18(VAR_5->up.password) > 0);


    VAR_27 = FUNC_16(VAR_5->up.username, '\\');
    if (VAR_27 == ((void*)0))
    {
        FUNC_19(VAR_26, VAR_5->up.username, sizeof(VAR_26)-1);
        VAR_26[sizeof(VAR_26)-1] = 0;
        VAR_25[0] = 0;
    }
    else
    {
        FUNC_19(VAR_26, VAR_27+1, sizeof(VAR_26)-1);
        VAR_26[sizeof(VAR_26)-1] = 0;
        VAR_24 = VAR_27 - VAR_5->up.username;
        if (VAR_24 > sizeof(VAR_25) - 1)
        {
            VAR_24 = sizeof(VAR_25) - 1;
        }
        FUNC_19(VAR_25, VAR_5->up.username, VAR_24);
        VAR_25[VAR_24] = 0;
    }



    int VAR_29 = FUNC_20(VAR_8, VAR_5->up.password) - 2;
    FUNC_6((uint8_t *)VAR_8, VAR_29, VAR_11);


    FUNC_11(VAR_11 + VAR_2, 0, 5);

    VAR_15 = FUNC_14(VAR_6, VAR_9, -1);
    if (VAR_15 < 0)
    {
        return ((void*)0);
    }





    for (VAR_14 = 0; VAR_14<8; VAR_14++)
    {
        VAR_12[VAR_14] = VAR_9[VAR_14+24];
    }

    if (VAR_28)
    {
        int VAR_30;


        FUNC_17(VAR_18, VAR_26);
        FUNC_13(VAR_18);
        if (FUNC_18(VAR_26) + FUNC_18(VAR_25) < sizeof(VAR_18))
        {
            FUNC_15(VAR_18, VAR_25);
        }
        else
        {
            FUNC_12(VAR_4, "Warning: Username or domain too long");
        }
        FUNC_20(VAR_17, VAR_18);
        FUNC_5((uint8_t *)VAR_17, 2 * FUNC_18(VAR_18), VAR_11,
                     VAR_3, VAR_19);


        FUNC_11(VAR_21, 0, 128);
        VAR_21[0x00] = 1;
        VAR_21[0x01] = 1;
        VAR_21[0x04] = 0;
        FUNC_8(&VAR_21[0x08]);
        FUNC_7(&VAR_21[0x10]);
        VAR_21[0x18] = 0;
        const size_t VAR_31 = 0x14;
        unsigned long VAR_32 = VAR_9[VAR_31] | (VAR_9[VAR_31 + 1] << 8)
                              |(VAR_9[VAR_31 + 2] << 16) | (VAR_9[VAR_31 + 3] << 24);
        if ((VAR_32 & 0x00800000) == 0x00800000)
        {
            VAR_30 = VAR_9[0x28];
            if (VAR_30 > 96)
            {
                VAR_30 = 96;
            }

            {
                uint8_t *VAR_33;
                uint8_t VAR_34 = VAR_9[0x2c];
                if (VAR_34 + VAR_30 > sizeof(VAR_9))
                {
                    return ((void*)0);
                }

                VAR_33 = VAR_9 + VAR_34;

                FUNC_10(&VAR_21[0x1c], VAR_33, VAR_30);
            }
        }
        else
        {
            VAR_30 = 0;
        }


        VAR_21[0x1c + VAR_30] = 0;


        VAR_22 = 0x20 + VAR_30;


        FUNC_10(&VAR_16[8], VAR_12, 8);


        FUNC_5(&VAR_16[8], VAR_22 + 8, VAR_19,
                     VAR_3, VAR_20);




        FUNC_10(VAR_16, VAR_20, VAR_3);
    }
    else
    {
        unsigned char VAR_35[VAR_0], VAR_36[VAR_0];
        unsigned char VAR_37[VAR_0];

        FUNC_4(VAR_11, VAR_35);
        FUNC_3(VAR_35, VAR_12, VAR_13);

        FUNC_4(&VAR_11[VAR_0 - 1], VAR_36);
        FUNC_3(VAR_36, VAR_12, &VAR_13[VAR_0]);

        FUNC_4(&VAR_11[2 * (VAR_0 - 1)], VAR_37);
        FUNC_3(VAR_37, VAR_12,
                               &VAR_13[VAR_0 * 2]);
    }


    FUNC_11(VAR_10, 0, sizeof(VAR_10));

    FUNC_17((char *)VAR_10, "NTLMSSP\0");
    VAR_10[8] = 3;

    if (VAR_28)
    {
        FUNC_2(0x14, VAR_16, VAR_22 + 16,
                            VAR_10, &VAR_23);
    }
    else
    {
        FUNC_2(0x14, VAR_13, 24, VAR_10, &VAR_23);
    }


    FUNC_2(0x24, VAR_26, FUNC_18(VAR_26), VAR_10,
                        &VAR_23);



    FUNC_2(0x1c, VAR_25, FUNC_18(VAR_25), VAR_10, &VAR_23);


    VAR_10[0x10] = VAR_23;
    VAR_10[0x30] = VAR_23;
    VAR_10[0x38] = VAR_23;


    VAR_10[0x3c] = 0x02;
    VAR_10[0x3d] = 0x02;

    return ((const char *)FUNC_9((unsigned char *)VAR_10,
                                              VAR_23, VAR_7));
}
