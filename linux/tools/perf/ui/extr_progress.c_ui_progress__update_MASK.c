
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ui_progress {int curr; scalar_t__ next; int step; } ;
struct TYPE_2__ {int (* update ) (struct ui_progress*) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ui_progress*) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(struct ui_progress *VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_1->curr;

 VAR_1->curr += VAR_2;

 if (VAR_1->curr >= VAR_1->next) {
  u64 VAR_4 = FUNC_0(VAR_1->curr - VAR_3, VAR_1->step);

  VAR_1->next += VAR_4 * VAR_1->step;
  VAR_0->update(VAR_1);
 }
}
