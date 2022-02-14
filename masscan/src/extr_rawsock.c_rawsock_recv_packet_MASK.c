
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct pfring_pkthdr {scalar_t__ caplen; TYPE_1__ ts; } ;
struct TYPE_6__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct pcap_pkthdr {unsigned int caplen; TYPE_2__ ts; } ;
struct Adapter {scalar_t__ pcap; scalar_t__ ring; } ;
struct TYPE_8__ {unsigned char* (* next ) (scalar_t__,struct pcap_pkthdr*) ;} ;
struct TYPE_7__ {int (* recv ) (scalar_t__,unsigned char**,int ,struct pfring_pkthdr*,int ) ;int (* poll ) (scalar_t__,int) ;} ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,unsigned char**,int ,struct pfring_pkthdr*,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 unsigned char* FUNC_2 (scalar_t__,struct pcap_pkthdr*) ;

int FUNC_3(
    struct Adapter *VAR_6,
    unsigned *VAR_7,
    unsigned *VAR_8,
    unsigned *VAR_9,
    const unsigned char **VAR_10)
{

    if (VAR_6->ring) {

        struct pfring_pkthdr VAR_11;
        int VAR_12;

        again:
        VAR_12 = VAR_1.recv(VAR_6->ring,
                        (unsigned char**)VAR_10,
                        0,
                        &VAR_11,
                        0
                        );
        if (VAR_12 == VAR_2 || VAR_11.caplen == 0) {
            VAR_1.poll(VAR_6->ring, 1);
            if (VAR_5)
                return 1;
            goto again;
        }
        if (VAR_12)
            return 1;

        *VAR_7 = VAR_11.caplen;
        *VAR_8 = (unsigned)VAR_11.ts.tv_sec;
        *VAR_9 = (unsigned)VAR_11.ts.tv_usec;

    } else if (VAR_6->pcap) {
        struct pcap_pkthdr VAR_13;

        *VAR_10 = VAR_0.next(VAR_6->pcap, &VAR_13);

        if (*VAR_10 == ((void*)0)) {
            if (VAR_3) {

                VAR_5 = 1;
                VAR_4 = 1;
            }
            return 1;
        }

        *VAR_7 = VAR_13.caplen;
        *VAR_8 = (unsigned)VAR_13.ts.tv_sec;
        *VAR_9 = (unsigned)VAR_13.ts.tv_usec;
    }


    return 0;
}
