
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_counter {unsigned long min; unsigned long low; TYPE_1__* parent; int low_usage; int min_usage; } ;
struct TYPE_2__ {int children_low_usage; int children_min_usage; } ;


 int FUNC_0 (long,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct page_counter *VAR_0,
          unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3;
 long VAR_4;

 if (!VAR_0->parent)
  return;

 if (VAR_0->min || FUNC_1(&VAR_0->min_usage)) {
  if (VAR_1 <= VAR_0->min)
   VAR_2 = VAR_1;
  else
   VAR_2 = 0;

  VAR_3 = FUNC_2(&VAR_0->min_usage, VAR_2);
  VAR_4 = VAR_2 - VAR_3;
  if (VAR_4)
   FUNC_0(VAR_4, &VAR_0->parent->children_min_usage);
 }

 if (VAR_0->low || FUNC_1(&VAR_0->low_usage)) {
  if (VAR_1 <= VAR_0->low)
   VAR_2 = VAR_1;
  else
   VAR_2 = 0;

  VAR_3 = FUNC_2(&VAR_0->low_usage, VAR_2);
  VAR_4 = VAR_2 - VAR_3;
  if (VAR_4)
   FUNC_0(VAR_4, &VAR_0->parent->children_low_usage);
 }
}
