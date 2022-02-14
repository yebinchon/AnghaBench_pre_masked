
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {scalar_t__ level; scalar_t__ filter_cnt; int cl_common; int qdisc; int cl_parent; int siblings; } ;
struct hfsc_sched {int clhash; struct hfsc_class root; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct Qdisc*,struct hfsc_class*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 struct hfsc_sched* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_8(struct Qdisc *VAR_1, unsigned long VAR_2)
{
 struct hfsc_sched *VAR_3 = FUNC_4(VAR_1);
 struct hfsc_class *VAR_4 = (struct hfsc_class *)VAR_2;

 if (VAR_4->level > 0 || VAR_4->filter_cnt > 0 || VAR_4 == &VAR_3->root)
  return -VAR_0;

 FUNC_6(VAR_1);

 FUNC_2(&VAR_4->siblings);
 FUNC_0(VAR_4->cl_parent);

 FUNC_5(VAR_4->qdisc);
 FUNC_3(&VAR_3->clhash, &VAR_4->cl_common);

 FUNC_7(VAR_1);

 FUNC_1(VAR_1, VAR_4);
 return 0;
}
