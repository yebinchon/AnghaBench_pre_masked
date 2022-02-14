
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ s_net; scalar_t__ s_node; } ;
struct sockaddr_at {scalar_t__ sat_family; TYPE_3__ sat_addr; } ;
struct rtentry {int rt_flags; int rt_gateway; int rt_dst; } ;
struct net_device {int dummy; } ;
struct atalk_route {int flags; TYPE_3__ gateway; struct net_device* dev; TYPE_3__ target; struct atalk_route* next; } ;
struct TYPE_5__ {scalar_t__ s_net; scalar_t__ s_node; } ;
struct TYPE_4__ {scalar_t__ nr_firstnet; scalar_t__ nr_lastnet; } ;
struct atalk_iface {struct net_device* dev; TYPE_2__ address; TYPE_1__ nets; struct atalk_iface* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct atalk_iface* VAR_6 ;
 int VAR_7 ;
 struct atalk_route* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 struct atalk_route* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct rtentry *VAR_10, struct net_device *VAR_11)
{
 struct sockaddr_at *VAR_12 = (struct sockaddr_at *)&VAR_10->rt_dst;
 struct sockaddr_at *VAR_13 = (struct sockaddr_at *)&VAR_10->rt_gateway;
 struct atalk_route *VAR_14;
 struct atalk_iface *VAR_15, *VAR_16;
 int VAR_17 = -VAR_1;







 if (VAR_12->sat_family != VAR_0 ||
     (!VAR_11 && VAR_13->sat_family != VAR_0))
  goto out;


 FUNC_5(&VAR_9);
 for (VAR_14 = VAR_8; VAR_14; VAR_14 = VAR_14->next) {
  if (VAR_10->rt_flags != VAR_14->flags)
   continue;

  if (VAR_12->sat_addr.s_net == VAR_14->target.s_net) {
   if (!(VAR_14->flags & VAR_5))
    break;
   if (VAR_12->sat_addr.s_node == VAR_14->target.s_node)
    break;
  }
 }

 if (!VAR_11) {
  VAR_16 = ((void*)0);

  FUNC_3(&VAR_7);
  for (VAR_15 = VAR_6; VAR_15; VAR_15 = VAR_15->next) {
   if (!VAR_16 &&
       FUNC_2(VAR_13->sat_addr.s_net) >=
     FUNC_2(VAR_15->nets.nr_firstnet) &&
       FUNC_2(VAR_13->sat_addr.s_net) <=
     FUNC_2(VAR_15->nets.nr_lastnet))
    VAR_16 = VAR_15;

   if (VAR_13->sat_addr.s_net == VAR_15->address.s_net &&
       VAR_13->sat_addr.s_node == VAR_15->address.s_node)
    VAR_16 = VAR_15;
  }
  FUNC_4(&VAR_7);

  VAR_17 = -VAR_2;
  if (!VAR_16)
   goto out_unlock;

  VAR_11 = VAR_16->dev;
 }

 if (!VAR_14) {
  VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_4);

  VAR_17 = -VAR_3;
  if (!VAR_14)
   goto out_unlock;

  VAR_14->next = VAR_8;
  VAR_8 = VAR_14;
 }


 VAR_14->target = VAR_12->sat_addr;
 FUNC_0(VAR_11);
 VAR_14->dev = VAR_11;
 VAR_14->flags = VAR_10->rt_flags;
 VAR_14->gateway = VAR_13->sat_addr;

 VAR_17 = 0;
out_unlock:
 FUNC_6(&VAR_9);
out:
 return VAR_17;
}
