
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT32 ;
struct TYPE_3__ {int * roundKey; } ;
typedef TYPE_1__* PCSYMCRYPT_NT5_DES_EXPANDED_KEY ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPCBYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

VOID FUNC_3(PCSYMCRYPT_NT5_DES_EXPANDED_KEY VAR_0, LPCBYTE VAR_1, PBYTE VAR_2, BOOL VAR_3)
{
 UINT32 VAR_4 = *(UINT32 *) (VAR_1 + 4), VAR_5 = *(UINT32 *) (VAR_1 + 0), VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_5, 4);
 VAR_6 = (VAR_4 ^ VAR_5) & 0xf0f0f0f0;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_4 = FUNC_1(VAR_4, 20);
 VAR_6 = (VAR_4 ^ VAR_5) & 0xfff0000f;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_4 = FUNC_1(VAR_4, 14);
 VAR_6 = (VAR_4 ^ VAR_5) & 0x33333333;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_5 = FUNC_1(VAR_5, 22);
 VAR_6 = (VAR_4 ^ VAR_5) & 0x03fc03fc;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_5 = FUNC_1(VAR_5, 9);
 VAR_6 = (VAR_4 ^ VAR_5) & 0xaaaaaaaa;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_4 = FUNC_1(VAR_4, 1);

 if(VAR_3)
 {
  for(VAR_8 = 0; VAR_8 < 16; VAR_8 += 2)
  {
   FUNC_0(VAR_4, VAR_5, VAR_0->roundKey[VAR_8 ]);
   FUNC_0(VAR_5, VAR_4, VAR_0->roundKey[VAR_8+1]);
  }
 }
 else
 {
  for(VAR_8 = 14; VAR_8 >= 0 ; VAR_8 -= 2)
  {
   FUNC_0(VAR_4, VAR_5, VAR_0->roundKey[VAR_8+1]);
   FUNC_0(VAR_5, VAR_4, VAR_0->roundKey[VAR_8]);
  }
 }

 VAR_5 = FUNC_2(VAR_5, 1);
 VAR_6 = (VAR_4 ^ VAR_5) & 0xaaaaaaaa;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_4 = FUNC_2(VAR_4, 9);
 VAR_6 = (VAR_4 ^ VAR_5) & 0x03fc03fc;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_4 = FUNC_2(VAR_4, 22);
 VAR_6 = (VAR_4 ^ VAR_5) & 0x33333333;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_5 = FUNC_2(VAR_5, 14);
 VAR_6 = (VAR_4 ^ VAR_5) & 0xfff0000f;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_5 = FUNC_2(VAR_5, 20);
 VAR_6 = (VAR_4 ^ VAR_5) & 0xf0f0f0f0;
 VAR_4 ^= VAR_6;
 VAR_5 ^= VAR_6;
 VAR_4 = FUNC_2(VAR_4, 4);
 *(UINT32 *) (VAR_2 + 0) = VAR_4;
 *(UINT32 *) (VAR_2 + 4) = VAR_5;
}
