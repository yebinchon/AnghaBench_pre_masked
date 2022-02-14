
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static int
FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0, VAR_3 = 0;
 uint8_t VAR_4;


 if (VAR_1 < 3) return 0;
 if (VAR_0[0] == ' ') { VAR_2++;
 if (VAR_0[1] == ' ') { VAR_2++;
 if (VAR_0[2] == ' ') { VAR_2++; } } }


 if (VAR_2 + 2 >= VAR_1
 || (VAR_0[VAR_2] != '*' && VAR_0[VAR_2] != '-' && VAR_0[VAR_2] != '_'))
  return 0;
 VAR_4 = VAR_0[VAR_2];


 while (VAR_2 < VAR_1 && VAR_0[VAR_2] != '\n') {
  if (VAR_0[VAR_2] == VAR_4) VAR_3++;
  else if (VAR_0[VAR_2] != ' ')
   return 0;

  VAR_2++;
 }

 return VAR_3 >= 3;
}
