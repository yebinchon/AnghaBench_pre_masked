
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_tunnel_info {int options_len; } ;
struct geneve_opt {int length; int type; int opt_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct geneve_opt*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5,
           const struct ip_tunnel_info *VAR_6)
{
 int VAR_7 = VAR_6->options_len;
 u8 *VAR_8 = (u8 *)(VAR_6 + 1);
 struct nlattr *VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 while (VAR_7 > 0) {
  struct geneve_opt *VAR_10 = (struct geneve_opt *)VAR_8;

  if (FUNC_4(VAR_5, VAR_2,
     VAR_10->opt_class) ||
      FUNC_5(VAR_5, VAR_4,
          VAR_10->type) ||
      FUNC_3(VAR_5, VAR_3,
       VAR_10->length * 4, VAR_10 + 1)) {
   FUNC_0(VAR_5, VAR_9);
   return -VAR_0;
  }

  VAR_7 -= sizeof(struct geneve_opt) + VAR_10->length * 4;
  VAR_8 += sizeof(struct geneve_opt) + VAR_10->length * 4;
 }

 FUNC_1(VAR_5, VAR_9);
 return 0;
}
