
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_info {TYPE_1__* counts; } ;
typedef int gcov_type ;
struct TYPE_2__ {int num; int values; } ;


 int FUNC_0 (int ,int ,int) ;
 unsigned int FUNC_1 (struct gcov_info*) ;

void FUNC_2(struct gcov_info *VAR_0)
{
 unsigned int VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0->counts[VAR_2].values, 0,
         VAR_0->counts[VAR_2].num * sizeof(gcov_type));
 }
}
