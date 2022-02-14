
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(char *VAR_0, size_t VAR_1)
{
 uint32_t VAR_2 = 0;
 size_t VAR_3 = 0;

 while (VAR_3 < VAR_1 && VAR_0[VAR_3] == ' ') {
  ++VAR_3;
 }

 while (VAR_3 < VAR_1 && VAR_0[VAR_3] >= '0' && VAR_0[VAR_3] <= '7') {
  VAR_2 = VAR_2 * 8 + (VAR_0[VAR_3] - '0');
  ++VAR_3;
 }

 return VAR_2;
}
