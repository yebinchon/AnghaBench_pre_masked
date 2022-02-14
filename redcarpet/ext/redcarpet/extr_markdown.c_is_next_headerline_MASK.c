
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char*,size_t) ;

__attribute__((used)) static int
FUNC_1(uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0;

 while (VAR_2 < VAR_1 && VAR_0[VAR_2] != '\n')
  VAR_2++;

 if (++VAR_2 >= VAR_1)
  return 0;

 return FUNC_0(VAR_0 + VAR_2, VAR_1 - VAR_2);
}
