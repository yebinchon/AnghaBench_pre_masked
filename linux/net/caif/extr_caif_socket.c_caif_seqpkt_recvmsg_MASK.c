
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*,int ,struct msghdr*,int) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct msghdr *VAR_4,
          size_t VAR_5, int VAR_6)

{
 struct sock *VAR_7 = VAR_3->sk;
 struct sk_buff *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = -VAR_0;
 if (VAR_6 & VAR_1)
  goto read_error;

 VAR_8 = FUNC_3(VAR_7, VAR_6, 0 , &VAR_9);
 if (!VAR_8)
  goto read_error;
 VAR_10 = VAR_8->len;
 if (VAR_5 < VAR_10) {
  VAR_4->msg_flags |= VAR_2;
  VAR_10 = VAR_5;
 }

 VAR_9 = FUNC_1(VAR_8, 0, VAR_4, VAR_10);
 if (VAR_9)
  goto out_free;

 VAR_9 = (VAR_6 & VAR_2) ? VAR_8->len : VAR_10;
out_free:
 FUNC_2(VAR_7, VAR_8);
 FUNC_0(VAR_7);
 return VAR_9;

read_error:
 return VAR_9;
}
