
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct net {int dummy; } ;
struct fnhe_hash_bucket {int chain; } ;
struct fib_nh_exception {int fnhe_genid; int fnhe_daddr; int fnhe_rth_output; int fnhe_rth_input; scalar_t__ fnhe_expires; int fnhe_next; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct net*,int ,int ,struct rtable*,int ,int *,struct sk_buff*,int ,int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2, struct sk_buff *VAR_3,
       struct netlink_callback *VAR_4, u32 VAR_5,
       struct fnhe_hash_bucket *VAR_6, int VAR_7,
       int *VAR_8, int VAR_9, unsigned int VAR_10)
{
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  struct fib_nh_exception *VAR_12;

  for (VAR_12 = FUNC_1(VAR_6[VAR_11].chain); VAR_12;
       VAR_12 = FUNC_1(VAR_12->fnhe_next)) {
   struct rtable *VAR_13;
   int VAR_14;

   if (*VAR_8 < VAR_9)
    goto next;

   if (VAR_12->fnhe_genid != VAR_7)
    goto next;

   if (VAR_12->fnhe_expires &&
       FUNC_3(VAR_1, VAR_12->fnhe_expires))
    goto next;

   VAR_13 = FUNC_1(VAR_12->fnhe_rth_input);
   if (!VAR_13)
    VAR_13 = FUNC_1(VAR_12->fnhe_rth_output);
   if (!VAR_13)
    goto next;

   VAR_14 = FUNC_2(VAR_2, VAR_12->fnhe_daddr, 0, VAR_13,
        VAR_5, ((void*)0), VAR_3,
        FUNC_0(VAR_4->skb).portid,
        VAR_4->nlh->nlmsg_seq, VAR_10);
   if (VAR_14)
    return VAR_14;
next:
   (*VAR_8)++;
  }
 }

 return 0;
}
