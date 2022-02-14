
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s16 ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(bool VAR_0, __be16 VAR_1, __be16 VAR_2)
{
 s16 VAR_3 = FUNC_1(VAR_1);
 s16 VAR_4 = FUNC_1(VAR_2);

 if (!VAR_0) {
  return FUNC_0(VAR_3) >= 4096;
 } else {
  if (FUNC_0(VAR_4) >= 4096)
   return 1;

  return (FUNC_0((VAR_3 << 16) / (4096 - VAR_4)) >= 4096 << 4);
 }
}
