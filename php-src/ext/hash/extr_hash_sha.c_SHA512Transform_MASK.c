
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__* VAR_0 ;
 int FUNC_6 (scalar_t__*,unsigned char const*,int) ;
 int FUNC_7 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_8(uint64_t VAR_1[8], const unsigned char VAR_2[128])
{
 uint64_t VAR_3 = VAR_1[0], VAR_4 = VAR_1[1], VAR_5 = VAR_1[2], VAR_6 = VAR_1[3];
 uint64_t VAR_7 = VAR_1[4], VAR_8 = VAR_1[5], VAR_9 = VAR_1[6], VAR_10 = VAR_1[7];
 uint64_t VAR_11[16], VAR_12, VAR_13, VAR_14[80];
 int VAR_15;

 FUNC_6(VAR_11, VAR_2, 128);


 for(VAR_15 = 0; VAR_15 < 16; VAR_15++) {
  VAR_14[VAR_15] = VAR_11[VAR_15];
 }
 for(VAR_15 = 16; VAR_15 < 80; VAR_15++) {
  VAR_14[VAR_15] = FUNC_5(VAR_14[VAR_15-2]) + VAR_14[VAR_15-7] + FUNC_4(VAR_14[VAR_15-15]) + VAR_14[VAR_15-16];
 }

 for (VAR_15 = 0; VAR_15 < 80; VAR_15++) {
  VAR_12 = VAR_10 + FUNC_3(VAR_7) + FUNC_0(VAR_7,VAR_8,VAR_9) + VAR_0[VAR_15] + VAR_14[VAR_15];
  VAR_13 = FUNC_2(VAR_3) + FUNC_1(VAR_3,VAR_4,VAR_5);
  VAR_10 = VAR_9; VAR_9 = VAR_8; VAR_8 = VAR_7; VAR_7 = VAR_6 + VAR_12;
  VAR_6 = VAR_5; VAR_5 = VAR_4; VAR_4 = VAR_3; VAR_3 = VAR_12 + VAR_13;
 }

 VAR_1[0] += VAR_3;
 VAR_1[1] += VAR_4;
 VAR_1[2] += VAR_5;
 VAR_1[3] += VAR_6;
 VAR_1[4] += VAR_7;
 VAR_1[5] += VAR_8;
 VAR_1[6] += VAR_9;
 VAR_1[7] += VAR_10;


 FUNC_7((unsigned char*) VAR_11, sizeof(VAR_11));
}
