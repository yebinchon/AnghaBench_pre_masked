
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
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;
 size_t* VAR_8 ;
 size_t* VAR_9 ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_6(uint32_t VAR_12[8], const unsigned char VAR_13[128])
{
 uint32_t VAR_14[8];
 uint32_t VAR_15[32];
 int VAR_16;

 FUNC_0(VAR_15, VAR_13, 128);

 for(VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  VAR_14[VAR_16] = VAR_12[VAR_16];
 }

 for(VAR_16 = 0; VAR_16 < 32; VAR_16++) {
  VAR_14[7 - (VAR_16 % 8)] = FUNC_4(FUNC_1(VAR_14[VAR_5[VAR_16]],VAR_14[VAR_4[VAR_16]],VAR_14[VAR_7[VAR_16]],VAR_14[VAR_9[VAR_16]],VAR_14[VAR_10[VAR_16]],VAR_14[VAR_6[VAR_16]],VAR_14[VAR_8[VAR_16]]),7) + FUNC_4(VAR_14[VAR_11[VAR_16]],11) + VAR_15[VAR_16];
 }
 for(VAR_16 = 0; VAR_16 < 32; VAR_16++) {
  VAR_14[7 - (VAR_16 % 8)] = FUNC_4(FUNC_2(VAR_14[VAR_8[VAR_16]],VAR_14[VAR_6[VAR_16]],VAR_14[VAR_5[VAR_16]],VAR_14[VAR_4[VAR_16]],VAR_14[VAR_9[VAR_16]],VAR_14[VAR_7[VAR_16]],VAR_14[VAR_10[VAR_16]]),7) + FUNC_4(VAR_14[VAR_11[VAR_16]],11) + VAR_15[VAR_0[VAR_16]] + VAR_2[VAR_16];
 }
 for(VAR_16 = 0; VAR_16 < 32; VAR_16++) {
  VAR_14[7 - (VAR_16 % 8)] = FUNC_4(FUNC_3(VAR_14[VAR_10[VAR_16]],VAR_14[VAR_5[VAR_16]],VAR_14[VAR_6[VAR_16]],VAR_14[VAR_7[VAR_16]],VAR_14[VAR_8[VAR_16]],VAR_14[VAR_9[VAR_16]],VAR_14[VAR_4[VAR_16]]),7) + FUNC_4(VAR_14[VAR_11[VAR_16]],11) + VAR_15[VAR_1[VAR_16]] + VAR_3[VAR_16];
 }


 for(VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  VAR_12[VAR_16] += VAR_14[VAR_16];
 }


 FUNC_5((unsigned char*) VAR_15, sizeof(VAR_15));
}
