
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct serializer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int const*,int const*) ;
 int FUNC_1 (struct serializer*,int ) ;
 int FUNC_2 (struct serializer*,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct serializer *VAR_2, const uint8_t *VAR_3,
          size_t VAR_4, bool *VAR_5, int *VAR_6)
{
 const uint8_t *VAR_7, *VAR_8;
 const uint8_t *VAR_9 = VAR_3 + VAR_4;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_3, VAR_9);
 while (1) {
  while (VAR_7 < VAR_9 && !*(VAR_7++))
   ;

  if (VAR_7 == VAR_9)
   break;

  VAR_10 = VAR_7[0] & 0x1F;

  if (VAR_10 == VAR_1 || VAR_10 == VAR_0) {
   if (VAR_5)
    *VAR_5 = (VAR_10 == VAR_1);
   if (VAR_6)
    *VAR_6 = VAR_7[0] >> 5;
  }

  VAR_8 = FUNC_0(VAR_7, VAR_9);
  FUNC_1(VAR_2, (uint32_t)(VAR_8 - VAR_7));
  FUNC_2(VAR_2, VAR_7, VAR_8 - VAR_7);
  VAR_7 = VAR_8;
 }
}
