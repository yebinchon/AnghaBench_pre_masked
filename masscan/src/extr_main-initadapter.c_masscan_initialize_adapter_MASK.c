
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int packet_trace; } ;
struct Masscan {TYPE_4__* nic; int is_offline; scalar_t__ bpf_filter; TYPE_3__ nmap; int is_sendq; int is_pfring; } ;
typedef int ifname2 ;
struct TYPE_5__ {unsigned int first; unsigned int last; int range; } ;
struct TYPE_6__ {TYPE_1__ ip; } ;
struct TYPE_8__ {char* ifname; char* my_mac; scalar_t__ my_mac_count; char* router_mac; unsigned int router_ip; int adapter; int vlan_id; int is_vlan; TYPE_2__ src; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,unsigned int,unsigned char*,unsigned int,unsigned char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (unsigned char*,char*,int) ;
 unsigned int FUNC_5 (char*) ;
 int FUNC_6 (char*,unsigned char*) ;
 int FUNC_7 (char*,unsigned int*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ,unsigned char*,char*) ;
 int FUNC_10 (char*,int ,int ,int ,int ,void*,int ,int ) ;
 int VAR_0 ;

int
FUNC_11(
    struct Masscan *VAR_1,
    unsigned VAR_2,
    unsigned char *VAR_3,
    unsigned char *VAR_4
    )
{
    char *VAR_5;
    char VAR_6[256];
    unsigned VAR_7 = 0;

    if (VAR_1 == ((void*)0))
        return -1;

    FUNC_0(1, "if: initializing adapter interface\n");
    if (VAR_1->nic[VAR_2].ifname[0])
        VAR_5 = VAR_1->nic[VAR_2].ifname;
    else {

        int VAR_8;
        VAR_6[0] = '\0';
        VAR_8 = FUNC_8(VAR_6, sizeof(VAR_6));
        if (VAR_8 || VAR_6[0] == '\0') {
            FUNC_2(VAR_0, "FAIL: could not determine default interface\n");
            FUNC_2(VAR_0, "FAIL:... try \"--interface ethX\"\n");
            return -1;
        }
        VAR_5 = VAR_6;
    }
    FUNC_0(2, "if: interface=%s\n", VAR_5);
    VAR_7 = VAR_1->nic[VAR_2].src.ip.first;
    if (VAR_7 == 0) {
        VAR_7 = FUNC_5(VAR_5);
        VAR_1->nic[VAR_2].src.ip.first = VAR_7;
        VAR_1->nic[VAR_2].src.ip.last = VAR_7;
        VAR_1->nic[VAR_2].src.ip.range = 1;
    }
    if (VAR_7 == 0) {
        FUNC_2(VAR_0, "FAIL: failed to detect IP of interface \"%s\"\n",
                        VAR_5);
        FUNC_2(VAR_0, " [hint] did you spell the name correctly?\n");
        FUNC_2(VAR_0, " [hint] if it has no IP address, manually set with "
                        "\"--adapter-ip 192.168.100.5\"\n");
        return -1;
    }
    FUNC_0(2, "if:%s: adapter-ip=%u.%u.%u.%u\n",
        VAR_5,
        (VAR_7>>24)&0xFF,
        (VAR_7>>16)&0xFF,
        (VAR_7>> 8)&0xFF,
        (VAR_7>> 0)&0xFF
        );
    FUNC_4(VAR_3, VAR_1->nic[VAR_2].my_mac, 6);
    if (VAR_1->nic[VAR_2].my_mac_count == 0) {
        if (FUNC_3(VAR_3, "\0\0\0\0\0\0", 6) == 0) {
            FUNC_6(VAR_5, VAR_3);
        }
        if (FUNC_3(VAR_3, "\0\0\0\0\0\0", 6) == 0) {
            FUNC_2(VAR_0, "FAIL: failed to detect MAC address of interface:"
                    " \"%s\"\n", VAR_5);
            FUNC_2(VAR_0, " [hint] try something like "
                    "\"--adapter-mac 00-11-22-33-44-55\"\n");
            return -1;
        }
    }
    FUNC_0(2, "if:%s: adapter-mac=%02x-%02x-%02x-%02x-%02x-%02x\n",
        VAR_5,
        VAR_3[0],
        VAR_3[1],
        VAR_3[2],
        VAR_3[3],
        VAR_3[4],
        VAR_3[5]
        );
    VAR_1->nic[VAR_2].adapter = FUNC_10(
                                            VAR_5,
                                            VAR_1->is_pfring,
                                            VAR_1->is_sendq,
                                            VAR_1->nmap.packet_trace,
                                            VAR_1->is_offline,
                                            (void*)VAR_1->bpf_filter,
                                            VAR_1->nic[VAR_2].is_vlan,
                                            VAR_1->nic[VAR_2].vlan_id);
    if (VAR_1->nic[VAR_2].adapter == 0) {
        FUNC_0(1, "if:%s:init: failed\n", VAR_5);
        return -1;
    }
    FUNC_9(VAR_1->nic[VAR_2].adapter, VAR_3, VAR_5);
    FUNC_4(VAR_4, VAR_1->nic[VAR_2].router_mac, 6);
    if (VAR_1->is_offline) {
        FUNC_4(VAR_4, "\x66\x55\x44\x33\x22\x11", 6);
    } else if (FUNC_3(VAR_4, "\0\0\0\0\0\0", 6) == 0) {
        unsigned VAR_9 = VAR_1->nic[VAR_2].router_ip;
        int VAR_10 = 0;


        FUNC_0(1, "if:%s: looking for default gateway\n", VAR_5);
        if (VAR_9 == 0)
            VAR_10 = FUNC_7(VAR_5, &VAR_9);
        if (VAR_10 == 0) {
            FUNC_0(2, "if:%s: router-ip=%u.%u.%u.%u\n",
                VAR_5,
                (VAR_9>>24)&0xFF,
                (VAR_9>>16)&0xFF,
                (VAR_9>> 8)&0xFF,
                (VAR_9>> 0)&0xFF
                );

            FUNC_0(1, "if:%s:arp: resolving IPv4 address\n", VAR_5);
            FUNC_1(
                    VAR_1->nic[VAR_2].adapter,
                    VAR_7,
                    VAR_3,
                    VAR_9,
                    VAR_4);

        }
    }
    FUNC_0(2, "if:%s: router-mac=%02x-%02x-%02x-%02x-%02x-%02x\n",
        VAR_5,
        VAR_4[0],
        VAR_4[1],
        VAR_4[2],
        VAR_4[3],
        VAR_4[4],
        VAR_4[5]
        );
    if (FUNC_3(VAR_4, "\0\0\0\0\0\0", 6) == 0) {
        FUNC_0(0, "FAIL: failed to detect router for interface: \"%s\"\n", VAR_5);
        FUNC_0(0, " [hint] try something like \"--router-mac 66-55-44-33-22-11\" to specify router\n");
        FUNC_0(0, " [hint] try something like \"--interface eth0\" to change interface\n");
        return -1;
    }


    FUNC_0(1, "if:%s: initialization done.\n", VAR_5);
    return 0;
}
