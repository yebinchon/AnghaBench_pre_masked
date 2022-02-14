
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_tunnel_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct ip_tunnel_key const*,void const*,int,unsigned short,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2,
       const struct ip_tunnel_key *VAR_3,
       const void *VAR_4, int VAR_5,
       unsigned short VAR_6, u8 VAR_7)
{
 struct nlattr *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_2, VAR_8);
 return 0;
}
