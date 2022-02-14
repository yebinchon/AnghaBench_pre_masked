
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct TemplatePacket {int dummy; } ;
struct TCP_ConnectionTable {unsigned int timeout_connection; int timeout_hello; unsigned int count; unsigned int mask; struct Output* out; int report_banner; int banner1; int * packet_buffers; int * transmit_queue; struct TemplatePacket* pkt_template; int timeouts; int * entries; int entropy; } ;
struct Output {int dummy; } ;
typedef int PACKET_QUEUE ;
typedef int OUTPUT_REPORT_BANNER ;


 struct TCP_ConnectionTable* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int ,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

struct TCP_ConnectionTable *
FUNC_7( size_t VAR_0,
                        PACKET_QUEUE *VAR_1,
                        PACKET_QUEUE *VAR_2,
                        struct TemplatePacket *VAR_3,
                        OUTPUT_REPORT_BANNER VAR_4,
                        struct Output *VAR_5,
                        unsigned VAR_6,
                        uint64_t VAR_7
                        )
{
    struct TCP_ConnectionTable *VAR_8;



    VAR_8 = FUNC_0(1, sizeof(*VAR_8));
    VAR_8->timeout_connection = VAR_6;
    if (VAR_8->timeout_connection == 0)
        VAR_8->timeout_connection = 30;
    VAR_8->timeout_hello = 2;
    VAR_8->entropy = VAR_7;



    {
        size_t VAR_9;
        VAR_9 = 1;
        while (VAR_9 < VAR_0) {
            VAR_9 *= 2;
            if (VAR_9 == 0) {
                VAR_9 = (1<<24);
                break;
            }
        }
        if (VAR_9 > (1<<24))
            VAR_9 = (1<<24);
        if (VAR_9 < (1<<10))
            VAR_9 = (1<<10);
        VAR_0 = VAR_9;
    }



    while (VAR_8->entries == 0) {
        VAR_8->entries = FUNC_3(VAR_0 * sizeof(*VAR_8->entries));
        if (VAR_8->entries == ((void*)0)) {
            VAR_0 >>= 1;
        }
    }
    FUNC_4(VAR_8->entries, 0, VAR_0 * sizeof(*VAR_8->entries));



    VAR_8->count = (unsigned)VAR_0;
    VAR_8->mask = (unsigned)(VAR_0-1);


    VAR_8->timeouts = FUNC_6(FUNC_1(FUNC_5(0)));


    VAR_8->pkt_template = VAR_3;

    VAR_8->transmit_queue = VAR_1;
    VAR_8->packet_buffers = VAR_2;


    VAR_8->banner1 = FUNC_2();

    VAR_8->report_banner = VAR_4;
    VAR_8->out = VAR_5;
    return VAR_8;
}
