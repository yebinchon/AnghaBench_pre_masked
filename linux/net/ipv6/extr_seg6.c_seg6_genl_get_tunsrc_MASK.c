
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;
struct TYPE_2__ {int tun_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net* FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct in6_addr*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct in6_addr* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_5 ;
 TYPE_1__* FUNC_10 (struct net*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct net *VAR_8 = FUNC_0(VAR_7);
 struct in6_addr *VAR_9;
 struct sk_buff *VAR_10;
 void *VAR_11;

 VAR_10 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_10, VAR_7->snd_portid, VAR_7->snd_seq,
     &VAR_5, 0, VAR_4);
 if (!VAR_11)
  goto free_msg;

 FUNC_8();
 VAR_9 = FUNC_7(FUNC_10(VAR_8)->tun_src);

 if (FUNC_5(VAR_10, VAR_3, sizeof(struct in6_addr), VAR_9))
  goto nla_put_failure;

 FUNC_9();

 FUNC_1(VAR_10, VAR_11);
 return FUNC_4(VAR_10, VAR_7);

nla_put_failure:
 FUNC_9();
free_msg:
 FUNC_6(VAR_10);
 return -VAR_0;
}
