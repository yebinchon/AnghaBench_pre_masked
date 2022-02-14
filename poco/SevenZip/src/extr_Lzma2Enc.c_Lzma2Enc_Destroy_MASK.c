
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int alloc; scalar_t__ outBuf; int mtCoder; int allocBig; TYPE_1__* coders; } ;
struct TYPE_3__ {scalar_t__ enc; } ;
typedef TYPE_1__ CLzma2EncInt ;
typedef scalar_t__ CLzma2EncHandle ;
typedef TYPE_2__ CLzma2Enc ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int *) ;
 unsigned int VAR_0 ;

void FUNC_3(CLzma2EncHandle VAR_1)
{
  CLzma2Enc *VAR_2 = (CLzma2Enc *)VAR_1;
  unsigned VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  {
    CLzma2EncInt *VAR_4 = &VAR_2->coders[VAR_3];
    if (VAR_4->enc)
    {
      FUNC_1(VAR_4->enc, VAR_2->alloc, VAR_2->allocBig);
      VAR_4->enc = 0;
    }
  }


  FUNC_2(&VAR_2->mtCoder);


  FUNC_0(VAR_2->alloc, VAR_2->outBuf);
  FUNC_0(VAR_2->alloc, VAR_1);
}
