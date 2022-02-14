
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Adapter {scalar_t__ sendq; scalar_t__ pcap; scalar_t__ ring; } ;
struct TYPE_4__ {int (* sendqueue_destroy ) (scalar_t__) ;int (* close ) (scalar_t__) ;} ;
struct TYPE_3__ {int (* close ) (scalar_t__) ;} ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct Adapter*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct Adapter *VAR_2)
{
    if (VAR_2->ring) {
        VAR_1.close(VAR_2->ring);
    }
    if (VAR_2->pcap) {
        VAR_0.close(VAR_2->pcap);
    }
    if (VAR_2->sendq) {
        VAR_0.sendqueue_destroy(VAR_2->sendq);
    }

    FUNC_0(VAR_2);
}
