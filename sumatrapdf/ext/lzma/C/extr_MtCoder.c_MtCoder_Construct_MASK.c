
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cs; } ;
struct TYPE_9__ {TYPE_1__ mtProgress; int cs; TYPE_2__* threads; scalar_t__ alloc; } ;
struct TYPE_8__ {unsigned int index; } ;
typedef TYPE_2__ CMtThread ;
typedef TYPE_3__ CMtCoder ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;

void FUNC_2(CMtCoder* VAR_1)
{
  unsigned VAR_2;
  VAR_1->alloc = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  {
    CMtThread *VAR_3 = &VAR_1->threads[VAR_2];
    VAR_3->index = VAR_2;
    FUNC_0(VAR_3, VAR_1);
  }
  FUNC_1(&VAR_1->cs);
  FUNC_1(&VAR_1->mtProgress.cs);
}
