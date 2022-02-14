
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; int protocol; int len; } ;
struct TYPE_4__ {struct net_device* dev; } ;
struct rtable {int rt_flags; TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,struct net_device*,int ) ;
 int FUNC_3 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,struct net_device*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int VAR_11 ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 struct rtable* FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct net *VAR_12, struct sock *VAR_13, struct sk_buff *VAR_14)
{
 struct rtable *VAR_15 = FUNC_9(VAR_14);
 struct net_device *VAR_16 = VAR_15->dst.dev;




 FUNC_1(VAR_12, VAR_4, VAR_14->len);

 VAR_14->dev = VAR_16;
 VAR_14->protocol = FUNC_4(VAR_0);





 if (VAR_15->rt_flags&VAR_9) {
  if (FUNC_7(VAR_13)
     ) {
   struct sk_buff *VAR_17 = FUNC_8(VAR_14, VAR_1);
   if (VAR_17)
    FUNC_2(VAR_5, VAR_6,
     VAR_12, VAR_13, VAR_17, ((void*)0), VAR_17->dev,
     VAR_11);
  }



  if (FUNC_5(VAR_14)->ttl == 0) {
   FUNC_6(VAR_14);
   return 0;
  }
 }

 if (VAR_15->rt_flags&VAR_7) {
  struct sk_buff *VAR_18 = FUNC_8(VAR_14, VAR_1);
  if (VAR_18)
   FUNC_2(VAR_5, VAR_6,
    VAR_12, VAR_13, VAR_18, ((void*)0), VAR_18->dev,
    VAR_11);
 }

 return FUNC_3(VAR_5, VAR_6,
       VAR_12, VAR_13, VAR_14, ((void*)0), VAR_14->dev,
       VAR_10,
       !(FUNC_0(VAR_14)->flags & VAR_3));
}
