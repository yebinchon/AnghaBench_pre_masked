
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct dim_stats {int dummy; } ;
struct dim_sample {scalar_t__ comp_ctr; scalar_t__ event_ctr; } ;
struct dim {int state; struct dim_sample start_sample; int work; struct dim_sample measuring_sample; } ;




 scalar_t__ VAR_0 ;

 int FUNC_0 (struct dim_sample*,struct dim_sample*,struct dim_stats*) ;
 int FUNC_1 (scalar_t__,int ,int ,scalar_t__,struct dim_sample*) ;
 int FUNC_2 (struct dim_stats*,struct dim*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dim *VAR_1, u64 VAR_2)
{
 struct dim_sample *VAR_3 = &VAR_1->measuring_sample;
 struct dim_stats VAR_4;
 u32 VAR_5;

 FUNC_1(VAR_3->event_ctr + 1, 0, 0,
         VAR_3->comp_ctr + VAR_2,
         &VAR_1->measuring_sample);

 switch (VAR_1->state) {
 case 129:
  VAR_5 = VAR_3->event_ctr - VAR_1->start_sample.event_ctr;
  if (VAR_5 < VAR_0)
   break;
  FUNC_0(&VAR_1->start_sample, VAR_3, &VAR_4);
  if (FUNC_2(&VAR_4, VAR_1)) {
   VAR_1->state = 130;
   FUNC_3(&VAR_1->work);
   break;
  }

 case 128:
  VAR_1->state = 129;
  FUNC_1(VAR_3->event_ctr, 0, 0,
          VAR_3->comp_ctr,
          &VAR_1->start_sample);
  break;
 case 130:
  break;
 }
}
