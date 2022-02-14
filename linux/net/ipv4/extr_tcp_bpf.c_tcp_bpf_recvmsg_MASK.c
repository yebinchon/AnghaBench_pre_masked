
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_psock {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_psock*,struct msghdr*,size_t,int) ;
 int FUNC_1 (struct sock*,struct msghdr*,size_t,int*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct sk_psock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_psock*) ;
 scalar_t__ FUNC_6 (int *) ;
 long FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*,struct sk_psock*,int,long,int*) ;
 int FUNC_9 (struct sock*,struct msghdr*,size_t,int,int,int*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct sock *VAR_2, struct msghdr *VAR_3, size_t VAR_4,
      int VAR_5, int VAR_6, int *VAR_7)
{
 struct sk_psock *VAR_8;
 int VAR_9, VAR_10;

 if (FUNC_10(VAR_6 & VAR_1))
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7);
 if (!FUNC_6(&VAR_2->sk_receive_queue))
  return FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_8 = FUNC_4(VAR_2);
 if (FUNC_10(!VAR_8))
  return FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_2);
msg_bytes_ready:
 VAR_9 = FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4, VAR_6);
 if (!VAR_9) {
  int VAR_11, VAR_12 = 0;
  long VAR_13;

  VAR_13 = FUNC_7(VAR_2, VAR_5);
  VAR_11 = FUNC_8(VAR_2, VAR_8, VAR_6, VAR_13, &VAR_12);
  if (VAR_11) {
   if (FUNC_6(&VAR_2->sk_receive_queue))
    goto msg_bytes_ready;
   FUNC_3(VAR_2);
   FUNC_5(VAR_2, VAR_8);
   return FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  }
  if (VAR_12) {
   VAR_10 = VAR_12;
   goto out;
  }
  VAR_9 = -VAR_0;
 }
 VAR_10 = VAR_9;
out:
 FUNC_3(VAR_2);
 FUNC_5(VAR_2, VAR_8);
 return VAR_10;
}
