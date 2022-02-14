
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__*,unsigned char const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 size_t* VAR_8 ;
 size_t* VAR_9 ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 size_t* VAR_14 ;
 size_t* VAR_15 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_8(uint32_t VAR_16[8], const unsigned char VAR_17[128])
{
 uint32_t VAR_18[8];
 uint32_t VAR_19[32];
 int VAR_20;

 FUNC_0(VAR_19, VAR_17, 128);

 for(VAR_20 = 0; VAR_20 < 8; VAR_20++) {
  VAR_18[VAR_20] = VAR_16[VAR_20];
 }
 for(VAR_20 = 0; VAR_20 < 32; VAR_20++) {
  VAR_18[7 - (VAR_20 % 8)] = FUNC_6(FUNC_1(VAR_18[VAR_11[VAR_20]],VAR_18[VAR_12[VAR_20]],VAR_18[VAR_9[VAR_20]],VAR_18[VAR_8[VAR_20]],VAR_18[VAR_13[VAR_20]],VAR_18[VAR_10[VAR_20]],VAR_18[VAR_14[VAR_20]]),7) + FUNC_6(VAR_18[VAR_15[VAR_20]],11) + VAR_19[VAR_20];
 }
 for(VAR_20 = 0; VAR_20 < 32; VAR_20++) {
  VAR_18[7 - (VAR_20 % 8)] = FUNC_6(FUNC_2(VAR_18[VAR_14[VAR_20]],VAR_18[VAR_10[VAR_20]],VAR_18[VAR_9[VAR_20]],VAR_18[VAR_8[VAR_20]],VAR_18[VAR_11[VAR_20]],VAR_18[VAR_12[VAR_20]],VAR_18[VAR_13[VAR_20]]),7) + FUNC_6(VAR_18[VAR_15[VAR_20]],11) + VAR_19[VAR_0[VAR_20]] + VAR_4[VAR_20];
 }
 for(VAR_20 = 0; VAR_20 < 32; VAR_20++) {
  VAR_18[7 - (VAR_20 % 8)] = FUNC_6(FUNC_3(VAR_18[VAR_10[VAR_20]],VAR_18[VAR_14[VAR_20]],VAR_18[VAR_8[VAR_20]],VAR_18[VAR_12[VAR_20]],VAR_18[VAR_11[VAR_20]],VAR_18[VAR_9[VAR_20]],VAR_18[VAR_13[VAR_20]]),7) + FUNC_6(VAR_18[VAR_15[VAR_20]],11) + VAR_19[VAR_1[VAR_20]] + VAR_5[VAR_20];
 }
 for(VAR_20 = 0; VAR_20 < 32; VAR_20++) {
  VAR_18[7 - (VAR_20 % 8)] = FUNC_6(FUNC_4(VAR_18[VAR_9[VAR_20]],VAR_18[VAR_13[VAR_20]],VAR_18[VAR_11[VAR_20]],VAR_18[VAR_10[VAR_20]],VAR_18[VAR_8[VAR_20]],VAR_18[VAR_12[VAR_20]],VAR_18[VAR_14[VAR_20]]),7) + FUNC_6(VAR_18[VAR_15[VAR_20]],11) + VAR_19[VAR_2[VAR_20]] + VAR_6[VAR_20];
 }
 for(VAR_20 = 0; VAR_20 < 32; VAR_20++) {
  VAR_18[7 - (VAR_20 % 8)] = FUNC_6(FUNC_5(VAR_18[VAR_10[VAR_20]],VAR_18[VAR_13[VAR_20]],VAR_18[VAR_8[VAR_20]],VAR_18[VAR_14[VAR_20]],VAR_18[VAR_12[VAR_20]],VAR_18[VAR_11[VAR_20]],VAR_18[VAR_9[VAR_20]]),7) + FUNC_6(VAR_18[VAR_15[VAR_20]],11) + VAR_19[VAR_3[VAR_20]] + VAR_7[VAR_20];
 }


 for(VAR_20 = 0; VAR_20 < 8; VAR_20++) {
  VAR_16[VAR_20] += VAR_18[VAR_20];
 }


 FUNC_7((unsigned char*) VAR_19, sizeof(VAR_19));
}
