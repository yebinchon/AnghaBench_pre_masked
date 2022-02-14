
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int const FUNC_0 (int const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int ,int ) ;
 int const FUNC_3 (int) ;
 int const FUNC_4 (int) ;
 int const FUNC_5 (int) ;
 int const FUNC_6 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(const u32 VAR_2[ ], const u8 VAR_3[16], u8 VAR_4[16])
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 const int VAR_13 = 10;

 int VAR_14;






 VAR_5 = FUNC_0(VAR_3 ) ^ VAR_2[0];
 VAR_6 = FUNC_0(VAR_3 + 4) ^ VAR_2[1];
 VAR_7 = FUNC_0(VAR_3 + 8) ^ VAR_2[2];
 VAR_8 = FUNC_0(VAR_3 + 12) ^ VAR_2[3];
 VAR_14 = VAR_13 >> 1;
 for (;;) {
  VAR_9 = FUNC_0(VAR_5) ^ FUNC_0(VAR_8) ^ FUNC_0(VAR_7) ^ FUNC_0(VAR_6) ^ VAR_2[4 * 1]; VAR_10 = FUNC_0(VAR_6) ^ FUNC_0(VAR_5) ^ FUNC_0(VAR_8) ^ FUNC_0(VAR_7) ^ VAR_2[4 * 1 + 1]; VAR_11 = FUNC_0(VAR_7) ^ FUNC_0(VAR_6) ^ FUNC_0(VAR_5) ^ FUNC_0(VAR_8) ^ VAR_2[4 * 1 + 2]; VAR_12 = FUNC_0(VAR_8) ^ FUNC_0(VAR_7) ^ FUNC_0(VAR_6) ^ FUNC_0(VAR_5) ^ VAR_2[4 * 1 + 3];
  VAR_2 += 8;
  if (--VAR_14 == 0)
   break;
  VAR_5 = FUNC_0(VAR_9) ^ FUNC_0(VAR_12) ^ FUNC_0(VAR_11) ^ FUNC_0(VAR_10) ^ VAR_2[4 * 0]; VAR_6 = FUNC_0(VAR_10) ^ FUNC_0(VAR_9) ^ FUNC_0(VAR_12) ^ FUNC_0(VAR_11) ^ VAR_2[4 * 0 + 1]; VAR_7 = FUNC_0(VAR_11) ^ FUNC_0(VAR_10) ^ FUNC_0(VAR_9) ^ FUNC_0(VAR_12) ^ VAR_2[4 * 0 + 2]; VAR_8 = FUNC_0(VAR_12) ^ FUNC_0(VAR_11) ^ FUNC_0(VAR_10) ^ FUNC_0(VAR_9) ^ VAR_2[4 * 0 + 3];
 }
 VAR_5 = FUNC_3(VAR_9) ^ FUNC_4(VAR_12) ^ FUNC_5(VAR_11) ^ FUNC_6(VAR_10) ^ VAR_2[0];
 FUNC_1(VAR_4 , VAR_5);
 VAR_6 = FUNC_3(VAR_10) ^ FUNC_4(VAR_9) ^ FUNC_5(VAR_12) ^ FUNC_6(VAR_11) ^ VAR_2[1];
 FUNC_1(VAR_4 + 4, VAR_6);
 VAR_7 = FUNC_3(VAR_11) ^ FUNC_4(VAR_10) ^ FUNC_5(VAR_9) ^ FUNC_6(VAR_12) ^ VAR_2[2];
 FUNC_1(VAR_4 + 8, VAR_7);
 VAR_8 = FUNC_3(VAR_12) ^ FUNC_4(VAR_11) ^ FUNC_5(VAR_10) ^ FUNC_6(VAR_9) ^ VAR_2[3];
 FUNC_1(VAR_4 + 12, VAR_8);
}
