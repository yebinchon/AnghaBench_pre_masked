
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cs; } ;
struct TYPE_5__ {TYPE_1__ mtProgress; int cs; int * threads; } ;
typedef TYPE_2__ CMtCoder ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;

void FUNC_2(CMtCoder* VAR_1)
{
  unsigned VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    FUNC_0(&VAR_1->threads[VAR_2]);
  FUNC_1(&VAR_1->cs);
  FUNC_1(&VAR_1->mtProgress.cs);
}
