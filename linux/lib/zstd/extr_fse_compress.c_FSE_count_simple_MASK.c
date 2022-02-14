
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int U32 ;
typedef int BYTE ;


 int FUNC_0 (unsigned int*,int ,unsigned int) ;

size_t FUNC_1(unsigned *VAR_0, unsigned *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const BYTE *VAR_4 = (const BYTE *)VAR_2;
 const BYTE *const VAR_5 = VAR_4 + VAR_3;
 unsigned VAR_6 = *VAR_1;
 unsigned VAR_7 = 0;

 FUNC_0(VAR_0, 0, (VAR_6 + 1) * sizeof(*VAR_0));
 if (VAR_3 == 0) {
  *VAR_1 = 0;
  return 0;
 }

 while (VAR_4 < VAR_5)
  VAR_0[*VAR_4++]++;

 while (!VAR_0[VAR_6])
  VAR_6--;
 *VAR_1 = VAR_6;

 {
  U32 VAR_8;
  for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++)
   if (VAR_0[VAR_8] > VAR_7)
    VAR_7 = VAR_0[VAR_8];
 }

 return (size_t)VAR_7;
}
