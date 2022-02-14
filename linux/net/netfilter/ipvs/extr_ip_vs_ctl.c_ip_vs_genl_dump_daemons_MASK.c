
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int sk; } ;
struct netns_ipvs {int sync_state; int sync_mutex; int bcfg; int mcfg; } ;
struct netlink_callback {int* args; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int *,struct netlink_callback*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netns_ipvs* FUNC_3 (struct net*) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2,
       struct netlink_callback *VAR_3)
{
 struct net *VAR_4 = FUNC_4(VAR_2->sk);
 struct netns_ipvs *VAR_5 = FUNC_3(VAR_4);

 FUNC_1(&VAR_5->sync_mutex);
 if ((VAR_5->sync_state & VAR_1) && !VAR_3->args[0]) {
  if (FUNC_0(VAR_2, VAR_1,
        &VAR_5->mcfg, VAR_3) < 0)
   goto nla_put_failure;

  VAR_3->args[0] = 1;
 }

 if ((VAR_5->sync_state & VAR_0) && !VAR_3->args[1]) {
  if (FUNC_0(VAR_2, VAR_0,
        &VAR_5->bcfg, VAR_3) < 0)
   goto nla_put_failure;

  VAR_3->args[1] = 1;
 }

nla_put_failure:
 FUNC_2(&VAR_5->sync_mutex);

 return VAR_2->len;
}
