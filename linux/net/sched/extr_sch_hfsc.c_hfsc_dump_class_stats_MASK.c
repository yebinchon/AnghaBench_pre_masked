
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xstats ;
struct tc_hfsc_stats {int rtwork; int work; int period; int level; } ;
struct TYPE_2__ {int backlog; } ;
struct hfsc_class {TYPE_1__ qstats; int rate_est; int bstats; int cl_cumul; int cl_total; int cl_vtperiod; int level; int qdisc; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct gnet_dump*,struct tc_hfsc_stats*,int) ;
 scalar_t__ FUNC_1 (int ,struct gnet_dump*,int *,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_6(struct Qdisc *VAR_0, unsigned long VAR_1,
 struct gnet_dump *VAR_2)
{
 struct hfsc_class *VAR_3 = (struct hfsc_class *)VAR_1;
 struct tc_hfsc_stats VAR_4;
 __u32 VAR_5;

 FUNC_4(VAR_3->qdisc, &VAR_5, &VAR_3->qstats.backlog);
 VAR_4.level = VAR_3->level;
 VAR_4.period = VAR_3->cl_vtperiod;
 VAR_4.work = VAR_3->cl_total;
 VAR_4.rtwork = VAR_3->cl_cumul;

 if (FUNC_1(FUNC_5(VAR_0), VAR_2, ((void*)0), &VAR_3->bstats) < 0 ||
     FUNC_3(VAR_2, &VAR_3->rate_est) < 0 ||
     FUNC_2(VAR_2, ((void*)0), &VAR_3->qstats, VAR_5) < 0)
  return -1;

 return FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
}
