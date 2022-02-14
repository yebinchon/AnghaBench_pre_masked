
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(u32 VAR_2, u8 VAR_3)
{
 u32 VAR_4, VAR_5 = 0, VAR_6 = VAR_0 - 1;

 while (VAR_5 < VAR_6) {
  VAR_4 = (VAR_5 + VAR_6) / 2;
  if (VAR_2 <= VAR_1[VAR_4][VAR_3])
   VAR_6 = VAR_4;
  else
   VAR_5 = VAR_4 + 1;
 }
 return VAR_6;
}
