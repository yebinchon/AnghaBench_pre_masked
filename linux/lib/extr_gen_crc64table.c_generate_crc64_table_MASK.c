
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
 uint64_t VAR_2, VAR_3, VAR_4, VAR_5;

 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  VAR_5 = 0;
  VAR_4 = VAR_2 << 56;

  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if ((VAR_5 ^ VAR_4) & 0x8000000000000000ULL)
    VAR_5 = (VAR_5 << 1) ^ VAR_0;
   else
    VAR_5 <<= 1;
   VAR_4 <<= 1;
  }

  VAR_1[VAR_2] = VAR_5;
 }
}
