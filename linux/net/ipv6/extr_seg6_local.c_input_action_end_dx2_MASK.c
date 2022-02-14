
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int protocol; struct net_device* dev; scalar_t__ data; } ;
struct seg6_local_lwt {int oif; } ;
struct net_device {scalar_t__ type; int flags; scalar_t__ mtu; } ;
struct net {int dummy; } ;
struct ethhdr {int h_proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_5,
    struct seg6_local_lwt *VAR_6)
{
 struct net *VAR_7 = FUNC_2(VAR_5->dev);
 struct net_device *VAR_8;
 struct ethhdr *VAR_9;

 if (!FUNC_0(VAR_5, VAR_4))
  goto drop;

 if (!FUNC_7(VAR_5, VAR_2))
  goto drop;

 FUNC_10(VAR_5);
 VAR_9 = (struct ethhdr *)VAR_5->data;





 if (!FUNC_4(VAR_9->h_proto))
  goto drop;

 VAR_8 = FUNC_1(VAR_7, VAR_6->oif);
 if (!VAR_8)
  goto drop;




 if (VAR_8->type != VAR_0)
  goto drop;

 if (!(VAR_8->flags & VAR_3) || !FUNC_6(VAR_8))
  goto drop;

 FUNC_9(VAR_5);

 if (FUNC_11(VAR_5))
  goto drop;

 FUNC_8(VAR_5);

 if (VAR_5->len - VAR_2 > VAR_8->mtu)
  goto drop;

 VAR_5->dev = VAR_8;
 VAR_5->protocol = VAR_9->h_proto;

 return FUNC_3(VAR_5);

drop:
 FUNC_5(VAR_5);
 return -VAR_1;
}
