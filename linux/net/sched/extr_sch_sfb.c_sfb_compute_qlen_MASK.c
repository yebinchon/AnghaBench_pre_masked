
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sfb_sched_data {size_t slot; TYPE_1__* bins; } ;
struct sfb_bucket {scalar_t__ qlen; scalar_t__ p_mark; } ;
struct TYPE_2__ {struct sfb_bucket** bins; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 *VAR_2, u32 *VAR_3, const struct sfb_sched_data *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 const struct sfb_bucket *VAR_9 = &VAR_4->bins[VAR_4->slot].bins[0][0];

 for (VAR_5 = 0; VAR_5 < VAR_0 * VAR_1; VAR_5++) {
  if (VAR_6 < VAR_9->qlen)
   VAR_6 = VAR_9->qlen;
  VAR_8 += VAR_9->p_mark;
  if (VAR_7 < VAR_9->p_mark)
   VAR_7 = VAR_9->p_mark;
  VAR_9++;
 }
 *VAR_2 = VAR_7;
 *VAR_3 = VAR_8 / (VAR_0 * VAR_1);
 return VAR_6;
}
