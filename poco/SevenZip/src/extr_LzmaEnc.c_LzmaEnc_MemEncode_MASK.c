
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* outStream; } ;
struct TYPE_10__ {int writeEndMark; TYPE_1__ rc; } ;
struct TYPE_8__ {int Write; } ;
struct TYPE_9__ {scalar_t__ overflow; scalar_t__ rem; TYPE_2__ funcTable; int * data; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef int ICompressProgress ;
typedef TYPE_3__ CSeqOutStreamBuf ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_4__ CLzmaEnc ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int const*,scalar_t__,int ,int *,int *) ;
 int FUNC_2 (TYPE_4__*,int const*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

SRes FUNC_3(CLzmaEncHandle VAR_4, Byte *VAR_5, SizeT *VAR_6, const Byte *VAR_7, SizeT VAR_8,
    int VAR_9, ICompressProgress *VAR_10, ISzAlloc *VAR_11, ISzAlloc *VAR_12)
{
  SRes VAR_13;
  CLzmaEnc *VAR_14 = (CLzmaEnc *)VAR_4;

  CSeqOutStreamBuf VAR_15;

  FUNC_2(VAR_14, VAR_7, VAR_8);

  VAR_15.funcTable.Write = VAR_1;
  VAR_15.data = VAR_5;
  VAR_15.rem = *VAR_6;
  VAR_15.overflow = VAR_0;

  VAR_14->writeEndMark = VAR_9;

  VAR_14->rc.outStream = &VAR_15.funcTable;
  VAR_13 = FUNC_1(VAR_4, VAR_7, VAR_8, 0, VAR_11, VAR_12);
  if (VAR_13 == VAR_3)
    VAR_13 = FUNC_0(VAR_14, VAR_10);

  *VAR_6 -= VAR_15.rem;
  if (VAR_15.overflow)
    return VAR_2;
  return VAR_13;
}
