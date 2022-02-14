
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct bbr {int mode; size_t cycle_idx; void* cwnd_gain; void* pacing_gain; int lt_use_bw; } ;






 void* VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void** VAR_4 ;
 struct bbr* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_5)
{
 struct bbr *VAR_6 = FUNC_1(VAR_5);

 switch (VAR_6->mode) {
 case 128:
  VAR_6->pacing_gain = VAR_3;
  VAR_6->cwnd_gain = VAR_3;
  break;
 case 131:
  VAR_6->pacing_gain = VAR_2;
  VAR_6->cwnd_gain = VAR_3;
  break;
 case 130:
  VAR_6->pacing_gain = (VAR_6->lt_use_bw ?
        VAR_0 :
        VAR_4[VAR_6->cycle_idx]);
  VAR_6->cwnd_gain = VAR_1;
  break;
 case 129:
  VAR_6->pacing_gain = VAR_0;
  VAR_6->cwnd_gain = VAR_0;
  break;
 default:
  FUNC_0(1, "BBR bad mode: %u\n", VAR_6->mode);
  break;
 }
}
