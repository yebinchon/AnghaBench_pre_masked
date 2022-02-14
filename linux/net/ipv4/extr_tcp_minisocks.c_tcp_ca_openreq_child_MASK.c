
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_congestion_ops {int owner; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {struct tcp_congestion_ops const* icsk_ca_ops; int icsk_ca_setsockopt; int icsk_ca_dst_locked; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct dst_entry const*,int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct dst_entry const*) ;
 struct tcp_congestion_ops* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sock*,int ) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(struct sock *VAR_3, const struct dst_entry *VAR_4)
{
 struct inet_connection_sock *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = FUNC_0(VAR_4, VAR_0);
 bool VAR_7 = 0;

 if (VAR_6 != VAR_2) {
  const struct tcp_congestion_ops *VAR_8;

  FUNC_3();
  VAR_8 = FUNC_7(VAR_6);
  if (FUNC_2(VAR_8 && FUNC_9(VAR_8->owner))) {
   VAR_5->icsk_ca_dst_locked = FUNC_6(VAR_4);
   VAR_5->icsk_ca_ops = VAR_8;
   VAR_7 = 1;
  }
  FUNC_4();
 }


 if (!VAR_7 &&
     (!VAR_5->icsk_ca_setsockopt ||
      !FUNC_9(VAR_5->icsk_ca_ops->owner)))
  FUNC_5(VAR_3);

 FUNC_8(VAR_3, VAR_1);
}
