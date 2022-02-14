
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UInt32 ;
typedef size_t CLzRef ;


 size_t VAR_0 ;

void FUNC_0(UInt32 VAR_1, CLzRef *VAR_2, UInt32 VAR_3)
{
  UInt32 VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  {
    UInt32 VAR_5 = VAR_2[VAR_4];
    if (VAR_5 <= VAR_1)
      VAR_5 = VAR_0;
    else
      VAR_5 -= VAR_1;
    VAR_2[VAR_4] = VAR_5;
  }
}
