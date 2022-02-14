
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cake_sched_data {int tin_mode; int tin_cnt; int rate_bps; int interval; scalar_t__ buffer_config_limit; scalar_t__ buffer_limit; TYPE_2__* tins; int rate_shft; int rate_ns; } ;
struct Qdisc {int limit; int flags; } ;
struct TYPE_3__ {int mtu_time; } ;
struct TYPE_4__ {int tin_rate_shft; int tin_rate_ns; TYPE_1__ cparams; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Qdisc*,int) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int,unsigned int) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct Qdisc*) ;
 struct cake_sched_data* FUNC_12 (struct Qdisc*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_13(struct Qdisc *VAR_4)
{
 struct cake_sched_data *VAR_5 = FUNC_12(VAR_4);
 int VAR_6, VAR_7;

 switch (VAR_5->tin_mode) {
 case 132:
  VAR_7 = FUNC_1(VAR_4);
  break;

 case 128:
  VAR_7 = FUNC_5(VAR_4);
  break;

 case 129:
  VAR_7 = FUNC_4(VAR_4);
  break;

 case 130:
  VAR_7 = FUNC_3(VAR_4);
  break;

 case 131:
 default:
  VAR_7 = FUNC_2(VAR_4);
  break;
 }

 for (VAR_6 = VAR_5->tin_cnt; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_4, VAR_6);
  VAR_5->tins[VAR_6].cparams.mtu_time = VAR_5->tins[VAR_7].cparams.mtu_time;
 }

 VAR_5->rate_ns = VAR_5->tins[VAR_7].tin_rate_ns;
 VAR_5->rate_shft = VAR_5->tins[VAR_7].tin_rate_shft;

 if (VAR_5->buffer_config_limit) {
  VAR_5->buffer_limit = VAR_5->buffer_config_limit;
 } else if (VAR_5->rate_bps) {
  u64 VAR_8 = VAR_5->rate_bps * VAR_5->interval;

  FUNC_6(VAR_8, VAR_2 / 4);
  VAR_5->buffer_limit = FUNC_8(VAR_3, VAR_8, 4U << 20);
 } else {
  VAR_5->buffer_limit = ~0;
 }

 VAR_4->flags &= ~VAR_1;

 VAR_5->buffer_limit = FUNC_9(VAR_5->buffer_limit,
         FUNC_7(VAR_4->limit * FUNC_10(FUNC_11(VAR_4)),
      VAR_5->buffer_config_limit));
}
