
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct geneve_opt {int length; int opt_data; int type; int opt_class; } ;
struct flow_dissector_key_enc_opts {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5,
      struct flow_dissector_key_enc_opts *VAR_6)
{
 struct geneve_opt *VAR_7;
 struct nlattr *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_2(VAR_5, VAR_1);
 if (!VAR_8)
  goto nla_put_failure;

 while (VAR_6->len > VAR_9) {
  VAR_7 = (struct geneve_opt *)&VAR_6->data[VAR_9];

  if (FUNC_4(VAR_5, VAR_2,
     VAR_7->opt_class))
   goto nla_put_failure;
  if (FUNC_5(VAR_5, VAR_4,
          VAR_7->type))
   goto nla_put_failure;
  if (FUNC_3(VAR_5, VAR_3,
       VAR_7->length * 4, VAR_7->opt_data))
   goto nla_put_failure;

  VAR_9 += sizeof(struct geneve_opt) + VAR_7->length * 4;
 }
 FUNC_1(VAR_5, VAR_8);
 return 0;

nla_put_failure:
 FUNC_0(VAR_5, VAR_8);
 return -VAR_0;
}
