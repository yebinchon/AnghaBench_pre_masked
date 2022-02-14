
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt_vars {int dropping; int count; void* drop_next; void* blue_timer; scalar_t__ p_drop; } ;
struct cobalt_params {scalar_t__ target; scalar_t__ p_inc; } ;
typedef void* ktime_t ;


 int FUNC_0 (void*,void*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct cobalt_vars *VAR_0,
         struct cobalt_params *VAR_1,
         ktime_t VAR_2)
{
 bool VAR_3 = 0;

 if (FUNC_1(FUNC_0(VAR_2, VAR_0->blue_timer)) > VAR_1->target) {
  VAR_3 = !VAR_0->p_drop;
  VAR_0->p_drop += VAR_1->p_inc;
  if (VAR_0->p_drop < VAR_1->p_inc)
   VAR_0->p_drop = ~0;
  VAR_0->blue_timer = VAR_2;
 }
 VAR_0->dropping = 1;
 VAR_0->drop_next = VAR_2;
 if (!VAR_0->count)
  VAR_0->count = 1;

 return VAR_3;
}
