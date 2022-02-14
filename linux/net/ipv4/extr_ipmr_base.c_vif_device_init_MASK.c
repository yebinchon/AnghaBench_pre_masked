
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vif_device {unsigned long rate_limit; unsigned short flags; unsigned char threshold; int link; scalar_t__ pkt_out; scalar_t__ pkt_in; scalar_t__ bytes_out; scalar_t__ bytes_in; int * dev; } ;
struct net_device {int ifindex; } ;


 int FUNC_0 (struct net_device*) ;

void FUNC_1(struct vif_device *VAR_0,
       struct net_device *VAR_1,
       unsigned long VAR_2,
       unsigned char VAR_3,
       unsigned short VAR_4,
       unsigned short VAR_5)
{
 VAR_0->dev = ((void*)0);
 VAR_0->bytes_in = 0;
 VAR_0->bytes_out = 0;
 VAR_0->pkt_in = 0;
 VAR_0->pkt_out = 0;
 VAR_0->rate_limit = VAR_2;
 VAR_0->flags = VAR_4;
 VAR_0->threshold = VAR_3;
 if (VAR_0->flags & VAR_5)
  VAR_0->link = FUNC_0(VAR_1);
 else
  VAR_0->link = VAR_1->ifindex;
}
