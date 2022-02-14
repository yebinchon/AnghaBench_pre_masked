
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rb_root {int dummy; } ;
struct fq_sched_data {int fq_trees_log; struct rb_root* fq_root; } ;
struct Qdisc {int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rb_root VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct fq_sched_data*,void*,int,struct rb_root*,int) ;
 struct rb_root* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;
 struct fq_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_4, u32 VAR_5)
{
 struct fq_sched_data *VAR_6 = FUNC_4(VAR_4);
 struct rb_root *VAR_7;
 void *VAR_8;
 u32 VAR_9;

 if (VAR_6->fq_root && VAR_5 == VAR_6->fq_trees_log)
  return 0;


 VAR_7 = FUNC_2(sizeof(struct rb_root) << VAR_5, VAR_1 | VAR_3,
         FUNC_3(VAR_4->dev_queue));
 if (!VAR_7)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < (1U << VAR_5); VAR_9++)
  VAR_7[VAR_9] = VAR_2;

 FUNC_5(VAR_4);

 VAR_8 = VAR_6->fq_root;
 if (VAR_8)
  FUNC_1(VAR_6, VAR_8, VAR_6->fq_trees_log, VAR_7, VAR_5);

 VAR_6->fq_root = VAR_7;
 VAR_6->fq_trees_log = VAR_5;

 FUNC_6(VAR_4);

 FUNC_0(VAR_8);

 return 0;
}
