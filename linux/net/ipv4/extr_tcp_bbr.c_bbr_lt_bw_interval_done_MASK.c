
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct bbr {int lt_bw; int lt_use_bw; int pacing_gain; scalar_t__ lt_rtt_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sock*,int,int) ;
 int FUNC_2 (struct sock*) ;
 struct bbr* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_3, u32 VAR_4)
{
 struct bbr *VAR_5 = FUNC_3(VAR_3);
 u32 VAR_6;

 if (VAR_5->lt_bw) {

  VAR_6 = FUNC_0(VAR_4 - VAR_5->lt_bw);
  if ((VAR_6 * VAR_0 <= VAR_2 * VAR_5->lt_bw) ||
      (FUNC_1(VAR_3, VAR_6, VAR_0) <=
       VAR_1)) {

   VAR_5->lt_bw = (VAR_4 + VAR_5->lt_bw) >> 1;
   VAR_5->lt_use_bw = 1;
   VAR_5->pacing_gain = VAR_0;
   VAR_5->lt_rtt_cnt = 0;
   return;
  }
 }
 VAR_5->lt_bw = VAR_4;
 FUNC_2(VAR_3);
}
