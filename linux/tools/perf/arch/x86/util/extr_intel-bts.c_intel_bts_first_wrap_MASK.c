
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;



__attribute__((used)) static bool FUNC_0(u64 *VAR_0, size_t VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = VAR_1 >> 3;
 VAR_3 = VAR_4 - 512;
 if (VAR_3 < 0)
  VAR_3 = 0;

 for (VAR_2 = VAR_3; VAR_2 < VAR_4; VAR_2++) {
  if (VAR_0[VAR_2])
   return 1;
 }

 return 0;
}
