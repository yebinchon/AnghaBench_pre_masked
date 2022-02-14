
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int every; } ;
struct TYPE_5__ {int probability; } ;
struct TYPE_8__ {TYPE_3__ nth; TYPE_1__ random; } ;
struct xt_statistic_info {int flags; int mode; TYPE_4__ u; TYPE_2__* master; } ;
struct xt_action_param {struct xt_statistic_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int count; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_1, struct xt_action_param *VAR_2)
{
 const struct xt_statistic_info *VAR_3 = VAR_2->matchinfo;
 bool VAR_4 = VAR_3->flags & VAR_0;
 int VAR_5, VAR_6;

 switch (VAR_3->mode) {
 case 128:
  if ((FUNC_2() & 0x7FFFFFFF) < VAR_3->u.random.probability)
   VAR_4 = !VAR_4;
  break;
 case 129:
  do {
   VAR_6 = FUNC_1(&VAR_3->master->count);
   VAR_5 = (VAR_6 == VAR_3->u.nth.every) ? 0 : VAR_6 + 1;
  } while (FUNC_0(&VAR_3->master->count, VAR_6, VAR_5) != VAR_6);
  if (VAR_5 == 0)
   VAR_4 = !VAR_4;
  break;
 }

 return VAR_4;
}
