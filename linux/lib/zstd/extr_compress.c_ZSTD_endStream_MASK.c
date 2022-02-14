
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pos; int size; scalar_t__ dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_7__ {scalar_t__ pledgedSrcSize; scalar_t__ inputProcessed; scalar_t__ stage; size_t outBuffContentSize; size_t outBuffFlushedSize; int checksum; size_t outBuff; int outBuffSize; int cctx; } ;
typedef TYPE_2__ ZSTD_CStream ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int ,size_t,int ,int *,int ) ;
 size_t FUNC_2 (TYPE_2__*,int * const,size_t*,size_t*,size_t*,int ) ;
 size_t FUNC_3 (int *,int,size_t,size_t const) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

size_t FUNC_4(ZSTD_CStream *VAR_5, ZSTD_outBuffer *VAR_6)
{
 BYTE *const VAR_7 = (BYTE *)(VAR_6->dst) + VAR_6->pos;
 BYTE *const VAR_8 = (BYTE *)(VAR_6->dst) + VAR_6->size;
 BYTE *VAR_9 = VAR_7;

 if ((VAR_5->pledgedSrcSize) && (VAR_5->inputProcessed != VAR_5->pledgedSrcSize))
  return FUNC_0(VAR_1);

 if (VAR_5->stage != VAR_2) {

  size_t VAR_10 = 0;
  size_t VAR_11 = VAR_6->size - VAR_6->pos;
  size_t const VAR_12 =
      FUNC_2(VAR_5, VAR_7, &VAR_11, &VAR_10, &VAR_10, VAR_4);
  size_t const VAR_13 = VAR_5->outBuffContentSize - VAR_5->outBuffFlushedSize;
  VAR_9 += VAR_11;
  if (VAR_13) {
   VAR_6->pos += VAR_11;
   return VAR_13 + VAR_0 + (VAR_5->checksum * 4);
  }

  VAR_5->stage = VAR_2;
  VAR_5->outBuffContentSize = !VAR_12 ? 0 : FUNC_1(VAR_5->cctx, VAR_5->outBuff, VAR_5->outBuffSize, ((void*)0),
            0);
 }


 {
  size_t const VAR_14 = VAR_5->outBuffContentSize - VAR_5->outBuffFlushedSize;
  size_t const VAR_15 = FUNC_3(VAR_9, VAR_8 - VAR_9, VAR_5->outBuff + VAR_5->outBuffFlushedSize, VAR_14);
  VAR_9 += VAR_15;
  VAR_5->outBuffFlushedSize += VAR_15;
  VAR_6->pos += VAR_9 - VAR_7;
  if (VAR_14 == VAR_15)
   VAR_5->stage = VAR_3;
  return VAR_14 - VAR_15;
 }
}
