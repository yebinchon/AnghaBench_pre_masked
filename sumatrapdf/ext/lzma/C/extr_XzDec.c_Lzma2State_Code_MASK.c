
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SizeT ;
typedef int SRes ;
typedef scalar_t__ ELzmaStatus ;
typedef int ECoderFinishMode ;
typedef int CLzma2Dec ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int *,int const*,int *,int ,scalar_t__*) ;

__attribute__((used)) static SRes FUNC_1(void *VAR_1, Byte *VAR_2, SizeT *VAR_3, const Byte *VAR_4, SizeT *VAR_5,
    int VAR_6, ECoderFinishMode VAR_7, int *VAR_8)
{
  ELzmaStatus VAR_9;

  SRes VAR_10 = FUNC_0((CLzma2Dec *)VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, &VAR_9);
  VAR_6 = VAR_6;
  *VAR_8 = (VAR_9 == VAR_0);
  return VAR_10;
}
