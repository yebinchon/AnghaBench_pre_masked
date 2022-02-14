
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_5__ {scalar_t__ (* Read ) (TYPE_2__*,int *,size_t*) ;} ;
struct TYPE_4__ {int streamEndWasReached; scalar_t__ result; scalar_t__ streamPos; scalar_t__ directInputRem; int pos; int blockSize; scalar_t__ keepSizeAfter; TYPE_2__* stream; int * bufferBase; int * buffer; scalar_t__ directInput; } ;
typedef TYPE_1__ CMatchFinder ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,size_t*) ;

__attribute__((used)) static void FUNC_1(CMatchFinder *VAR_1)
{
  if (VAR_1->streamEndWasReached || VAR_1->result != VAR_0)
    return;
  if (VAR_1->directInput)
  {
    UInt32 VAR_2 = 0xFFFFFFFF - VAR_1->streamPos;
    if (VAR_2 > VAR_1->directInputRem)
      VAR_2 = (UInt32)VAR_1->directInputRem;
    VAR_1->directInputRem -= VAR_2;
    VAR_1->streamPos += VAR_2;
    if (VAR_1->directInputRem == 0)
      VAR_1->streamEndWasReached = 1;
    return;
  }
  for (;;)
  {
    Byte *VAR_3 = VAR_1->buffer + (VAR_1->streamPos - VAR_1->pos);
    size_t VAR_4 = (VAR_1->bufferBase + VAR_1->blockSize - VAR_3);
    if (VAR_4 == 0)
      return;
    VAR_1->result = VAR_1->stream->Read(VAR_1->stream, VAR_3, &VAR_4);
    if (VAR_1->result != VAR_0)
      return;
    if (VAR_4 == 0)
    {
      VAR_1->streamEndWasReached = 1;
      return;
    }
    VAR_1->streamPos += (UInt32)VAR_4;
    if (VAR_1->streamPos - VAR_1->pos > VAR_1->keepSizeAfter)
      return;
  }
}
