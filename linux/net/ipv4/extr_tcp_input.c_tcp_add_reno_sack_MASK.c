
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ sacked_out; int delivered; } ;
struct sock {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct sock*,int ) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, int VAR_1)
{
 if (VAR_1) {
  struct tcp_sock *VAR_2 = FUNC_1(VAR_0);
  u32 VAR_3 = VAR_2->sacked_out;
  s32 VAR_4;

  VAR_2->sacked_out += VAR_1;
  FUNC_0(VAR_0, 0);
  VAR_4 = VAR_2->sacked_out - VAR_3;
  if (VAR_4 > 0)
   VAR_2->delivered += VAR_4;
  FUNC_2(VAR_2);
 }
}
