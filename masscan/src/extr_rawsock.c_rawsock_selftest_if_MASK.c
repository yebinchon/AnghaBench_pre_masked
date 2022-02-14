
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Adapter {int dummy; } ;
typedef int ifname2 ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (struct Adapter*,unsigned int,unsigned char*,unsigned int,unsigned char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct Adapter*) ;
 unsigned int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,unsigned char*) ;
 int FUNC_9 (char const*,unsigned int*) ;
 int FUNC_10 (char*,int) ;
 struct Adapter* FUNC_11 (char const*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_12(const char *VAR_1)
{
    int VAR_2;
    unsigned VAR_3 = 0;
    unsigned VAR_4 = 0;
    unsigned char VAR_5[6] = {0,0,0,0,0,0};
    struct Adapter *VAR_6;
    char VAR_7[246];

    if (VAR_1 == ((void*)0) || VAR_1[0] == 0) {
        VAR_2 = FUNC_10(VAR_7, sizeof(VAR_7));
        if (VAR_2) {
            FUNC_2(VAR_0, "get-default-if: returned err %d\n", VAR_2);
            return -1;
        }
        VAR_1 = VAR_7;
    }


    FUNC_5("if = %s\n", VAR_1);


    VAR_3 = FUNC_7(VAR_1);
    if (VAR_3 == 0) {
        FUNC_2(VAR_0, "get-ip: returned err\n");
    } else {
        FUNC_5("ip = %u.%u.%u.%u\n",
            (unsigned char)(VAR_3>>24),
            (unsigned char)(VAR_3>>16),
            (unsigned char)(VAR_3>>8),
            (unsigned char)(VAR_3>>0));
    }


    VAR_2 = FUNC_8(VAR_1, VAR_5);
    if (VAR_2) {
        FUNC_2(VAR_0, "get-adapter-mac: returned err=%d\n", VAR_2);
    } else {
        FUNC_5("mac = %02x-%02x-%02x-%02x-%02x-%02x\n",
            VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5]);
    }


    VAR_2 = FUNC_9(VAR_1, &VAR_4);
    if (VAR_2) {
        FUNC_2(VAR_0, "get-default-gateway: returned err=%d\n", VAR_2);
    } else {
        unsigned char VAR_8[6];

        FUNC_5("gateway = %u.%u.%u.%u\n",
            (unsigned char)(VAR_4>>24),
            (unsigned char)(VAR_4>>16),
            (unsigned char)(VAR_4>>8),
            (unsigned char)(VAR_4>>0));


        VAR_6 = FUNC_11(VAR_1, 0, 0, 0, 0, 0, 0, 0);
        if (VAR_6 == 0) {
            FUNC_0(1, "if:%s: failed\n", VAR_1);
            return -1;
        } else {
            FUNC_5("pcap = opened\n");
        }

        FUNC_4(VAR_8, 0, 6);
        FUNC_1(
                VAR_6,
                VAR_3,
                VAR_5,
                VAR_4,
                VAR_8);

        if (FUNC_3(VAR_8, "\0\0\0\0\0\0", 6) != 0) {
            FUNC_5("gateway = %02x-%02x-%02x-%02x-%02x-%02x\n",
                VAR_8[0],
                VAR_8[1],
                VAR_8[2],
                VAR_8[3],
                VAR_8[4],
                VAR_8[5]
            );
        } else {
            FUNC_5("gateway = [failed to ARP address]\n");
        }
        FUNC_6(VAR_6);
    }

    return 0;
}
