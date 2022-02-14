
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ compressed_ack; scalar_t__ rcv_nxt; int compressed_ack_timer; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,unsigned int) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(struct sock *VAR_3, unsigned int VAR_4,
          u32 VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_6(VAR_3);

 if (FUNC_7(VAR_6->compressed_ack > VAR_2)) {
  FUNC_0(FUNC_4(VAR_3), VAR_1,
         VAR_6->compressed_ack - VAR_2);
  VAR_6->compressed_ack = VAR_2;
  if (FUNC_2(&VAR_6->compressed_ack_timer) == 1)
   FUNC_1(VAR_3);
 }

 if (FUNC_7(VAR_5 != VAR_6->rcv_nxt))
  return;
 FUNC_5(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_0);
}
