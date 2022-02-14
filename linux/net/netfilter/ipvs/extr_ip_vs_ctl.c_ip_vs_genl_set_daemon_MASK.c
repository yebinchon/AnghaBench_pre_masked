
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; TYPE_1__* genlhdr; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netns_ipvs*,struct nlattr**) ;
 int FUNC_1 (struct netns_ipvs*,struct nlattr**) ;
 struct netns_ipvs* FUNC_2 (struct net*) ;
 scalar_t__ FUNC_3 (struct nlattr**,int ,int ,int ,int ) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 int VAR_8 = -VAR_0, VAR_9;
 struct net *VAR_10 = FUNC_4(VAR_6->sk);
 struct netns_ipvs *VAR_11 = FUNC_2(VAR_10);

 VAR_9 = VAR_7->genlhdr->cmd;

 if (VAR_9 == VAR_3 || VAR_9 == VAR_2) {
  struct nlattr *VAR_12[VAR_4 + 1];

  if (!VAR_7->attrs[VAR_1] ||
      FUNC_3(VAR_12, VAR_4, VAR_7->attrs[VAR_1], VAR_5, VAR_7->extack))
   goto out;

  if (VAR_9 == VAR_3)
   VAR_8 = FUNC_1(VAR_11, VAR_12);
  else
   VAR_8 = FUNC_0(VAR_11, VAR_12);
 }

out:
 return VAR_8;
}
