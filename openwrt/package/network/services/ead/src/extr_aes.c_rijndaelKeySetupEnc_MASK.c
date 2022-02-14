
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(u32 VAR_0[ ], const u8 VAR_1[])
{
 int VAR_2;
 u32 VAR_3;

 VAR_0[0] = FUNC_0(VAR_1 );
 VAR_0[1] = FUNC_0(VAR_1 + 4);
 VAR_0[2] = FUNC_0(VAR_1 + 8);
 VAR_0[3] = FUNC_0(VAR_1 + 12);
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  VAR_3 = VAR_0[3];
  VAR_0[4] = VAR_0[0] ^
   FUNC_3(VAR_3) ^ FUNC_4(VAR_3) ^ FUNC_5(VAR_3) ^ FUNC_2(VAR_3) ^
   FUNC_1(VAR_2);
  VAR_0[5] = VAR_0[1] ^ VAR_0[4];
  VAR_0[6] = VAR_0[2] ^ VAR_0[5];
  VAR_0[7] = VAR_0[3] ^ VAR_0[6];
  VAR_0 += 4;
 }
}
