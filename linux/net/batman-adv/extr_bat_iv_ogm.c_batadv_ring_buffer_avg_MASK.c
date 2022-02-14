
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(const u8 VAR_1[])
{
 const u8 *VAR_2;
 u16 VAR_3 = 0;
 u16 VAR_4 = 0;
 u16 VAR_5 = 0;

 VAR_2 = VAR_1;

 while (VAR_4 < VAR_0) {
  if (*VAR_2 != 0) {
   VAR_3++;
   VAR_5 += *VAR_2;
  }

  VAR_4++;
  VAR_2++;
 }

 if (VAR_3 == 0)
  return 0;

 return (u8)(VAR_5 / VAR_3);
}
