
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct bbr {scalar_t__ full_bw_cnt; scalar_t__ full_bw; } ;
struct TYPE_2__ {int snd_cwnd; } ;


 int FUNC_0 (struct sock*) ;
 struct bbr* FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_0)
{
 struct bbr *VAR_1 = FUNC_1(VAR_0);

 VAR_1->full_bw = 0;
 VAR_1->full_bw_cnt = 0;
 FUNC_0(VAR_0);
 return FUNC_2(VAR_0)->snd_cwnd;
}
