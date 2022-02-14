
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* Free ) (TYPE_3__*,scalar_t__) ;} ;
struct TYPE_7__ {int numCoders; scalar_t__ buf; TYPE_3__* alloc; TYPE_1__* coders; } ;
struct TYPE_6__ {scalar_t__ p; int (* Free ) (scalar_t__,TYPE_3__*) ;} ;
typedef TYPE_1__ IStateCoder ;
typedef TYPE_2__ CMixCoder ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;

void FUNC_2(CMixCoder *VAR_0)
{
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->numCoders; VAR_1++)
  {
    IStateCoder *VAR_2 = &VAR_0->coders[VAR_1];
    if (VAR_0->alloc && VAR_2->p)
      VAR_2->Free(VAR_2->p, VAR_0->alloc);
  }
  VAR_0->numCoders = 0;
  if (VAR_0->buf)
    VAR_0->alloc->Free(VAR_0->alloc, VAR_0->buf);
}
