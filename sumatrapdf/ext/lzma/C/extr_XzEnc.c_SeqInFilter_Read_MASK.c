
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* Read ) (TYPE_3__*,scalar_t__,scalar_t__*) ;} ;
struct TYPE_4__ {scalar_t__ (* Code ) (int ,void*,size_t*,scalar_t__,scalar_t__*,int,int ,int*) ;int p; } ;
struct TYPE_5__ {int srcWasFinished; scalar_t__ curPos; scalar_t__ endPos; scalar_t__ buf; TYPE_1__ StateCoder; TYPE_3__* realStream; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef TYPE_2__ CSeqInFilter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,void*,size_t*,scalar_t__,scalar_t__*,int,int ,int*) ;

__attribute__((used)) static SRes FUNC_3(void *VAR_3, void *VAR_4, size_t *VAR_5)
{
  CSeqInFilter *VAR_6 = (CSeqInFilter *)VAR_3;
  size_t VAR_7 = *VAR_5;
  if (VAR_7 == 0)
    return VAR_2;
  *VAR_5 = 0;
  for (;;)
  {
    if (!VAR_6->srcWasFinished && VAR_6->curPos == VAR_6->endPos)
    {
      VAR_6->curPos = 0;
      VAR_6->endPos = VAR_1;
      FUNC_0(VAR_6->realStream->Read(VAR_6->realStream, VAR_6->buf, &VAR_6->endPos));
      if (VAR_6->endPos == 0)
        VAR_6->srcWasFinished = 1;
    }
    {
      SizeT VAR_8 = VAR_6->endPos - VAR_6->curPos;
      int VAR_9;
      SRes VAR_10;
      *VAR_5 = VAR_7;
      VAR_10 = VAR_6->StateCoder.Code(VAR_6->StateCoder.p, VAR_4, VAR_5, VAR_6->buf + VAR_6->curPos, &VAR_8,
        VAR_6->srcWasFinished, VAR_0, &VAR_9);
      VAR_6->curPos += VAR_8;
      if (*VAR_5 != 0 || VAR_8 == 0 || VAR_10 != 0)
        return VAR_10;
    }
  }
}
