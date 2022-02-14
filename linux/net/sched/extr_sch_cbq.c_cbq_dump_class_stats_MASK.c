
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gnet_dump {int dummy; } ;
struct cbq_sched_data {scalar_t__ now; } ;
struct TYPE_4__ {scalar_t__ undertime; int avgidle; } ;
struct TYPE_3__ {int backlog; } ;
struct cbq_class {scalar_t__ undertime; TYPE_2__ xstats; TYPE_1__ qstats; int rate_est; int bstats; int q; int avgidle; } ;
struct Qdisc {int dummy; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gnet_dump*,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,struct gnet_dump*,int *,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;
 struct cbq_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_7(struct Qdisc *VAR_1, unsigned long VAR_2,
 struct gnet_dump *VAR_3)
{
 struct cbq_sched_data *VAR_4 = FUNC_4(VAR_1);
 struct cbq_class *VAR_5 = (struct cbq_class *)VAR_2;
 __u32 VAR_6;

 VAR_5->xstats.avgidle = VAR_5->avgidle;
 VAR_5->xstats.undertime = 0;
 FUNC_5(VAR_5->q, &VAR_6, &VAR_5->qstats.backlog);

 if (VAR_5->undertime != VAR_0)
  VAR_5->xstats.undertime = VAR_5->undertime - VAR_4->now;

 if (FUNC_1(FUNC_6(VAR_1),
      VAR_3, ((void*)0), &VAR_5->bstats) < 0 ||
     FUNC_3(VAR_3, &VAR_5->rate_est) < 0 ||
     FUNC_2(VAR_3, ((void*)0), &VAR_5->qstats, VAR_6) < 0)
  return -1;

 return FUNC_0(VAR_3, &VAR_5->xstats, sizeof(VAR_5->xstats));
}
