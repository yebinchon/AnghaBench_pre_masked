
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int urg_data; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct msghdr*,char*,int) ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_13, struct msghdr *VAR_14, int VAR_15, int VAR_16)
{
 struct tcp_sock *VAR_17 = FUNC_2(VAR_13);


 if (FUNC_1(VAR_13, VAR_9) || !VAR_17->urg_data ||
     VAR_17->urg_data == VAR_11)
  return -VAR_2;

 if (VAR_13->sk_state == VAR_10 && !FUNC_1(VAR_13, VAR_8))
  return -VAR_3;

 if (VAR_17->urg_data & VAR_12) {
  int VAR_18 = 0;
  char VAR_19 = VAR_17->urg_data;

  if (!(VAR_16 & VAR_5))
   VAR_17->urg_data = VAR_11;


  VAR_14->msg_flags |= VAR_4;

  if (VAR_15 > 0) {
   if (!(VAR_16 & VAR_6))
    VAR_18 = FUNC_0(VAR_14, &VAR_19, 1);
   VAR_15 = 1;
  } else
   VAR_14->msg_flags |= VAR_6;

  return VAR_18 ? -VAR_1 : VAR_15;
 }

 if (VAR_13->sk_state == VAR_10 || (VAR_13->sk_shutdown & VAR_7))
  return 0;







 return -VAR_0;
}
