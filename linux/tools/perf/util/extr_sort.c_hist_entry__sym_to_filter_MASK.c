
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hist_entry {TYPE_3__* branch_info; } ;
struct TYPE_5__ {TYPE_1__* sym; } ;
struct TYPE_6__ {TYPE_2__ to; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_1, int VAR_2,
           const void *VAR_3)
{
 const char *VAR_4 = VAR_3;

 if (VAR_2 != VAR_0)
  return -1;

 return VAR_4 && !(VAR_1->branch_info && VAR_1->branch_info->to.sym &&
          FUNC_0(VAR_1->branch_info->to.sym->name, VAR_4));
}
