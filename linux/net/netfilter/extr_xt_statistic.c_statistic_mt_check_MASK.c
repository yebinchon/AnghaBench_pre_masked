
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct TYPE_5__ {TYPE_1__ nth; } ;
struct xt_statistic_info {scalar_t__ mode; int flags; TYPE_2__ u; TYPE_3__* master; } ;
struct xt_mtchk_param {struct xt_statistic_info* matchinfo; } ;
struct TYPE_6__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_5)
{
 struct xt_statistic_info *VAR_6 = VAR_5->matchinfo;

 if (VAR_6->mode > VAR_4 ||
     VAR_6->flags & ~VAR_3)
  return -VAR_0;

 VAR_6->master = FUNC_1(sizeof(*VAR_6->master), VAR_2);
 if (VAR_6->master == ((void*)0))
  return -VAR_1;
 FUNC_0(&VAR_6->master->count, VAR_6->u.nth.count);

 return 0;
}
