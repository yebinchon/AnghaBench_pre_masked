
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct inet_diag_req_v2 {int sdiag_protocol; } ;
struct inet_diag_handler {int (* dump ) (struct sk_buff*,struct netlink_callback*,struct inet_diag_req_v2 const*,struct nlattr*) ;} ;


 int FUNC_0 (struct inet_diag_handler const*) ;
 int FUNC_1 (struct inet_diag_handler const*) ;
 struct inet_diag_handler* FUNC_2 (int ) ;
 int FUNC_3 (struct inet_diag_handler const*) ;
 int FUNC_4 (struct sk_buff*,struct netlink_callback*,struct inet_diag_req_v2 const*,struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, struct netlink_callback *VAR_1,
       const struct inet_diag_req_v2 *VAR_2,
       struct nlattr *VAR_3)
{
 const struct inet_diag_handler *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_2->sdiag_protocol);
 if (!FUNC_0(VAR_4))
  VAR_4->dump(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  VAR_5 = FUNC_1(VAR_4);
 FUNC_3(VAR_4);

 return VAR_5 ? : VAR_0->len;
}
