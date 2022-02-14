
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int blockSize; int destBlockSize; int numThreads; TYPE_1__* mtCallback; int alloc; int * outStream; int * inStream; int * progress; } ;
struct TYPE_10__ {int numBlockThreads; int blockSize; } ;
struct TYPE_13__ {TYPE_6__ mtCoder; TYPE_2__ props; int alloc; TYPE_4__* coders; } ;
struct TYPE_12__ {int * enc; } ;
struct TYPE_9__ {int Code; } ;
struct TYPE_11__ {TYPE_1__ funcTable; TYPE_5__* lzma2Enc; } ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef TYPE_3__ CMtCallbackImp ;
typedef TYPE_4__ CLzma2EncInt ;
typedef scalar_t__ CLzma2EncHandle ;
typedef TYPE_5__ CLzma2Enc ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*,int *,int *,int *) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_1 ;

SRes FUNC_3(CLzma2EncHandle VAR_2,
    ISeqOutStream *VAR_3, ISeqInStream *VAR_4, ICompressProgress *VAR_5)
{
  CLzma2Enc *VAR_6 = (CLzma2Enc *)VAR_2;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_6->props.numBlockThreads; VAR_7++)
  {
    CLzma2EncInt *VAR_8 = &VAR_6->coders[VAR_7];
    if (VAR_8->enc == ((void*)0))
    {
      VAR_8->enc = FUNC_1(VAR_6->alloc);
      if (VAR_8->enc == ((void*)0))
        return VAR_1;
    }
  }


  if (VAR_6->props.numBlockThreads <= 1)

    return FUNC_0(&VAR_6->coders[0], VAR_6, VAR_3, VAR_4, VAR_5);



  {
    CMtCallbackImp VAR_9;

    VAR_9.funcTable.Code = VAR_0;
    VAR_9.lzma2Enc = VAR_6;

    VAR_6->mtCoder.progress = VAR_5;
    VAR_6->mtCoder.inStream = VAR_4;
    VAR_6->mtCoder.outStream = VAR_3;
    VAR_6->mtCoder.alloc = VAR_6->alloc;
    VAR_6->mtCoder.mtCallback = &VAR_9.funcTable;

    VAR_6->mtCoder.blockSize = VAR_6->props.blockSize;
    VAR_6->mtCoder.destBlockSize = VAR_6->props.blockSize + (VAR_6->props.blockSize >> 10) + 16;
    VAR_6->mtCoder.numThreads = VAR_6->props.numBlockThreads;

    return FUNC_2(&VAR_6->mtCoder);
  }

}
