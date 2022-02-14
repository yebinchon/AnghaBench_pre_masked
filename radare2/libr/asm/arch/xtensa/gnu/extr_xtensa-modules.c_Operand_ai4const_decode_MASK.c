
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 unsigned int* VAR_0 ;

__attribute__((used)) static int
FUNC_0 (uint32 *VAR_1)
{
  unsigned VAR_2, VAR_3;
  VAR_3 = *VAR_1 & 0xf;
  VAR_2 = VAR_0[VAR_3 & 0xf];
  *VAR_1 = VAR_2;
  return 0;
}
