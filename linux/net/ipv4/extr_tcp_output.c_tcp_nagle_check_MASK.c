
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ packets_out; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcp_sock const*) ;

__attribute__((used)) static bool FUNC_1(bool VAR_1, const struct tcp_sock *VAR_2,
       int VAR_3)
{
 return VAR_1 &&
  ((VAR_3 & VAR_0) ||
   (!VAR_3 && VAR_2->packets_out && FUNC_0(VAR_2)));
}
