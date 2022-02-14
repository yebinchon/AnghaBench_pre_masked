
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef int CXzStream ;
typedef int CXzProps ;
typedef int CLzma2WithFilters ;


 int FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int const*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

SRes FUNC_6(ISeqOutStream *VAR_3, ISeqInStream *VAR_4,
    const CXzProps *VAR_5, ICompressProgress *VAR_6)
{
  SRes VAR_7;
  CXzStream VAR_8;
  CLzma2WithFilters VAR_9;
  FUNC_4(&VAR_8);
  FUNC_0(&VAR_9, &VAR_1, &VAR_2);
  VAR_7 = FUNC_1(&VAR_9);
  if (VAR_7 == VAR_0)
    VAR_7 = FUNC_3(&VAR_8, &VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_2(&VAR_9);
  FUNC_5(&VAR_8, &VAR_1);
  return VAR_7;
}
