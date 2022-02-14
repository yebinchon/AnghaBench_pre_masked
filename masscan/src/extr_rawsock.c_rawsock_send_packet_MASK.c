
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_pkthdr {unsigned int len; unsigned int caplen; } ;
struct Adapter {scalar_t__ pcap; scalar_t__ sendq; scalar_t__ ring; int pt_start; scalar_t__ is_packet_trace; } ;
struct TYPE_4__ {int (* sendqueue_queue ) (scalar_t__,struct pcap_pkthdr*,unsigned char const*) ;int (* sendpacket ) (scalar_t__,unsigned char const*,unsigned int) ;} ;
struct TYPE_3__ {int (* send ) (scalar_t__,unsigned char const*,unsigned int,unsigned char) ;} ;


 int FUNC_0 (int,char*,int) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned char const*,unsigned int,int) ;
 int FUNC_2 (struct Adapter*) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,unsigned char const*,unsigned int,unsigned char) ;
 int FUNC_4 (scalar_t__,struct pcap_pkthdr*,unsigned char const*) ;
 int FUNC_5 (scalar_t__,struct pcap_pkthdr*,unsigned char const*) ;
 int FUNC_6 (scalar_t__,unsigned char const*,unsigned int) ;

int
FUNC_7(
    struct Adapter *VAR_4,
    const unsigned char *VAR_5,
    unsigned VAR_6,
    unsigned VAR_7)
{
    if (VAR_4 == 0)
        return 0;


    if (VAR_4->is_packet_trace) {
        FUNC_1(VAR_3, VAR_4->pt_start, VAR_5, VAR_6, 1);
    }


    if (VAR_4->ring) {
        int VAR_8 = VAR_2;

        while (VAR_8 == VAR_2) {
            VAR_8 = VAR_1.send(VAR_4->ring, VAR_5, VAR_6, (unsigned char)VAR_7);
        }
        if (VAR_8 < 0)
            FUNC_0(1, "pfring:xmit: ERROR %d\n", VAR_8);
        return VAR_8;
    }


    if (VAR_4->sendq) {
        int VAR_9;
        struct pcap_pkthdr VAR_10;
        VAR_10.len = VAR_6;
        VAR_10.caplen = VAR_6;

        VAR_9 = VAR_0.sendqueue_queue(VAR_4->sendq, &VAR_10, VAR_5);
        if (VAR_9) {
            FUNC_2(VAR_4);
            VAR_0.sendqueue_queue(VAR_4->sendq, &VAR_10, VAR_5);
        }

        if (VAR_7) {
            FUNC_2(VAR_4);
        }

        return 0;
    }


    if (VAR_4->pcap)
        return VAR_0.sendpacket(VAR_4->pcap, VAR_5, VAR_6);

    return 0;
}
