
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct PacketBuffer {scalar_t__ length; int px; } ;
struct Adapter {int dummy; } ;
typedef int PACKET_QUEUE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct Adapter*,int ,unsigned int,int) ;
 int FUNC_3 (int *,void**) ;
 int FUNC_4 (int *,struct PacketBuffer*) ;

__attribute__((used)) static void
FUNC_5(struct Adapter *VAR_0,
    PACKET_QUEUE *VAR_1,
    PACKET_QUEUE *VAR_2,
    uint64_t *VAR_3,
    uint64_t *VAR_4)
{



    for ( ; (*VAR_4); (*VAR_4)--) {
        int VAR_5;
        struct PacketBuffer *VAR_6;






        VAR_5 = FUNC_3(VAR_2, (void**)&VAR_6);
        if (VAR_5) {
            break;
        }





        FUNC_2(VAR_0, VAR_6->px, (unsigned)VAR_6->length, 1);





        for (VAR_5=1; VAR_5; ) {
            VAR_5 = FUNC_4(VAR_1, VAR_6);
            if (VAR_5) {
                FUNC_0(0, "transmit queue full (should be impossible)\n");
                FUNC_1(10000);
            }
        }






        (*VAR_3)++;
    }

}
