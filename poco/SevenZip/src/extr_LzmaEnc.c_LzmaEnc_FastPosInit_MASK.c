
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt32 ;
typedef int Byte ;


 int VAR_0 ;

void FUNC_0(Byte *VAR_1)
{
  int VAR_2 = 2, VAR_3;
  VAR_1[0] = 0;
  VAR_1[1] = 1;

  for (VAR_3 = 2; VAR_3 < VAR_0 * 2; VAR_3++)
  {
    UInt32 VAR_4 = (1 << ((VAR_3 >> 1) - 1));
    UInt32 VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_2++)
      VAR_1[VAR_2] = (Byte)VAR_3;
  }
}
