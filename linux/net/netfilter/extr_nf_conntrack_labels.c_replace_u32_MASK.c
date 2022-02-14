
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static int FUNC_1(u32 *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 do {
  VAR_3 = *VAR_0;
  VAR_4 = (VAR_3 & VAR_1) ^ VAR_2;
  if (VAR_3 == VAR_4)
   return 0;
 } while (FUNC_0(VAR_0, VAR_3, VAR_4) != VAR_3);

 return 1;
}
