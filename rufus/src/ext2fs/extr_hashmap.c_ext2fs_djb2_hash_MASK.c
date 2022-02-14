
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t FUNC_0(const void *VAR_0, size_t VAR_1)
{
 int VAR_2;
 const char *VAR_3 = VAR_0;
 uint32_t VAR_4 = 5381;

 while (VAR_1-- > 0) {
  VAR_2 = *VAR_3++;
  VAR_4 = ((VAR_4 << 5) + VAR_4) + VAR_2;
 }
 return VAR_4;
}
