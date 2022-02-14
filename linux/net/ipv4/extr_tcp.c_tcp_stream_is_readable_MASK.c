
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int copied_seq; int rcv_nxt; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* stream_memory_read ) (struct sock*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static inline bool FUNC_2(const struct tcp_sock *VAR_0,
       int VAR_1, struct sock *VAR_2)
{
 return (FUNC_0(VAR_0->rcv_nxt) - FUNC_0(VAR_0->copied_seq) >= VAR_1) ||
  (VAR_2->sk_prot->stream_memory_read ?
  VAR_2->sk_prot->stream_memory_read(VAR_2) : 0);
}
