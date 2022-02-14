
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ retrans_stamp; } ;


 scalar_t__ FUNC_0 (struct tcp_sock const*,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(const struct tcp_sock *VAR_0)
{
 return VAR_0->retrans_stamp &&
        FUNC_0(VAR_0, VAR_0->retrans_stamp);
}
