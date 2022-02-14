
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_congestion_ops {int owner; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {struct tcp_congestion_ops const* icsk_ca_ops; int icsk_ca_dst_locked; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dst_entry const*,int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct dst_entry const*) ;
 struct tcp_congestion_ops* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_2, const struct dst_entry *VAR_3)
{
 struct inet_connection_sock *VAR_4 = FUNC_1(VAR_2);
 const struct tcp_congestion_ops *VAR_5;
 u32 VAR_6 = FUNC_0(VAR_3, VAR_0);

 if (VAR_6 == VAR_1)
  return;

 FUNC_4();
 VAR_5 = FUNC_7(VAR_6);
 if (FUNC_2(VAR_5 && FUNC_8(VAR_5->owner))) {
  FUNC_3(VAR_4->icsk_ca_ops->owner);
  VAR_4->icsk_ca_dst_locked = FUNC_6(VAR_3);
  VAR_4->icsk_ca_ops = VAR_5;
 }
 FUNC_5();
}
