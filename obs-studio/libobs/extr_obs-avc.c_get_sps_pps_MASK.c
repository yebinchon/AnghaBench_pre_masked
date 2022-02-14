
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int const*,int const*) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_2, size_t VAR_3, const uint8_t **VAR_4,
   size_t *VAR_5, const uint8_t **VAR_6, size_t *VAR_7)
{
 const uint8_t *VAR_8, *VAR_9;
 const uint8_t *VAR_10 = VAR_2 + VAR_3;
 int VAR_11;

 VAR_8 = FUNC_0(VAR_2, VAR_10);
 while (1) {
  while (VAR_8 < VAR_10 && !*(VAR_8++))
   ;

  if (VAR_8 == VAR_10)
   break;

  VAR_9 = FUNC_0(VAR_8, VAR_10);

  VAR_11 = VAR_8[0] & 0x1F;
  if (VAR_11 == VAR_1) {
   *VAR_4 = VAR_8;
   *VAR_5 = VAR_9 - VAR_8;
  } else if (VAR_11 == VAR_0) {
   *VAR_6 = VAR_8;
   *VAR_7 = VAR_9 - VAR_8;
  }

  VAR_8 = VAR_9;
 }
}
