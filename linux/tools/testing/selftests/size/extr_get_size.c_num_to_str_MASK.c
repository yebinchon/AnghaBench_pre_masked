
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline char *FUNC_0(unsigned long VAR_0, char *VAR_1, int VAR_2)
{
 unsigned int VAR_3;


 VAR_1 += VAR_2 - 1;
 *VAR_1 = 0;
 do {
  VAR_3 = VAR_0 % 10;
  *(--VAR_1) = VAR_3 + '0';
  VAR_0 /= 10;
 } while (VAR_0 > 0);

 return VAR_1;
}
