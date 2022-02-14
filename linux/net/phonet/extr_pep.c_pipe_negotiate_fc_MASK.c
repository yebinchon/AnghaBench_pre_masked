
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u8 FUNC_0(const u8 *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 u8 VAR_5 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  u8 VAR_6 = VAR_2[VAR_4];

  if (VAR_6 > VAR_5 && VAR_6 < VAR_0)
   VAR_5 = VAR_6;
 }
 return VAR_5;
}
