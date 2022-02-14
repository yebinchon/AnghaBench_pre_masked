
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int (* Code ) (TYPE_4__*,int ,int ,size_t*,int ,size_t,int) ;} ;
struct TYPE_10__ {size_t (* Write ) (TYPE_3__*,int ,size_t) ;} ;
struct TYPE_9__ {int stopReading; size_t outBufSize; int canWrite; int outBuf; TYPE_1__* mtCoder; scalar_t__ stopWriting; int index; int inBuf; int canRead; } ;
struct TYPE_8__ {size_t blockSize; TYPE_3__* outStream; int mtProgress; TYPE_4__* mtCallback; int inStream; } ;
typedef int SRes ;
typedef TYPE_2__ CMtThread ;
typedef int Bool ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,size_t*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_6 (TYPE_4__*,int ,int ,size_t*,int ,size_t,int) ;
 size_t FUNC_7 (TYPE_3__*,int ,size_t) ;

__attribute__((used)) static SRes FUNC_8(CMtThread *VAR_5, Bool *VAR_6)
{
  CMtThread *VAR_7;
  *VAR_6 = VAR_4;
  if (FUNC_1(&VAR_5->canRead) != 0)
    return VAR_1;

  VAR_7 = FUNC_3(VAR_5);

  if (VAR_5->stopReading)
  {
    VAR_7->stopReading = VAR_4;
    return FUNC_0(&VAR_7->canRead) == 0 ? VAR_3 : VAR_1;
  }

  {
    size_t VAR_8 = VAR_5->mtCoder->blockSize;
    size_t VAR_9 = VAR_5->outBufSize;

    FUNC_5(FUNC_2(VAR_5->mtCoder->inStream, VAR_5->inBuf, &VAR_8));
    VAR_7->stopReading = *VAR_6 = (VAR_8 != VAR_5->mtCoder->blockSize);
    if (FUNC_0(&VAR_7->canRead) != 0)
      return VAR_1;

    FUNC_5(VAR_5->mtCoder->mtCallback->Code(VAR_5->mtCoder->mtCallback, VAR_5->index,
        VAR_5->outBuf, &VAR_9, VAR_5->inBuf, VAR_8, *VAR_6));

    FUNC_4(&VAR_5->mtCoder->mtProgress, VAR_5->index);

    if (FUNC_1(&VAR_5->canWrite) != 0)
      return VAR_1;
    if (VAR_5->stopWriting)
      return VAR_0;
    if (VAR_5->mtCoder->outStream->Write(VAR_5->mtCoder->outStream, VAR_5->outBuf, VAR_9) != VAR_9)
      return VAR_2;
    return FUNC_0(&VAR_7->canWrite) == 0 ? VAR_3 : VAR_1;
  }
}
