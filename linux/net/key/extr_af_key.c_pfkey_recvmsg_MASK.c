
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int * dump; } ;
struct pfkey_sock {TYPE_1__ dump; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pfkey_sock*) ;
 struct pfkey_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,int ,struct msghdr*,int) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,int,int,int*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_5, struct msghdr *VAR_6, size_t VAR_7,
    int VAR_8)
{
 struct sock *VAR_9 = VAR_5->sk;
 struct pfkey_sock *VAR_10 = FUNC_2(VAR_9);
 struct sk_buff *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = -VAR_0;
 if (VAR_8 & ~(VAR_3|VAR_2|VAR_4|VAR_1))
  goto out;

 VAR_11 = FUNC_5(VAR_9, VAR_8, VAR_8 & VAR_2, &VAR_13);
 if (VAR_11 == ((void*)0))
  goto out;

 VAR_12 = VAR_11->len;
 if (VAR_12 > VAR_7) {
  VAR_6->msg_flags |= VAR_4;
  VAR_12 = VAR_7;
 }

 FUNC_6(VAR_11);
 VAR_13 = FUNC_3(VAR_11, 0, VAR_6, VAR_12);
 if (VAR_13)
  goto out_free;

 FUNC_7(VAR_6, VAR_9, VAR_11);

 VAR_13 = (VAR_8 & VAR_4) ? VAR_11->len : VAR_12;

 if (VAR_10->dump.dump != ((void*)0) &&
     3 * FUNC_0(&VAR_9->sk_rmem_alloc) <= VAR_9->sk_rcvbuf)
  FUNC_1(VAR_10);

out_free:
 FUNC_4(VAR_9, VAR_11);
out:
 return VAR_13;
}
