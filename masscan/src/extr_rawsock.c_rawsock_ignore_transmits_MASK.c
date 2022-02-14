
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Adapter {scalar_t__ pcap; scalar_t__ ring; } ;
struct TYPE_2__ {int (* setdirection ) (scalar_t__,int ) ;int (* perror ) (scalar_t__,char*) ;} ;


 int FUNC_0 (int,char*,char const*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,char*) ;

void
FUNC_4(struct Adapter *VAR_2, const unsigned char *VAR_3, const char *VAR_4)
{
    FUNC_1(VAR_3);
    if (VAR_2->ring) {



        return;
    }

    if (VAR_2->pcap) {
        int VAR_5;
        VAR_5 = VAR_0.setdirection(VAR_2->pcap, VAR_1);
        if (VAR_5) {
            VAR_0.perror(VAR_2->pcap, "if: pcap_setdirection(IN)");
        } else {
            FUNC_0(2, "if:%s: not receiving transmits\n", VAR_4);
        }
    }
}
