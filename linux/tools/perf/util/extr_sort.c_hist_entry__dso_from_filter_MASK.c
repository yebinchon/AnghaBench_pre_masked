
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hist_entry {TYPE_3__* branch_info; } ;
struct dso {int dummy; } ;
struct TYPE_5__ {TYPE_1__* map; } ;
struct TYPE_6__ {TYPE_2__ from; } ;
struct TYPE_4__ {struct dso const* dso; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hist_entry *VAR_1, int VAR_2,
           const void *VAR_3)
{
 const struct dso *VAR_4 = VAR_3;

 if (VAR_2 != VAR_0)
  return -1;

 return VAR_4 && (!VAR_1->branch_info || !VAR_1->branch_info->from.map ||
         VAR_1->branch_info->from.map->dso != VAR_4);
}
