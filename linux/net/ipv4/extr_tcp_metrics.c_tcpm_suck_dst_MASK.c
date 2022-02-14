
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int exp; scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ cookie; scalar_t__ try_exp; scalar_t__ syn_loss; scalar_t__ mss; } ;
struct tcp_metrics_block {int tcpm_lock; int* tcpm_vals; TYPE_2__ tcpm_fastopen; int tcpm_stamp; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct dst_entry const*,int ) ;
 void* FUNC_1 (struct dst_entry const*,int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_2(struct tcp_metrics_block *VAR_12,
     const struct dst_entry *VAR_13,
     bool VAR_14)
{
 u32 VAR_15;
 u32 VAR_16;

 VAR_12->tcpm_stamp = VAR_11;

 VAR_16 = 0;
 if (FUNC_0(VAR_13, VAR_2))
  VAR_16 |= 1 << VAR_7;
 if (FUNC_0(VAR_13, VAR_3))
  VAR_16 |= 1 << VAR_8;
 if (FUNC_0(VAR_13, VAR_4))
  VAR_16 |= 1 << VAR_9;
 if (FUNC_0(VAR_13, VAR_0))
  VAR_16 |= 1 << VAR_5;
 if (FUNC_0(VAR_13, VAR_1))
  VAR_16 |= 1 << VAR_6;
 VAR_12->tcpm_lock = VAR_16;

 VAR_15 = FUNC_1(VAR_13, VAR_2);
 VAR_12->tcpm_vals[VAR_7] = VAR_15 * VAR_10;

 VAR_15 = FUNC_1(VAR_13, VAR_3);
 VAR_12->tcpm_vals[VAR_8] = VAR_15 * VAR_10;
 VAR_12->tcpm_vals[VAR_9] = FUNC_1(VAR_13, VAR_4);
 VAR_12->tcpm_vals[VAR_5] = FUNC_1(VAR_13, VAR_0);
 VAR_12->tcpm_vals[VAR_6] = FUNC_1(VAR_13, VAR_1);
 if (VAR_14) {
  VAR_12->tcpm_fastopen.mss = 0;
  VAR_12->tcpm_fastopen.syn_loss = 0;
  VAR_12->tcpm_fastopen.try_exp = 0;
  VAR_12->tcpm_fastopen.cookie.exp = 0;
  VAR_12->tcpm_fastopen.cookie.len = 0;
 }
}
