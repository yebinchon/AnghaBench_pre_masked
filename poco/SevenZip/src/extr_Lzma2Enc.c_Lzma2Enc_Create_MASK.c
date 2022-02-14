
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int mtCoder; TYPE_1__* coders; TYPE_2__* allocBig; TYPE_2__* alloc; scalar_t__ outBuf; int props; } ;
struct TYPE_10__ {scalar_t__ (* Alloc ) (TYPE_2__*,int) ;} ;
struct TYPE_9__ {scalar_t__ enc; } ;
typedef TYPE_2__ ISzAlloc ;
typedef TYPE_3__* CLzma2EncHandle ;
typedef TYPE_3__ CLzma2Enc ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;

CLzma2EncHandle FUNC_4(ISzAlloc *VAR_1, ISzAlloc *VAR_2)
{
  CLzma2Enc *VAR_3 = (CLzma2Enc *)VAR_1->Alloc(VAR_1, sizeof(CLzma2Enc));
  if (VAR_3 == 0)
    return ((void*)0);
  FUNC_0(&VAR_3->props);
  FUNC_1(&VAR_3->props);
  VAR_3->outBuf = 0;
  VAR_3->alloc = VAR_1;
  VAR_3->allocBig = VAR_2;
  {
    unsigned VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
      VAR_3->coders[VAR_4].enc = 0;
  }

  FUNC_2(&VAR_3->mtCoder);


  return VAR_3;
}
