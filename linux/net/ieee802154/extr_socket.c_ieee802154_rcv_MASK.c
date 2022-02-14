
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; int len; int data; } ;
struct packet_type {int dummy; } ;
struct net_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,scalar_t__,struct net_device*) ;
 int FUNC_7 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, struct net_device *VAR_6,
     struct packet_type *VAR_7, struct net_device *VAR_8)
{
 if (!FUNC_5(VAR_6))
  goto drop;
 FUNC_6("got frame, type %d, dev %p\n", VAR_6->type, VAR_6);





 if (!FUNC_4(FUNC_0(VAR_6), &VAR_4))
  goto drop;

 FUNC_2(VAR_6, VAR_5);

 if (VAR_6->type != VAR_0)
  goto drop;

 if (VAR_5->pkt_type != VAR_3)
  return FUNC_1(VAR_6, VAR_5);

drop:
 FUNC_3(VAR_5);
 return VAR_2;
}
