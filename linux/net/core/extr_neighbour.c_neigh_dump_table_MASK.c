
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct neighbour {int dev; int next; } ;
struct neigh_table {int nht; } ;
struct neigh_hash_table {int hash_shift; int * hash_buckets; } ;
struct neigh_dump_filter {int master_idx; int dev_idx; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct neighbour*,int ,int ,int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct net*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct neigh_table *VAR_3, struct sk_buff *VAR_4,
       struct netlink_callback *VAR_5,
       struct neigh_dump_filter *VAR_6)
{
 struct net *VAR_7 = FUNC_9(VAR_4->sk);
 struct neighbour *VAR_8;
 int VAR_9, VAR_10, VAR_11 = VAR_5->args[1];
 int VAR_12, VAR_13 = VAR_12 = VAR_5->args[2];
 struct neigh_hash_table *VAR_14;
 unsigned int VAR_15 = VAR_1;

 if (VAR_6->dev_idx || VAR_6->master_idx)
  VAR_15 |= VAR_0;

 FUNC_7();
 VAR_14 = FUNC_6(VAR_3->nht);

 for (VAR_10 = VAR_11; VAR_10 < (1 << VAR_14->hash_shift); VAR_10++) {
  if (VAR_10 > VAR_11)
   VAR_13 = 0;
  for (VAR_8 = FUNC_6(VAR_14->hash_buckets[VAR_10]), VAR_12 = 0;
       VAR_8 != ((void*)0);
       VAR_8 = FUNC_6(VAR_8->next)) {
   if (VAR_12 < VAR_13 || !FUNC_5(FUNC_1(VAR_8->dev), VAR_7))
    goto next;
   if (FUNC_3(VAR_8->dev, VAR_6->dev_idx) ||
       FUNC_4(VAR_8->dev, VAR_6->master_idx))
    goto next;
   if (FUNC_2(VAR_4, VAR_8, FUNC_0(VAR_5->skb).portid,
         VAR_5->nlh->nlmsg_seq,
         VAR_2,
         VAR_15) < 0) {
    VAR_9 = -1;
    goto out;
   }
next:
   VAR_12++;
  }
 }
 VAR_9 = VAR_4->len;
out:
 FUNC_8();
 VAR_5->args[1] = VAR_10;
 VAR_5->args[2] = VAR_12;
 return VAR_9;
}
