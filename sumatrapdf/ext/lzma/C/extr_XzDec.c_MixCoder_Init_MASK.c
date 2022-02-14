
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numCoders; TYPE_1__* coders; scalar_t__* finished; scalar_t__* pos; scalar_t__* size; } ;
struct TYPE_4__ {int p; int (* Init ) (int ) ;} ;
typedef TYPE_1__ IStateCoder ;
typedef TYPE_2__ CMixCoder ;


 int FUNC_0 (int ) ;

void FUNC_1(CMixCoder *VAR_0)
{
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->numCoders - 1; VAR_1++)
  {
    VAR_0->size[VAR_1] = 0;
    VAR_0->pos[VAR_1] = 0;
    VAR_0->finished[VAR_1] = 0;
  }
  for (VAR_1 = 0; VAR_1 < VAR_0->numCoders; VAR_1++)
  {
    IStateCoder *VAR_2 = &VAR_0->coders[VAR_1];
    VAR_2->Init(VAR_2->p);
  }
}
