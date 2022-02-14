
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;
struct TCP_Control_Block {unsigned char const* payload; unsigned short payload_length; int seqno_them; int seqno_me; int port_me; int ip_me; int port_them; int ip_them; } ;
struct TCP_ConnectionTable {int transmit_queue; int pkt_template; int packet_buffers; } ;
struct PacketBuffer {int length; int px; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void**) ;
 int FUNC_4 (int ,struct PacketBuffer*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,unsigned int,unsigned char const*,size_t,int ,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(
    struct TCP_ConnectionTable *VAR_2,
    struct TCP_Control_Block *VAR_3,
    unsigned VAR_4,
    const unsigned char *VAR_5, size_t VAR_6,
    unsigned VAR_7)
{
    struct PacketBuffer *VAR_8 = 0;
    int VAR_9 = 0;
    uint64_t VAR_10 = 100;





    for (VAR_9=1; VAR_9; ) {
        VAR_9 = FUNC_3(VAR_2->packet_buffers, (void**)&VAR_8);
        if (VAR_9 != 0) {
            static int VAR_11 = 0;
            if (!VAR_11) {
                FUNC_0(0, "packet buffers empty (should be impossible)\n");
                VAR_11 = 1;
            }
            FUNC_1(VAR_1);
            FUNC_2(VAR_10 = (uint64_t)(VAR_10 *1.5));
        }


    }
    if (VAR_8 == ((void*)0))
        return;
    VAR_8->length = FUNC_5(
        VAR_2->pkt_template,
        VAR_3->ip_them, VAR_3->port_them,
        VAR_3->ip_me, VAR_3->port_me,
        VAR_3->seqno_me, VAR_3->seqno_them,
        VAR_4,
        VAR_5, VAR_6,
        VAR_8->px, sizeof(VAR_8->px)
        );




    if (VAR_7 & VAR_0) {
        FUNC_6(VAR_8->px, VAR_8->length, 600);
    }





    VAR_3->payload = VAR_5;
    VAR_3->payload_length = (unsigned short)VAR_6;





    for (VAR_9=1; VAR_9; ) {
        VAR_9 = FUNC_4(VAR_2->transmit_queue, VAR_8);
        if (VAR_9 != 0) {
            FUNC_0(0, "transmit queue full (should be impossible)\n");
            FUNC_2(100);
        }
    }
}
