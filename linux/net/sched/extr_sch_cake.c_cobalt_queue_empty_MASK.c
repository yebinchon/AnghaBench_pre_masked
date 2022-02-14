
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt_vars {scalar_t__ p_drop; int dropping; int rec_inv_sqrt; int drop_next; scalar_t__ count; int blue_timer; } ;
struct cobalt_params {scalar_t__ target; scalar_t__ p_dec; int interval; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct cobalt_vars*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct cobalt_vars *VAR_0,
          struct cobalt_params *VAR_1,
          ktime_t VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_0->p_drop &&
     FUNC_3(FUNC_2(VAR_2, VAR_0->blue_timer)) > VAR_1->target) {
  if (VAR_0->p_drop < VAR_1->p_dec)
   VAR_0->p_drop = 0;
  else
   VAR_0->p_drop -= VAR_1->p_dec;
  VAR_0->blue_timer = VAR_2;
  VAR_3 = !VAR_0->p_drop;
 }
 VAR_0->dropping = 0;

 if (VAR_0->count && FUNC_3(FUNC_2(VAR_2, VAR_0->drop_next)) >= 0) {
  VAR_0->count--;
  FUNC_1(VAR_0);
  VAR_0->drop_next = FUNC_0(VAR_0->drop_next,
       VAR_1->interval,
       VAR_0->rec_inv_sqrt);
 }

 return VAR_3;
}
