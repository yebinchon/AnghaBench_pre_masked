
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct flow_dissector_key_enc_opts {int dst_opt_type; int len; } ;


 int VAR_0 ;

 int FUNC_0 (struct sk_buff*,struct flow_dissector_key_enc_opts*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, int VAR_2,
          struct flow_dissector_key_enc_opts *VAR_3)
{
 struct nlattr *VAR_4;
 int VAR_5;

 if (!VAR_3->len)
  return 0;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_4)
  goto nla_put_failure;

 switch (VAR_3->dst_opt_type) {
 case 128:
  VAR_5 = FUNC_0(VAR_1, VAR_3);
  if (VAR_5)
   goto nla_put_failure;
  break;
 default:
  goto nla_put_failure;
 }
 FUNC_2(VAR_1, VAR_4);
 return 0;

nla_put_failure:
 FUNC_1(VAR_1, VAR_4);
 return -VAR_0;
}
