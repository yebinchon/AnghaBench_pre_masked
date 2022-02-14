
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ packets_out; scalar_t__ sacked_out; int lost_out; } ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct tcp_sock *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_0(VAR_0->lost_out, 1U);
 VAR_1 = FUNC_1(VAR_1, VAR_0->packets_out);

 if ((VAR_0->sacked_out + VAR_1) > VAR_0->packets_out) {
  VAR_0->sacked_out = VAR_0->packets_out - VAR_1;
  return 1;
 }
 return 0;
}
