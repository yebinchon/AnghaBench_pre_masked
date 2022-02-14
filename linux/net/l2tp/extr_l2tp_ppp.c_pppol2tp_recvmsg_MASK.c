
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_state; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,struct msghdr*,size_t) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_4, struct msghdr *VAR_5,
       size_t VAR_6, int VAR_7)
{
 int VAR_8;
 struct sk_buff *VAR_9;
 struct sock *VAR_10 = VAR_4->sk;

 VAR_8 = -VAR_0;
 if (VAR_10->sk_state & VAR_3)
  goto end;

 VAR_8 = 0;
 VAR_9 = FUNC_3(VAR_10, VAR_7 & ~VAR_1,
    VAR_7 & VAR_1, &VAR_8);
 if (!VAR_9)
  goto end;

 if (VAR_6 > VAR_9->len)
  VAR_6 = VAR_9->len;
 else if (VAR_6 < VAR_9->len)
  VAR_5->msg_flags |= VAR_2;

 VAR_8 = FUNC_2(VAR_9, 0, VAR_5, VAR_6);
 if (FUNC_1(VAR_8 == 0))
  VAR_8 = VAR_6;

 FUNC_0(VAR_9);
end:
 return VAR_8;
}
