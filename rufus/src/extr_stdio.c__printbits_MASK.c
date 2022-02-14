
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint8_t ;



char *FUNC_0(size_t const VAR_0, void const * const VAR_1, int VAR_2)
{

 static char VAR_3[sizeof(uintmax_t) * 8 + 3];
 size_t VAR_4;
 uint8_t* VAR_5 = (uint8_t*)VAR_1;
 uintmax_t VAR_6, VAR_7 = 0, VAR_8 = 0;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_8 |= ((uintmax_t)VAR_5[VAR_4]) << (8 * VAR_4);

 VAR_3[0] = '0';
 VAR_3[1] = 'b';
 if (VAR_2)
  VAR_7 = 1ULL << (VAR_0 * 8 - 1);
 for (VAR_4 = 2, VAR_6 = 1ULL << (sizeof(uintmax_t) * 8 - 1); VAR_6 != 0; VAR_6 >>= 1) {
  if ((VAR_4 > 2) || (VAR_7 & VAR_6))
   VAR_3[VAR_4++] = (VAR_8 & VAR_6) ? '1' : '0';
  else if (VAR_8 & VAR_6)
   VAR_3[VAR_4++] = '1';
 }
 VAR_3[VAR_4] = '\0';
 return VAR_3;
}
