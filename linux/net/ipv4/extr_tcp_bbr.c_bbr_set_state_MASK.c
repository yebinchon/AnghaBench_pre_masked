
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct rate_sample {int losses; } ;
struct bbr {int round_start; scalar_t__ full_bw; scalar_t__ prev_ca_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*,struct rate_sample*) ;
 struct bbr* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, u8 VAR_2)
{
 struct bbr *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 == VAR_0) {
  struct rate_sample VAR_4 = { .losses = 1 };

  VAR_3->prev_ca_state = VAR_0;
  VAR_3->full_bw = 0;
  VAR_3->round_start = 1;
  FUNC_0(VAR_1, &VAR_4);
 }
}
