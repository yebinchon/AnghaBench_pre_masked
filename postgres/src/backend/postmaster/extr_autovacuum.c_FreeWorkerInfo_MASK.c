
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* av_signal; int av_freeWorkers; int av_launcherpid; } ;
struct TYPE_3__ {int wi_sharedrel; int wi_dobalance; int wi_links; scalar_t__ wi_cost_limit_base; scalar_t__ wi_cost_limit; scalar_t__ wi_cost_delay; scalar_t__ wi_launchtime; int * wi_proc; void* wi_tableoid; void* wi_dboid; } ;
typedef int Datum ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(int VAR_7, Datum VAR_8)
{
 if (VAR_6 != ((void*)0))
 {
  FUNC_0(VAR_3, VAR_5);
  VAR_2 = VAR_1->av_launcherpid;

  FUNC_2(&VAR_6->wi_links);
  VAR_6->wi_dboid = VAR_4;
  VAR_6->wi_tableoid = VAR_4;
  VAR_6->wi_sharedrel = 0;
  VAR_6->wi_proc = ((void*)0);
  VAR_6->wi_launchtime = 0;
  VAR_6->wi_dobalance = 0;
  VAR_6->wi_cost_delay = 0;
  VAR_6->wi_cost_limit = 0;
  VAR_6->wi_cost_limit_base = 0;
  FUNC_3(&VAR_1->av_freeWorkers,
      &VAR_6->wi_links);

  VAR_6 = ((void*)0);





  VAR_1->av_signal[VAR_0] = 1;
  FUNC_1(VAR_3);
 }
}
