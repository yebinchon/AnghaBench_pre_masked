
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubuf_info {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; struct sock* sk; } ;
struct iov_iter {int dummy; } ;
struct msghdr {struct iov_iter msg_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sock*,struct sk_buff*,struct iov_iter*,int) ;
 struct ubuf_info* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct ubuf_info*,int *) ;

int FUNC_4(struct sock *VAR_3, struct sk_buff *VAR_4,
        struct msghdr *VAR_5, int VAR_6,
        struct ubuf_info *VAR_7)
{
 struct ubuf_info *VAR_8 = FUNC_2(VAR_4);
 struct iov_iter VAR_9 = VAR_5->msg_iter;
 int VAR_10, VAR_11 = VAR_4->len;




 if (VAR_8 && VAR_7 != VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_3, VAR_4, &VAR_5->msg_iter, VAR_6);
 if (VAR_10 == -VAR_1 || (VAR_10 == -VAR_2 && VAR_4->len == VAR_11)) {
  struct sock *VAR_12 = VAR_4->sk;


  VAR_5->msg_iter = VAR_9;
  VAR_4->sk = VAR_3;
  FUNC_0(VAR_4, VAR_11);
  VAR_4->sk = VAR_12;
  return VAR_10;
 }

 FUNC_3(VAR_4, VAR_7, ((void*)0));
 return VAR_4->len - VAR_11;
}
