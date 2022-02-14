
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, size_t VAR_1)
{
 int VAR_2 = 0;
 for (size_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0 & 1 << VAR_3)
   VAR_2++;
 }
 return VAR_2;
}
