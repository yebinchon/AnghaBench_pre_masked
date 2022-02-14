
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int undo_retrans; scalar_t__ undo_marker; } ;


 scalar_t__ FUNC_0 (struct tcp_sock const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct tcp_sock *VAR_0)
{
 return VAR_0->undo_marker && (!VAR_0->undo_retrans || FUNC_0(VAR_0));
}
