
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct rtnl_link {int (* dumpit ) (struct sk_buff*,struct netlink_callback*) ;} ;
struct netlink_callback {int family; scalar_t__ seq; scalar_t__ prev_seq; int * args; TYPE_1__* nlh; } ;
typedef int (* rtnl_dumpit_func ) (struct sk_buff*,struct netlink_callback*) ;
struct TYPE_2__ {int nlmsg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 struct rtnl_link** FUNC_1 (int ) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_5, struct netlink_callback *VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_6->family;
 int VAR_9 = VAR_6->nlh->nlmsg_type - VAR_1;
 int VAR_10 = 0;

 if (VAR_8 == 0)
  VAR_8 = 1;

 for (VAR_7 = 1; VAR_7 <= VAR_3; VAR_7++) {
  struct rtnl_link **VAR_11;
  struct rtnl_link *VAR_12;
  rtnl_dumpit_func VAR_13;

  if (VAR_7 < VAR_8 || VAR_7 == VAR_0)
   continue;

  if (VAR_9 < 0 || VAR_9 >= VAR_2)
   continue;

  VAR_11 = FUNC_1(VAR_4[VAR_7]);
  if (!VAR_11)
   continue;

  VAR_12 = VAR_11[VAR_9];
  if (!VAR_12)
   continue;

  VAR_13 = VAR_12->dumpit;
  if (!VAR_13)
   continue;

  if (VAR_7 > VAR_8) {
   FUNC_0(&VAR_6->args[0], 0, sizeof(VAR_6->args));
   VAR_6->prev_seq = 0;
   VAR_6->seq = 0;
  }
  VAR_10 = VAR_13(VAR_5, VAR_6);
  if (VAR_10)
   break;
 }
 VAR_6->family = VAR_7;

 return VAR_5->len ? : VAR_10;
}
