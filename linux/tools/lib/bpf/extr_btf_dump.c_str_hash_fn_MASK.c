
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(const void *VAR_0, void *VAR_1)
{
 const char *VAR_2 = VAR_0;
 size_t VAR_3 = 0;

 while (*VAR_2) {
  VAR_3 = VAR_3 * 31 + *VAR_2;
  VAR_2++;
 }
 return VAR_3;
}
