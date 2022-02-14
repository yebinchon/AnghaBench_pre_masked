
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xstats ;
struct tc_drr_stats {int deficit; } ;
struct gnet_dump {int dummy; } ;
struct drr_class {int rate_est; int bstats; int deficit; struct Qdisc* qdisc; } ;
struct Qdisc {int qstats; int cpu_qstats; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (struct gnet_dump*,struct tc_drr_stats*,int) ;
 scalar_t__ FUNC_1 (int ,struct gnet_dump*,int *,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;
 int FUNC_4 (struct tc_drr_stats*,int ,int) ;
 scalar_t__ FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_0, unsigned long VAR_1,
    struct gnet_dump *VAR_2)
{
 struct drr_class *VAR_3 = (struct drr_class *)VAR_1;
 __u32 VAR_4 = FUNC_5(VAR_3->qdisc);
 struct Qdisc *VAR_5 = VAR_3->qdisc;
 struct tc_drr_stats VAR_6;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 if (VAR_4)
  VAR_6.deficit = VAR_3->deficit;

 if (FUNC_1(FUNC_6(VAR_0),
      VAR_2, ((void*)0), &VAR_3->bstats) < 0 ||
     FUNC_3(VAR_2, &VAR_3->rate_est) < 0 ||
     FUNC_2(VAR_2, VAR_5->cpu_qstats, &VAR_5->qstats, VAR_4) < 0)
  return -1;

 return FUNC_0(VAR_2, &VAR_6, sizeof(VAR_6));
}
