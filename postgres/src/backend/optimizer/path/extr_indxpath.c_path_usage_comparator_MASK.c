
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
typedef scalar_t__ Selectivity ;
typedef TYPE_1__ PathClauseUsage ;
typedef scalar_t__ Cost ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 PathClauseUsage *VAR_2 = *(PathClauseUsage *const *) VAR_0;
 PathClauseUsage *VAR_3 = *(PathClauseUsage *const *) VAR_1;
 Cost VAR_4;
 Cost VAR_5;
 Selectivity VAR_6;
 Selectivity VAR_7;

 FUNC_0(VAR_2->path, &VAR_4, &VAR_6);
 FUNC_0(VAR_3->path, &VAR_5, &VAR_7);




 if (VAR_4 < VAR_5)
  return -1;
 if (VAR_4 > VAR_5)
  return 1;

 if (VAR_6 < VAR_7)
  return -1;
 if (VAR_6 > VAR_7)
  return 1;

 return 0;
}
