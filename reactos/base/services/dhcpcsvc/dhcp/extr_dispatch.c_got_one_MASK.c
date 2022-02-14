
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct protocol {int fd; struct interface_info* local; } ;
struct interface_info {int errors; int dead; int name; } ;
struct iaddr {int len; int iabuf; } ;
struct hardware {int dummy; } ;
struct dhcp_packet {int hlen; int chaddr; } ;
typedef int ssize_t ;
struct TYPE_5__ {int DhclientInfo; int ListEntry; } ;
typedef TYPE_1__* PDHCP_ADAPTER ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct interface_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct dhcp_packet*,int,int ,struct iaddr,struct hardware*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (struct interface_info*,unsigned char*,int,struct sockaddr_in*,struct hardware*) ;
 int FUNC_9 (struct protocol*) ;
 int FUNC_10 (int *,struct dhcp_packet*,int,int ,struct iaddr,struct hardware*) ;
 int FUNC_11 (char*,...) ;

void
FUNC_12(struct protocol *VAR_0)
{
    struct sockaddr_in VAR_1;
    struct hardware VAR_2;
    struct iaddr VAR_3;
    ssize_t VAR_4;
    union {




        unsigned char packbuf[4095];
        struct dhcp_packet packet;
    } VAR_5;
    struct interface_info *VAR_6 = VAR_0->local;
    PDHCP_ADAPTER VAR_7;

    if ((VAR_4 = FUNC_8(VAR_6, VAR_5.packbuf, sizeof(VAR_5), &VAR_1,
                                 &VAR_2)) == -1) {
        FUNC_11("receive_packet failed on %s: %d", VAR_6->name,
                FUNC_3());
        VAR_6->errors++;
        if (VAR_6->errors > 20) {

            FUNC_11("Interface %s no longer appears valid.",
                    VAR_6->name);
            VAR_6->dead = 1;
            FUNC_5(VAR_0->fd);
            FUNC_9(VAR_0);
            VAR_7 = FUNC_1(VAR_6);
            if (VAR_7) {
                FUNC_2(&VAR_7->ListEntry);
                FUNC_6(VAR_7);
            }
        }
        return;
    }
    if (VAR_4 == 0)
        return;

    if (&FUNC_4) {
        VAR_3.len = 4;
        FUNC_7(VAR_3.iabuf, &VAR_1.sin_addr, VAR_3.len);


        VAR_7 = FUNC_0(VAR_5.packet.chaddr,
                                               VAR_5.packet.hlen);

        if (!VAR_7) {
            FUNC_11("Discarding packet with a non-matching target physical address\n");
            return;
        }

        FUNC_4)(&VAR_7->DhclientInfo, &VAR_5.packet, VAR_4,
                                VAR_1.sin_port, VAR_3, &VAR_2);
    }
}
