
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
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;
 size_t* VAR_8 ;
 size_t* VAR_9 ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_7(uint32_t VAR_14[8], const unsigned char VAR_15[128])
{
 uint32_t VAR_16[8];
 uint32_t VAR_17[32];
 int VAR_18;

 FUNC_0(VAR_17, VAR_15, 128);

 for(VAR_18 = 0; VAR_18 < 8; VAR_18++) {
  VAR_16[VAR_18] = VAR_14[VAR_18];
 }

 for(VAR_18 = 0; VAR_18 < 32; VAR_18++) {
  VAR_16[7 - (VAR_18 % 8)] = FUNC_5(FUNC_1(VAR_16[VAR_8[VAR_18]],VAR_16[VAR_12[VAR_18]],VAR_16[VAR_7[VAR_18]],VAR_16[VAR_10[VAR_18]],VAR_16[VAR_11[VAR_18]],VAR_16[VAR_9[VAR_18]],VAR_16[VAR_6[VAR_18]]),7) + FUNC_5(VAR_16[VAR_13[VAR_18]],11) + VAR_17[VAR_18];
 }
 for(VAR_18 = 0; VAR_18 < 32; VAR_18++) {
  VAR_16[7 - (VAR_18 % 8)] = FUNC_5(FUNC_2(VAR_16[VAR_9[VAR_18]],VAR_16[VAR_11[VAR_18]],VAR_16[VAR_8[VAR_18]],VAR_16[VAR_6[VAR_18]],VAR_16[VAR_7[VAR_18]],VAR_16[VAR_12[VAR_18]],VAR_16[VAR_10[VAR_18]]),7) + FUNC_5(VAR_16[VAR_13[VAR_18]],11) + VAR_17[VAR_0[VAR_18]] + VAR_3[VAR_18];
 }
 for(VAR_18 = 0; VAR_18 < 32; VAR_18++) {
  VAR_16[7 - (VAR_18 % 8)] = FUNC_5(FUNC_3(VAR_16[VAR_7[VAR_18]],VAR_16[VAR_10[VAR_18]],VAR_16[VAR_9[VAR_18]],VAR_16[VAR_12[VAR_18]],VAR_16[VAR_6[VAR_18]],VAR_16[VAR_8[VAR_18]],VAR_16[VAR_11[VAR_18]]),7) + FUNC_5(VAR_16[VAR_13[VAR_18]],11) + VAR_17[VAR_1[VAR_18]] + VAR_4[VAR_18];
 }
 for(VAR_18 = 0; VAR_18 < 32; VAR_18++) {
  VAR_16[7 - (VAR_18 % 8)] = FUNC_5(FUNC_4(VAR_16[VAR_12[VAR_18]],VAR_16[VAR_10[VAR_18]],VAR_16[VAR_6[VAR_18]],VAR_16[VAR_11[VAR_18]],VAR_16[VAR_8[VAR_18]],VAR_16[VAR_7[VAR_18]],VAR_16[VAR_9[VAR_18]]),7) + FUNC_5(VAR_16[VAR_13[VAR_18]],11) + VAR_17[VAR_2[VAR_18]] + VAR_5[VAR_18];
 }


 for(VAR_18 = 0; VAR_18 < 8; VAR_18++) {
  VAR_14[VAR_18] += VAR_16[VAR_18];
 }


 FUNC_6((unsigned char*) VAR_17, sizeof(VAR_17));
}
