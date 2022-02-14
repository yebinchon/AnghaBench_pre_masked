
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct inet_diag_req_v2 {int dummy; } ;
struct TYPE_4__ {int portid; int sk; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*,struct sk_buff*,struct inet_diag_req_v2 const*,int ,int ,int ,int ,TYPE_1__*,int) ;
 int FUNC_2 (struct nlattr const*,struct sock*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1,
         struct sk_buff *VAR_2,
         struct netlink_callback *VAR_3,
         const struct inet_diag_req_v2 *VAR_4,
         const struct nlattr *VAR_5,
         bool VAR_6)
{
 if (!FUNC_2(VAR_5, VAR_1))
  return 0;

 return FUNC_1(VAR_1, VAR_2, VAR_4,
      FUNC_3(FUNC_0(VAR_3->skb).sk),
      FUNC_0(VAR_3->skb).portid,
      VAR_3->nlh->nlmsg_seq, VAR_0, VAR_3->nlh,
      VAR_6);
}
