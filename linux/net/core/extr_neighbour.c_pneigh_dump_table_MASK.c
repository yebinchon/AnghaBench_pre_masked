
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int sk; } ;
struct pneigh_entry {int dev; struct pneigh_entry* next; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct neigh_table {int lock; struct pneigh_entry** phash_buckets; } ;
struct neigh_dump_filter {int master_idx; int dev_idx; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct pneigh_entry*,int ,int ,int ,unsigned int,struct neigh_table*) ;
 struct net* FUNC_4 (struct pneigh_entry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct net* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct neigh_table *VAR_4, struct sk_buff *VAR_5,
        struct netlink_callback *VAR_6,
        struct neigh_dump_filter *VAR_7)
{
 struct pneigh_entry *VAR_8;
 struct net *VAR_9 = FUNC_7(VAR_5->sk);
 int VAR_10, VAR_11, VAR_12 = VAR_6->args[3];
 int VAR_13, VAR_14 = VAR_13 = VAR_6->args[4];
 unsigned int VAR_15 = VAR_1;

 if (VAR_7->dev_idx || VAR_7->master_idx)
  VAR_15 |= VAR_0;

 FUNC_5(&VAR_4->lock);

 for (VAR_11 = VAR_12; VAR_11 <= VAR_2; VAR_11++) {
  if (VAR_11 > VAR_12)
   VAR_14 = 0;
  for (VAR_8 = VAR_4->phash_buckets[VAR_11], VAR_13 = 0; VAR_8; VAR_8 = VAR_8->next) {
   if (VAR_13 < VAR_14 || FUNC_4(VAR_8) != VAR_9)
    goto next;
   if (FUNC_1(VAR_8->dev, VAR_7->dev_idx) ||
       FUNC_2(VAR_8->dev, VAR_7->master_idx))
    goto next;
   if (FUNC_3(VAR_5, VAR_8, FUNC_0(VAR_6->skb).portid,
         VAR_6->nlh->nlmsg_seq,
         VAR_3, VAR_15, VAR_4) < 0) {
    FUNC_6(&VAR_4->lock);
    VAR_10 = -1;
    goto out;
   }
  next:
   VAR_13++;
  }
 }

 FUNC_6(&VAR_4->lock);
 VAR_10 = VAR_5->len;
out:
 VAR_6->args[3] = VAR_11;
 VAR_6->args[4] = VAR_13;
 return VAR_10;

}
