
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SRes ;
typedef int ISzAlloc ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef scalar_t__ CLzmaEncHandle ;
typedef int CLzmaEnc ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_2 (int ) ;

SRes FUNC_3(CLzmaEncHandle VAR_0, ISeqOutStream *VAR_1, ISeqInStream *VAR_2, ICompressProgress *VAR_3,
    ISzAlloc *VAR_4, ISzAlloc *VAR_5)
{
  FUNC_2(FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5));
  return FUNC_0((CLzmaEnc *)VAR_0, VAR_3);
}
