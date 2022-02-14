
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct seg6_pernet_data {int lock; struct in6_addr* tun_src; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct net* FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct in6_addr*) ;
 struct in6_addr* FUNC_2 (struct in6_addr*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct in6_addr* FUNC_5 (int ) ;
 int FUNC_6 (struct in6_addr*,struct in6_addr*) ;
 struct seg6_pernet_data* FUNC_7 (struct net*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct net *VAR_6 = FUNC_0(VAR_5);
 struct in6_addr *VAR_7, *VAR_8, *VAR_9;
 struct seg6_pernet_data *VAR_10;

 VAR_10 = FUNC_7(VAR_6);

 if (!VAR_5->attrs[VAR_3])
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_5->attrs[VAR_3]);
 VAR_9 = FUNC_2(VAR_7, sizeof(*VAR_7), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_3(&VAR_10->lock);

 VAR_8 = VAR_10->tun_src;
 FUNC_6(VAR_10->tun_src, VAR_9);

 FUNC_4(&VAR_10->lock);

 FUNC_8();
 FUNC_1(VAR_8);

 return 0;
}
