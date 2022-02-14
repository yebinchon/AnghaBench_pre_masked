
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;
struct TemplatePacket {int dummy; } ;
struct PacketBuffer {int px; int length; } ;
typedef int PACKET_QUEUE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,void**) ;
 int FUNC_4 (int *,struct PacketBuffer*) ;
 int VAR_0 ;
 int FUNC_5 (struct TemplatePacket*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int,int ,int ,int ,int) ;

void
FUNC_6(
    struct TemplatePacket *VAR_1,
    PACKET_QUEUE *VAR_2,
    PACKET_QUEUE *VAR_3,
    unsigned VAR_4, unsigned VAR_5,
    unsigned VAR_6, unsigned VAR_7,
    unsigned VAR_8, unsigned VAR_9
)
{
    struct PacketBuffer *VAR_10 = 0;
    int VAR_11 = 0;
    uint64_t VAR_12 = 100;





    for (VAR_11=1; VAR_11; ) {
        VAR_11 = FUNC_3(VAR_2, (void**)&VAR_10);
        if (VAR_11 != 0) {
            static int VAR_13 = 0;
            if (!VAR_13) {
                FUNC_0(0, "packet buffers empty (should be impossible)\n");
                VAR_13 = 1;
            }
            FUNC_1(VAR_0);
            FUNC_2(VAR_12 = (uint64_t)(VAR_12 *1.5));
        }


    }
    if (VAR_10 == ((void*)0))
        return;

    VAR_10->length = FUNC_5(
        VAR_1,
        VAR_4, VAR_6,
        VAR_5, VAR_7,
        VAR_9, VAR_8,
        0x04,
        0, 0,
        VAR_10->px, sizeof(VAR_10->px)
        );






    for (VAR_11=1; VAR_11; ) {
        VAR_11 = FUNC_4(VAR_3, VAR_10);
        if (VAR_11 != 0) {
            FUNC_0(0, "transmit queue full (should be impossible)\n");
            FUNC_2(100);
        }
    }
}
