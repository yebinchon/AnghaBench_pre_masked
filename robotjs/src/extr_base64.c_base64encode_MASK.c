
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int* FUNC_1 (size_t const) ;

uint8_t *FUNC_2(const uint8_t *VAR_1, const size_t VAR_2, size_t *VAR_3)
{
 size_t VAR_4, VAR_5;
 const size_t VAR_6 = (((VAR_2 + 3) & ~3)) * 4;
 uint8_t *VAR_7 = FUNC_1(VAR_6 + 1);
 if (VAR_7 == ((void*)0)) return ((void*)0);


 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 > 0);

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2 + 1; ++VAR_4) {

  switch (VAR_4 % 3) {
   case 0:
    VAR_7[VAR_5++] = VAR_0[VAR_1[VAR_4] >> 2];
    VAR_7[VAR_5++] = VAR_0[((VAR_1[VAR_4] & 0x03) << 4) |
                                    ((VAR_1[VAR_4 + 1] & 0xF0) >> 4)];
    break;
   case 1:
    VAR_7[VAR_5++] = VAR_0[((VAR_1[VAR_4] & 0x0F) << 2) |
                                    ((VAR_1[VAR_4 + 1] & 0xC0) >> 6)];
    break;
   case 2:
    VAR_7[VAR_5++] = VAR_0[(VAR_1[VAR_4] & 0x3F)];
    break;
  }
 }


 if ((VAR_5 % 4) != 0) {
  const size_t VAR_8 = ((VAR_5 + 3) & ~3);
  do {
   VAR_7[VAR_5++] = '=';
  } while (VAR_5 < VAR_8);
 }

 FUNC_0(VAR_5 <= VAR_6);

 if (VAR_3 != ((void*)0)) *VAR_3 = VAR_5;
 VAR_7[VAR_5] = '\0';
 return VAR_7;
}
