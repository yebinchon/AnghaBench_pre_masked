
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct tcp_congestion_ops {int flags; int owner; } const tcp_congestion_ops ;
struct sock {int dummy; } ;
struct inet_connection_sock {int icsk_ca_setsockopt; struct tcp_congestion_ops const* icsk_ca_ops; scalar_t__ icsk_ca_dst_locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*) ;
 struct tcp_congestion_ops const* FUNC_5 (char const*) ;
 struct tcp_congestion_ops const* FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct sock*,struct tcp_congestion_ops const*) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct sock *VAR_4, const char *VAR_5, bool VAR_6,
          bool VAR_7, bool VAR_8)
{
 struct inet_connection_sock *VAR_9 = FUNC_0(VAR_4);
 const struct tcp_congestion_ops *VAR_10;
 int VAR_11 = 0;

 if (VAR_9->icsk_ca_dst_locked)
  return -VAR_2;

 FUNC_2();
 if (!VAR_6)
  VAR_10 = FUNC_5(VAR_5);
 else
  VAR_10 = FUNC_6(FUNC_4(VAR_4), VAR_5);


 if (VAR_10 == VAR_9->icsk_ca_ops) {
  VAR_9->icsk_ca_setsockopt = 1;
  goto out;
 }

 if (!VAR_10) {
  VAR_11 = -VAR_1;
 } else if (!VAR_6) {
  const struct tcp_congestion_ops *VAR_12 = VAR_9->icsk_ca_ops;

  if (FUNC_8(VAR_10->owner)) {
   if (VAR_7) {
    FUNC_7(VAR_4, VAR_10);
   } else {
    VAR_9->icsk_ca_ops = VAR_10;
    FUNC_1(VAR_12->owner);
   }
  } else {
   VAR_11 = -VAR_0;
  }
 } else if (!((VAR_10->flags & VAR_3) || VAR_8)) {
  VAR_11 = -VAR_2;
 } else if (!FUNC_8(VAR_10->owner)) {
  VAR_11 = -VAR_0;
 } else {
  FUNC_7(VAR_4, VAR_10);
 }
 out:
 FUNC_3();
 return VAR_11;
}
