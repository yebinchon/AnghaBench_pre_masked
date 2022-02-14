
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 size_t* VAR_0 ;
 int FUNC_6 (scalar_t__*,unsigned char const*,int) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 size_t* VAR_1 ;
 int FUNC_9 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_10(uint32_t VAR_2[4], const unsigned char VAR_3[64])
{
 uint32_t VAR_4 = VAR_2[0], VAR_5 = VAR_2[1], VAR_6 = VAR_2[2], VAR_7 = VAR_2[3];
 uint32_t VAR_8 = VAR_2[0], VAR_9 = VAR_2[1], VAR_10 = VAR_2[2], VAR_11 = VAR_2[3];
 uint32_t VAR_12, VAR_13[16];
 int VAR_14;

 FUNC_6(VAR_13, VAR_3, 64);

 for(VAR_14 = 0; VAR_14 < 16; VAR_14++) {
  VAR_12 = FUNC_7( VAR_14, VAR_4 + FUNC_0(VAR_5, VAR_6, VAR_7) + VAR_13[VAR_0[VAR_14]] + FUNC_4(VAR_14));
  VAR_4 = VAR_7; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = VAR_12;
  VAR_12 = FUNC_8(VAR_14, VAR_8 + FUNC_3(VAR_9, VAR_10, VAR_11) + VAR_13[VAR_1[VAR_14]] + FUNC_5(VAR_14));
  VAR_8 = VAR_11; VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = VAR_12;
 }

 for(VAR_14 = 16; VAR_14 < 32; VAR_14++) {
  VAR_12 = FUNC_7( VAR_14, VAR_4 + FUNC_1(VAR_5, VAR_6, VAR_7) + VAR_13[VAR_0[VAR_14]] + FUNC_4(VAR_14));
  VAR_4 = VAR_7; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = VAR_12;
  VAR_12 = FUNC_8(VAR_14, VAR_8 + FUNC_2(VAR_9, VAR_10, VAR_11) + VAR_13[VAR_1[VAR_14]] + FUNC_5(VAR_14));
  VAR_8 = VAR_11; VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = VAR_12;
 }

 for(VAR_14 = 32; VAR_14 < 48; VAR_14++) {
  VAR_12 = FUNC_7( VAR_14, VAR_4 + FUNC_2(VAR_5, VAR_6, VAR_7) + VAR_13[VAR_0[VAR_14]] + FUNC_4(VAR_14));
  VAR_4 = VAR_7; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = VAR_12;
  VAR_12 = FUNC_8(VAR_14, VAR_8 + FUNC_1(VAR_9, VAR_10, VAR_11) + VAR_13[VAR_1[VAR_14]] + FUNC_5(VAR_14));
  VAR_8 = VAR_11; VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = VAR_12;
 }

 for(VAR_14 = 48; VAR_14 < 64; VAR_14++) {
  VAR_12 = FUNC_7( VAR_14, VAR_4 + FUNC_3(VAR_5, VAR_6, VAR_7) + VAR_13[VAR_0[VAR_14]] + FUNC_4(VAR_14));
  VAR_4 = VAR_7; VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = VAR_12;
  VAR_12 = FUNC_8(VAR_14, VAR_8 + FUNC_0(VAR_9, VAR_10, VAR_11) + VAR_13[VAR_1[VAR_14]] + FUNC_5(VAR_14));
  VAR_8 = VAR_11; VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = VAR_12;
 }

 VAR_12 = VAR_2[1] + VAR_6 + VAR_11;
 VAR_2[1] = VAR_2[2] + VAR_7 + VAR_8;
 VAR_2[2] = VAR_2[3] + VAR_4 + VAR_9;
 VAR_2[3] = VAR_2[0] + VAR_5 + VAR_10;
 VAR_2[0] = VAR_12;

 VAR_12 = 0;
 FUNC_9(VAR_13, sizeof(VAR_13));
}
