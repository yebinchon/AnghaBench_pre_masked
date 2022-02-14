
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int VAR_2 = ((int*)VAR_0)[0];
 int VAR_3 = ((int*)VAR_1)[0];
 VAR_2 -= VAR_3;
 if (VAR_2)
  return VAR_2;
 return ((int*)VAR_0)[1] - ((int*)VAR_1)[1];
}
