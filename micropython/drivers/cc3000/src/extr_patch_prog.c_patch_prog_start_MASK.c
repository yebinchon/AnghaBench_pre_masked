
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;
 unsigned char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int ,int,int,unsigned char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int,int,unsigned char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*) ;
 int VAR_12 ;
 int FUNC_8 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 () ;

void FUNC_10()
{
    unsigned short VAR_16;
    unsigned char *VAR_17;

    FUNC_7("Initializing module...\n");




    FUNC_1(1);


    VAR_11 = FUNC_2(VAR_4);

    VAR_12 = 1;

    FUNC_7("Reading RM parameters...\n");
    while ((VAR_12) && (VAR_7 < 3)) {


        VAR_12 = 0;
        VAR_17 = VAR_5;
        for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
            VAR_12 |= FUNC_3(VAR_0, 8, 8*VAR_16, VAR_17);
            VAR_17 += 8;
        }
        VAR_7++;
    }


    if (VAR_7 == 3) {
        FUNC_7("RM is not valid, loading default one...\n");
        VAR_17 = (unsigned char *)VAR_6;
    } else {
        FUNC_7("RM is valid.\n");
        VAR_17 = VAR_5;
    }

    VAR_12 = 1;

    FUNC_7("Writing new FAT\n");
    while (VAR_12) {

        VAR_12 = FUNC_0(VAR_3[0], VAR_3[1]);
    }

    VAR_12 = 1;

    FUNC_7("Writing RM parameters...\n");
    while (VAR_12) {


        VAR_12 = 0;

        for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
            VAR_12 |= FUNC_5(VAR_0,
                                         32,
                                         32*VAR_16,
                                         (VAR_17 + 32*VAR_16));
        }
    }

    VAR_12 = 1;


    if (VAR_11 == 0) {

        VAR_4[0] &= 0xfe;
        FUNC_7("Writing back MAC address..\n");
        while (VAR_12) {
            VAR_12 = FUNC_4(VAR_4);
        }
    }


    VAR_13 = 1;
    FUNC_7("Updating driver patch...\n");
    while (VAR_13) {



        VAR_13 = FUNC_6(VAR_1,
                                        VAR_8,
                                        VAR_15);
    }


    VAR_14 = 1;
    FUNC_7("Updating firmware patch...\n");
    while (VAR_14) {



        VAR_14 = FUNC_6(VAR_2,
                                        VAR_9,
                                        VAR_10);
    }

    FUNC_7("Update complete, resetting module\n" "If this doesn't work, reset manually...\n");


    FUNC_9();
    FUNC_8(500);


    FUNC_1(0);



    if (VAR_11 != 0) {
        FUNC_7("MAC address is not valid, please write a new one\n");
    }


    FUNC_7("All done, call wlan.patch_version()\n");
}
