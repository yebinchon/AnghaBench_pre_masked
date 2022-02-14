
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int diag_nlsk; } ;
struct inet_diag_req_v2 {int dummy; } ;
struct inet_diag_msg {int dummy; } ;
struct inet_diag_meminfo {int dummy; } ;
struct TYPE_2__ {int portid; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int VAR_3 ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int *,struct sk_buff*,struct inet_diag_req_v2 const*,int ,int ,int ,int ,struct nlmsghdr const*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_7 (int,int ) ;
 struct sock* FUNC_8 (struct net*,struct inet_diag_req_v2 const*) ;
 int FUNC_9 (int ) ;
 struct net* FUNC_10 (int ) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_4,
        const struct nlmsghdr *VAR_5,
        const struct inet_diag_req_v2 *VAR_6)
{
 struct net *VAR_7 = FUNC_10(VAR_4->sk);
 struct sk_buff *VAR_8;
 struct sock *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_8(VAR_7, VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 VAR_8 = FUNC_7(sizeof(struct inet_diag_msg) +
   sizeof(struct inet_diag_meminfo) + 64,
   VAR_2);
 if (!VAR_8) {
  FUNC_11(VAR_9);
  return -VAR_1;
 }

 VAR_10 = FUNC_3(VAR_9, ((void*)0), VAR_8, VAR_6,
    FUNC_9(FUNC_1(VAR_4).sk),
    FUNC_1(VAR_4).portid,
    VAR_5->nlmsg_seq, 0, VAR_5,
    FUNC_5(VAR_4, VAR_0));
 FUNC_11(VAR_9);

 if (VAR_10 < 0) {
  FUNC_4(VAR_8);
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_7->diag_nlsk, VAR_8,
         FUNC_1(VAR_4).portid,
         VAR_3);
 if (VAR_10 > 0)
  VAR_10 = 0;
 return VAR_10;
}
