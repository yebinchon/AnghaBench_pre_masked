
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Adapter {scalar_t__ sendq; int pcap; } ;
struct TYPE_2__ {scalar_t__ (* sendqueue_alloc ) (int ) ;int (* sendqueue_destroy ) (scalar_t__) ;int (* sendqueue_transmit ) (int ,scalar_t__,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(struct Adapter *VAR_2)
{
    if (VAR_2->sendq) {
        VAR_0.sendqueue_transmit(VAR_2->pcap, VAR_2->sendq, 0);



        VAR_0.sendqueue_destroy(VAR_2->sendq);
        VAR_2->sendq = VAR_0.sendqueue_alloc(VAR_1);
    }

}
