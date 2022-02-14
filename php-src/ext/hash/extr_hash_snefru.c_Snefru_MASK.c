
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int,int,int const*) ;
 int** VAR_0 ;

__attribute__((used)) static inline void FUNC_2(uint32_t VAR_1[16])
{
 static int VAR_2[4] = {16, 8, 16, 24};
 int VAR_3, VAR_4, VAR_5, VAR_6;
 const uint32_t *VAR_7,*VAR_8;
 uint32_t VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24,VAR_25;

 VAR_10 = VAR_1[0];
 VAR_11 = VAR_1[1];
 VAR_12 = VAR_1[2];
 VAR_13 = VAR_1[3];
 VAR_14 = VAR_1[4];
 VAR_15 = VAR_1[5];
 VAR_16 = VAR_1[6];
 VAR_17 = VAR_1[7];
 VAR_18 = VAR_1[8];
 VAR_19 = VAR_1[9];
 VAR_20 = VAR_1[10];
 VAR_21 = VAR_1[11];
 VAR_22 = VAR_1[12];
 VAR_23 = VAR_1[13];
 VAR_24 = VAR_1[14];
 VAR_25 = VAR_1[15];

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_7 = VAR_0[2*VAR_4+0];
  VAR_8 = VAR_0[2*VAR_4+1];
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
   FUNC_1(VAR_25, VAR_10, VAR_11, VAR_7);
   FUNC_1(VAR_10, VAR_11, VAR_12, VAR_7);
   FUNC_1(VAR_11, VAR_12, VAR_13, VAR_8);
   FUNC_1(VAR_12, VAR_13, VAR_14, VAR_8);
   FUNC_1(VAR_13, VAR_14, VAR_15, VAR_7);
   FUNC_1(VAR_14, VAR_15, VAR_16, VAR_7);
   FUNC_1(VAR_15, VAR_16, VAR_17, VAR_8);
   FUNC_1(VAR_16, VAR_17, VAR_18, VAR_8);
   FUNC_1(VAR_17, VAR_18, VAR_19, VAR_7);
   FUNC_1(VAR_18, VAR_19, VAR_20, VAR_7);
   FUNC_1(VAR_19, VAR_20, VAR_21, VAR_8);
   FUNC_1(VAR_20, VAR_21, VAR_22, VAR_8);
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_7);
   FUNC_1(VAR_22, VAR_23, VAR_24, VAR_7);
   FUNC_1(VAR_23, VAR_24, VAR_25, VAR_8);
   FUNC_1(VAR_24, VAR_25, VAR_10, VAR_8);

   VAR_5 = VAR_2[VAR_3];
   VAR_6 = 32-VAR_5;

   VAR_10 = (VAR_10 >> VAR_5) | (VAR_10 << VAR_6);
   VAR_11 = (VAR_11 >> VAR_5) | (VAR_11 << VAR_6);
   VAR_12 = (VAR_12 >> VAR_5) | (VAR_12 << VAR_6);
   VAR_13 = (VAR_13 >> VAR_5) | (VAR_13 << VAR_6);
   VAR_14 = (VAR_14 >> VAR_5) | (VAR_14 << VAR_6);
   VAR_15 = (VAR_15 >> VAR_5) | (VAR_15 << VAR_6);
   VAR_16 = (VAR_16 >> VAR_5) | (VAR_16 << VAR_6);
   VAR_17 = (VAR_17 >> VAR_5) | (VAR_17 << VAR_6);
   VAR_18 = (VAR_18 >> VAR_5) | (VAR_18 << VAR_6);
   VAR_19 = (VAR_19 >> VAR_5) | (VAR_19 << VAR_6);
   VAR_20 = (VAR_20 >> VAR_5) | (VAR_20 << VAR_6);
   VAR_21 = (VAR_21 >> VAR_5) | (VAR_21 << VAR_6);
   VAR_22 = (VAR_22 >> VAR_5) | (VAR_22 << VAR_6);
   VAR_23 = (VAR_23 >> VAR_5) | (VAR_23 << VAR_6);
   VAR_24 = (VAR_24 >> VAR_5) | (VAR_24 << VAR_6);
   VAR_25 = (VAR_25 >> VAR_5) | (VAR_25 << VAR_6);
  }
 }
 VAR_1[0] ^= VAR_25;
 VAR_1[1] ^= VAR_24;
 VAR_1[2] ^= VAR_23;
 VAR_1[3] ^= VAR_22;
 VAR_1[4] ^= VAR_21;
 VAR_1[5] ^= VAR_20;
 VAR_1[6] ^= VAR_19;
 VAR_1[7] ^= VAR_18;



}
