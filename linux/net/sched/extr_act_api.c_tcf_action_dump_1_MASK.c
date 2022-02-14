
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_cookie {int data; int len; } ;
struct tc_action {int act_cookie; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 struct tc_cookie* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct tc_action*,int ) ;
 int FUNC_10 (struct sk_buff*,struct tc_action*,int,int) ;

int
FUNC_11(struct sk_buff *VAR_4, struct tc_action *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_0;
 unsigned char *VAR_9 = FUNC_8(VAR_4);
 struct nlattr *VAR_10;
 struct tc_cookie *VAR_11;

 if (FUNC_3(VAR_4, VAR_2, VAR_5->ops->kind))
  goto nla_put_failure;
 if (FUNC_9(VAR_4, VAR_5, 0))
  goto nla_put_failure;

 FUNC_6();
 VAR_11 = FUNC_5(VAR_5->act_cookie);
 if (VAR_11) {
  if (FUNC_2(VAR_4, VAR_1, VAR_11->len, VAR_11->data)) {
   FUNC_7();
   goto nla_put_failure;
  }
 }
 FUNC_7();

 VAR_10 = FUNC_1(VAR_4, VAR_3);
 if (VAR_10 == ((void*)0))
  goto nla_put_failure;
 VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 > 0) {
  FUNC_0(VAR_4, VAR_10);
  return VAR_8;
 }

nla_put_failure:
 FUNC_4(VAR_4, VAR_9);
 return -1;
}
