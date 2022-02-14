
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct rate_sample {int acked_sacked; } ;
struct bbr {int cwnd_gain; int pacing_gain; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct rate_sample const*,int ,int ,int ) ;
 int FUNC_2 (struct sock*,int ,int ) ;
 int FUNC_3 (struct sock*,struct rate_sample const*) ;
 struct bbr* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, const struct rate_sample *VAR_1)
{
 struct bbr *VAR_2 = FUNC_4(VAR_0);
 u32 VAR_3;

 FUNC_3(VAR_0, VAR_1);

 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_3, VAR_2->pacing_gain);
 FUNC_1(VAR_0, VAR_1, VAR_1->acked_sacked, VAR_3, VAR_2->cwnd_gain);
}
