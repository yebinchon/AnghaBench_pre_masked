
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ncsi_package {int lock; int channel_num; } ;
struct TYPE_3__ {struct ncsi_channel* vids; } ;
struct TYPE_4__ {struct ncsi_channel* addrs; } ;
struct ncsi_channel {int node; int lock; int state; TYPE_1__ vlan_filter; TYPE_2__ mac_filter; struct ncsi_package* package; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncsi_channel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ncsi_channel*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ncsi_channel *VAR_1)
{
 struct ncsi_package *VAR_2 = VAR_1->package;
 unsigned long VAR_3;

 FUNC_3(&VAR_1->lock, VAR_3);


 FUNC_0(VAR_1->mac_filter.addrs);
 FUNC_0(VAR_1->vlan_filter.vids);

 VAR_1->state = VAR_0;
 FUNC_4(&VAR_1->lock, VAR_3);
 FUNC_2(VAR_1);


 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_1->node);
 VAR_2->channel_num--;
 FUNC_4(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_1);
}
