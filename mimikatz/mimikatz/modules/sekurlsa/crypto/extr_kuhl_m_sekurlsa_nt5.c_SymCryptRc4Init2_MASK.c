
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* S; int i; scalar_t__ j; } ;
typedef int SIZE_T ;
typedef TYPE_1__* PSYMCRYPT_RC4_STATE ;
typedef int* LPCBYTE ;
typedef int BYTE ;
typedef int BOOL ;



BOOL FUNC_0(PSYMCRYPT_RC4_STATE VAR_0, LPCBYTE VAR_1, SIZE_T VAR_2)
{
 BOOL VAR_3 = VAR_2 && (VAR_2 <= 256);
 SIZE_T VAR_4, VAR_5, VAR_6;
 BYTE VAR_7;

 if(VAR_3)
 {
  for(VAR_4 = 0; VAR_4 < 256; VAR_4++)
   VAR_0->S[VAR_4] = (BYTE) VAR_4;
  VAR_5 = 0;
  VAR_6 = 0;
  for(VAR_4 = 0; VAR_4 < 256; VAR_4++)
  {
   VAR_7 = VAR_0->S[VAR_4];
   VAR_5 = (VAR_5 + VAR_7 + VAR_1[VAR_6]) & 0xff;
   VAR_0->S[VAR_4] = VAR_0->S[VAR_5];
   VAR_0->S[VAR_5] = VAR_7;
   VAR_6++;
   if(VAR_6 == VAR_2)
    VAR_6 = 0;
  }
  VAR_0->i = 1;
  VAR_0->j = 0;
 }
 return VAR_3;
}
