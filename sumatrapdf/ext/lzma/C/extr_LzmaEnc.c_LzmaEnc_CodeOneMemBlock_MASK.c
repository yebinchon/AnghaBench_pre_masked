
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_11__ {TYPE_1__* outStream; } ;
struct TYPE_10__ {scalar_t__ nowPos64; TYPE_4__ rc; int result; void* finished; void* writeEndMark; } ;
struct TYPE_8__ {int Write; } ;
struct TYPE_9__ {size_t rem; void* overflow; TYPE_1__ funcTable; int * data; } ;
typedef int SRes ;
typedef TYPE_2__ CSeqOutStreamBuf ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_3__ CLzmaEnc ;
typedef int Byte ;
typedef scalar_t__ Bool ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

SRes FUNC_4(CLzmaEncHandle VAR_5, Bool VAR_6,
    Byte *VAR_7, size_t *VAR_8, UInt32 VAR_9, UInt32 *VAR_10)
{
  CLzmaEnc *VAR_11 = (CLzmaEnc *)VAR_5;
  UInt64 VAR_12;
  SRes VAR_13;
  CSeqOutStreamBuf VAR_14;

  VAR_14.funcTable.Write = VAR_1;
  VAR_14.data = VAR_7;
  VAR_14.rem = *VAR_8;
  VAR_14.overflow = VAR_0;

  VAR_11->writeEndMark = VAR_0;
  VAR_11->finished = VAR_0;
  VAR_11->result = VAR_3;

  if (VAR_6)
    FUNC_1(VAR_11);
  FUNC_2(VAR_11);
  VAR_12 = VAR_11->nowPos64;
  FUNC_3(&VAR_11->rc);
  VAR_11->rc.outStream = &VAR_14.funcTable;

  VAR_13 = FUNC_0(VAR_11, VAR_4, VAR_9, *VAR_10);

  *VAR_10 = (UInt32)(VAR_11->nowPos64 - VAR_12);
  *VAR_8 -= VAR_14.rem;
  if (VAR_14.overflow)
    return VAR_2;

  return VAR_13;
}
