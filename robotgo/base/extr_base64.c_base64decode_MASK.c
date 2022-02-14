
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int int8_t ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 size_t* FUNC_1 (size_t const) ;

uint8_t *FUNC_2(const uint8_t *VAR_1, const size_t VAR_2, size_t *VAR_3){
 int8_t VAR_4, VAR_5;
 size_t VAR_6, VAR_7;
 uint8_t *VAR_8;
 const size_t VAR_9 = ((VAR_2 + 3) / 4) * 3;


 FUNC_0(VAR_1 != ((void*)0));

 VAR_4 = VAR_5 = VAR_7 = 0;
 VAR_8 = FUNC_1(VAR_9 + 1);
 if (VAR_8 == ((void*)0)) return ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  if ((VAR_4 = VAR_0[VAR_1[VAR_6]]) != -1) {

   switch (VAR_6 % 4) {
    case 1:
     VAR_8[VAR_7++] = ((VAR_5 << 2) | ((VAR_4 & 0x30) >> 4));
     break;
    case 2:
     VAR_8[VAR_7++] = (((VAR_5 & 0xF) << 4) | ((VAR_4 & 0x3C) >> 2));
     break;
    case 3:
     VAR_8[VAR_7++] = (((VAR_5 & 0x03) << 6) | VAR_4);
     break;
   }
   VAR_5 = VAR_4;
  }
 }

 if (VAR_3 != ((void*)0)) *VAR_3 = VAR_7;
 VAR_8[VAR_7] = '\0';
 return VAR_8;
}
