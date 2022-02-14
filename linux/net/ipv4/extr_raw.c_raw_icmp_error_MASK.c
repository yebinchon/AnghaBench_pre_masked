
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; TYPE_2__* dev; } ;
struct net {int dummy; } ;
struct iphdr {int saddr; int daddr; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int lock; int * ht; } ;


 int VAR_0 ;
 struct sock* FUNC_0 (struct net*,struct sock*,int,int ,int ,int,int) ;
 struct net* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sock* FUNC_6 (int *) ;
 struct sock* FUNC_7 (struct sock*) ;

void FUNC_8(struct sk_buff *VAR_2, int VAR_3, u32 VAR_4)
{
 int VAR_5;
 struct sock *VAR_6;
 const struct iphdr *VAR_7;
 struct net *VAR_8;

 VAR_5 = VAR_3 & (VAR_0 - 1);

 FUNC_4(&VAR_1.lock);
 VAR_6 = FUNC_6(&VAR_1.ht[VAR_5]);
 if (VAR_6) {
  int VAR_9 = VAR_2->dev->ifindex;
  int VAR_10 = FUNC_2(VAR_2);

  VAR_7 = (const struct iphdr *)VAR_2->data;
  VAR_8 = FUNC_1(VAR_2->dev);

  while ((VAR_6 = FUNC_0(VAR_8, VAR_6, VAR_3,
      VAR_7->daddr, VAR_7->saddr,
      VAR_9, VAR_10)) != ((void*)0)) {
   FUNC_3(VAR_6, VAR_2, VAR_4);
   VAR_6 = FUNC_7(VAR_6);
   VAR_7 = (const struct iphdr *)VAR_2->data;
  }
 }
 FUNC_5(&VAR_1.lock);
}
