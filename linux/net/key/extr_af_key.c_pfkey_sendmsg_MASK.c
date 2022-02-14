
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_sndbuf; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int dummy; } ;
struct TYPE_2__ {int xfrm_cfg_mutex; } ;
struct net {TYPE_1__ xfrm; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,struct msghdr*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sadb_msg*,int,struct sock*) ;
 struct sadb_msg* FUNC_6 (struct sk_buff*,int*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,struct sadb_msg*) ;
 int FUNC_8 (struct sk_buff*,size_t) ;
 struct net* FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_6, struct msghdr *VAR_7, size_t VAR_8)
{
 struct sock *VAR_9 = VAR_6->sk;
 struct sk_buff *VAR_10 = ((void*)0);
 struct sadb_msg *VAR_11 = ((void*)0);
 int VAR_12;
 struct net *VAR_13 = FUNC_9(VAR_9);

 VAR_12 = -VAR_3;
 if (VAR_7->msg_flags & VAR_5)
  goto out;

 VAR_12 = -VAR_1;
 if ((unsigned int)VAR_8 > VAR_9->sk_sndbuf - 32)
  goto out;

 VAR_12 = -VAR_2;
 VAR_10 = FUNC_0(VAR_8, VAR_4);
 if (VAR_10 == ((void*)0))
  goto out;

 VAR_12 = -VAR_0;
 if (FUNC_2(FUNC_8(VAR_10,VAR_8), VAR_7, VAR_8))
  goto out;

 VAR_11 = FUNC_6(VAR_10, &VAR_12);
 if (!VAR_11)
  goto out;

 FUNC_3(&VAR_13->xfrm.xfrm_cfg_mutex);
 VAR_12 = FUNC_7(VAR_9, VAR_10, VAR_11);
 FUNC_4(&VAR_13->xfrm.xfrm_cfg_mutex);

out:
 if (VAR_12 && VAR_11 && FUNC_5(VAR_11, VAR_12, VAR_9) == 0)
  VAR_12 = 0;
 FUNC_1(VAR_10);

 return VAR_12 ? : VAR_8;
}
