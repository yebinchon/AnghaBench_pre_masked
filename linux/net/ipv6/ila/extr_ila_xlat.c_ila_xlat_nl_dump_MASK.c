
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct rhashtable_iter {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; scalar_t__* args; } ;
struct ila_map {int next; } ;
struct ila_dump_iter {int skip; struct rhashtable_iter rhiter; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ila_map*) ;
 TYPE_2__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ila_map*) ;
 int FUNC_3 (struct ila_map*,int ,int ,int ,struct sk_buff*,int ) ;
 struct ila_map* FUNC_4 (int ) ;
 struct ila_map* FUNC_5 (struct rhashtable_iter*) ;
 struct ila_map* FUNC_6 (struct rhashtable_iter*) ;
 int FUNC_7 (struct rhashtable_iter*) ;
 int FUNC_8 (struct rhashtable_iter*) ;

int FUNC_9(struct sk_buff *VAR_3, struct netlink_callback *VAR_4)
{
 struct ila_dump_iter *VAR_5 = (struct ila_dump_iter *)VAR_4->args[0];
 struct rhashtable_iter *VAR_6 = &VAR_5->rhiter;
 int VAR_7 = VAR_5->skip;
 struct ila_map *VAR_8;
 int VAR_9;

 FUNC_7(VAR_6);


 VAR_8 = FUNC_6(VAR_6);

 if (VAR_8 && !FUNC_0(VAR_8) && VAR_7) {


  while (VAR_8 && VAR_7) {



   VAR_8 = FUNC_4(VAR_8->next);
   VAR_7--;
  }
 }

 VAR_7 = 0;

 for (;;) {
  if (FUNC_0(VAR_8)) {
   VAR_9 = FUNC_2(VAR_8);
   if (VAR_9 == -VAR_0) {






    goto out_ret;
   } else {
    break;
   }
  } else if (!VAR_8) {
   VAR_9 = 0;
   break;
  }

  while (VAR_8) {
   VAR_9 = FUNC_3(VAR_8, FUNC_1(VAR_4->skb).portid,
          VAR_4->nlh->nlmsg_seq, VAR_2,
          VAR_3, VAR_1);
   if (VAR_9)
    goto out;

   VAR_7++;
   VAR_8 = FUNC_4(VAR_8->next);
  }

  VAR_7 = 0;
  VAR_8 = FUNC_5(VAR_6);
 }

out:
 VAR_5->skip = VAR_7;
 VAR_9 = (VAR_3->len ? : VAR_9);

out_ret:
 FUNC_8(VAR_6);
 return VAR_9;
}
