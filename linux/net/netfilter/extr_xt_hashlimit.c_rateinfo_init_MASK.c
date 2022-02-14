
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mode; int avg; int burst; int interval; } ;
struct xt_hashlimit_htable {TYPE_1__ cfg; } ;
struct TYPE_4__ {int rate; int burst; int credit; int credit_cap; void* cost; int interval; scalar_t__ current_rate; scalar_t__ prev_window; int prev; } ;
struct dsthash_ent {TYPE_2__ rateinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dsthash_ent *VAR_5,
     struct xt_hashlimit_htable *VAR_6, int VAR_7)
{
 VAR_5->rateinfo.prev = VAR_4;
 if (VAR_7 >= 3 && VAR_6->cfg.mode & VAR_3) {
  VAR_5->rateinfo.prev_window = 0;
  VAR_5->rateinfo.current_rate = 0;
  if (VAR_6->cfg.mode & VAR_2) {
   VAR_5->rateinfo.rate =
    FUNC_3((u32)VAR_6->cfg.avg);
   if (VAR_6->cfg.burst)
    VAR_5->rateinfo.burst =
     VAR_6->cfg.burst * VAR_5->rateinfo.rate;
   else
    VAR_5->rateinfo.burst = VAR_5->rateinfo.rate;
  } else {
   VAR_5->rateinfo.rate = FUNC_2(VAR_6->cfg.avg);
   VAR_5->rateinfo.burst =
    VAR_6->cfg.burst + VAR_5->rateinfo.rate;
  }
  VAR_5->rateinfo.interval = VAR_6->cfg.interval;
 } else if (VAR_6->cfg.mode & VAR_2) {
  VAR_5->rateinfo.credit = VAR_0 * VAR_1;
  VAR_5->rateinfo.cost = FUNC_1(VAR_6->cfg.avg);
  VAR_5->rateinfo.credit_cap = VAR_6->cfg.burst;
 } else {
  VAR_5->rateinfo.credit = FUNC_0(VAR_6->cfg.avg *
         VAR_6->cfg.burst, VAR_7);
  VAR_5->rateinfo.cost = FUNC_0(VAR_6->cfg.avg, VAR_7);
  VAR_5->rateinfo.credit_cap = VAR_5->rateinfo.credit;
 }
}
