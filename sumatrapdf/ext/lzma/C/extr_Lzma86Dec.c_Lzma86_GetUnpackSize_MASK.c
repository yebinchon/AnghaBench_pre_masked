
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef scalar_t__ SizeT ;
typedef int SRes ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

SRes FUNC_0(const Byte *VAR_4, SizeT VAR_5, UInt64 *VAR_6)
{
  unsigned VAR_7;
  if (VAR_5 < VAR_0)
    return VAR_2;
  *VAR_6 = 0;
  for (VAR_7 = 0; VAR_7 < sizeof(UInt64); VAR_7++)
    *VAR_6 += ((UInt64)VAR_4[VAR_1 + VAR_7]) << (8 * VAR_7);
  return VAR_3;
}
