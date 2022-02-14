
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_13__ {int * outBuf; int allocBig; int alloc; int props; } ;
struct TYPE_12__ {int enc; int srcPos; } ;
struct TYPE_11__ {int (* Write ) (TYPE_1__*,int *,int) ;} ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef TYPE_2__ CLzma2EncInt ;
typedef TYPE_3__ CLzma2Enc ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,size_t*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,size_t) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_1__*,int *,int) ;

__attribute__((used)) static SRes FUNC_8(CLzma2EncInt *VAR_5, CLzma2Enc *VAR_6,
  ISeqOutStream *VAR_7, ISeqInStream *VAR_8, ICompressProgress *VAR_9)
{
  UInt64 VAR_10 = 0;
  SRes VAR_11 = VAR_4;

  if (VAR_6->outBuf == 0)
  {
    VAR_6->outBuf = (Byte *)FUNC_0(VAR_6->alloc, VAR_0);
    if (VAR_6->outBuf == 0)
      return VAR_2;
  }
  FUNC_6(FUNC_2(VAR_5, &VAR_6->props));
  FUNC_6(FUNC_4(VAR_5->enc, VAR_8, VAR_1,
      VAR_6->alloc, VAR_6->allocBig));
  for (;;)
  {
    size_t VAR_12 = VAR_0;
    VAR_11 = FUNC_1(VAR_5, VAR_6->outBuf, &VAR_12, VAR_7);
    if (VAR_11 != VAR_4)
      break;
    VAR_10 += VAR_12;
    VAR_11 = FUNC_5(VAR_9, VAR_5->srcPos, VAR_10);
    if (VAR_11 != VAR_4)
      break;
    if (VAR_12 == 0)
      break;
  }
  FUNC_3(VAR_5->enc);
  if (VAR_11 == VAR_4)
  {
    Byte VAR_13 = 0;
    if (VAR_7->Write(VAR_7, &VAR_13, 1) != 1)
      return VAR_3;
  }
  return VAR_11;
}
