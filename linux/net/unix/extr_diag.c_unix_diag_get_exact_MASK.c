
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unix_diag_req {scalar_t__ udiag_ino; int udiag_cookie; } ;
struct unix_diag_msg {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int diag_nlsk; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct net*,struct net*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 int FUNC_5 (struct sock*,struct sk_buff*,struct unix_diag_req*,int ,int ,int ,scalar_t__) ;
 int FUNC_6 (struct sock*,int ) ;
 struct net* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 struct sock* FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6,
          const struct nlmsghdr *VAR_7,
          struct unix_diag_req *VAR_8)
{
 int VAR_9 = -VAR_0;
 struct sock *VAR_10;
 struct sk_buff *VAR_11;
 unsigned int VAR_12;
 struct net *VAR_13 = FUNC_7(VAR_6->sk);

 if (VAR_8->udiag_ino == 0)
  goto out_nosk;

 VAR_10 = FUNC_9(VAR_8->udiag_ino);
 VAR_9 = -VAR_1;
 if (VAR_10 == ((void*)0))
  goto out_nosk;
 if (!FUNC_1(FUNC_7(VAR_10), VAR_13))
  goto out;

 VAR_9 = FUNC_6(VAR_10, VAR_8->udiag_cookie);
 if (VAR_9)
  goto out;

 VAR_12 = 256;
again:
 VAR_9 = -VAR_2;
 VAR_11 = FUNC_4(sizeof(struct unix_diag_msg) + VAR_12, VAR_3);
 if (!VAR_11)
  goto out;

 VAR_9 = FUNC_5(VAR_10, VAR_11, VAR_8, FUNC_0(VAR_6).portid,
      VAR_7->nlmsg_seq, 0, VAR_8->udiag_ino);
 if (VAR_9 < 0) {
  FUNC_3(VAR_11);
  VAR_12 += 256;
  if (VAR_12 >= VAR_5)
   goto out;

  goto again;
 }
 VAR_9 = FUNC_2(VAR_13->diag_nlsk, VAR_11, FUNC_0(VAR_6).portid,
         VAR_4);
 if (VAR_9 > 0)
  VAR_9 = 0;
out:
 if (VAR_10)
  FUNC_8(VAR_10);
out_nosk:
 return VAR_9;
}
