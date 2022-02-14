
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned long*,int,int) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1)
{
 static unsigned long VAR_2;
 static uint64_t VAR_3;
 int VAR_4;

 if ((VAR_1 / 64 == VAR_2 / 64) || VAR_3 == 0) {
  VAR_3 |= 1UL << (VAR_1 % 64);
  VAR_2 = VAR_1;
  return 0;
 }

 VAR_4 = FUNC_1(VAR_0, &VAR_3, 8, 8 * (VAR_2 / 64));
 if (VAR_4 < 0) {
  FUNC_0("mark page idle");
  return VAR_4;
 }

 VAR_3 = 1UL << (VAR_1 % 64);
 VAR_2 = VAR_1;

 return 0;
}
