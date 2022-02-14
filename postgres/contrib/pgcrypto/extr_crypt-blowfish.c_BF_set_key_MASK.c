
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* P; } ;
typedef int BF_word_signed ;
typedef int BF_word ;
typedef int* BF_key ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(const char *VAR_2, BF_key VAR_3, BF_key VAR_4,
     int VAR_5)
{
 const char *VAR_6 = VAR_2;
 int VAR_7,
    VAR_8;
 BF_word VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_0 + 2; VAR_7++)
 {
  VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  {
   VAR_9 <<= 8;
   if (VAR_5)
    VAR_9 |= (BF_word_signed) (signed char) *VAR_6;
   else
    VAR_9 |= (unsigned char) *VAR_6;

   if (!*VAR_6)
    VAR_6 = VAR_2;
   else
    VAR_6++;
  }

  VAR_3[VAR_7] = VAR_9;
  VAR_4[VAR_7] = VAR_1.P[VAR_7] ^ VAR_9;
 }
}
