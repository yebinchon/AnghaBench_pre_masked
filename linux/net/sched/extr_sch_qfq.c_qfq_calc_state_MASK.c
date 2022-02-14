
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int * bitmaps; int V; } ;
struct qfq_group {int F; int index; int S; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned long FUNC_0 (int ,int ) ;
 struct qfq_group* FUNC_1 (struct qfq_sched*,unsigned long) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qfq_sched *VAR_2, const struct qfq_group *VAR_3)
{

 unsigned int VAR_4 = FUNC_2(VAR_3->S, VAR_2->V);
 unsigned long VAR_5 = FUNC_0(VAR_2->bitmaps[VAR_1], VAR_3->index);
 struct qfq_group *VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_2, VAR_5);
  if (FUNC_2(VAR_3->F, VAR_6->F))
   VAR_4 |= VAR_0;
 }

 return VAR_4;
}
