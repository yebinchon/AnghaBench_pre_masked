
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 if (FUNC_0(VAR_2 == 0 || VAR_3 == 0))
  return 0;

 VAR_2 = FUNC_1(VAR_2);
 VAR_3 = FUNC_1(VAR_3);
 if (VAR_2 >= VAR_3)
  VAR_4 = (VAR_2 - VAR_3) * 20 + VAR_0;
 else
  VAR_4 = (VAR_3 - VAR_2) * 20 + VAR_0;
 VAR_5 = VAR_1 - VAR_4 * 2;
 VAR_5 /= 1000;

 return VAR_5;
}
