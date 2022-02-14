
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(uint32_t *VAR_4, const unsigned char *VAR_5, uint32_t *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < 16; VAR_13++) {
  int VAR_14 = 4 * VAR_13;


  VAR_6[VAR_13] =
   (VAR_5[VAR_14+0] << 24) |
   (VAR_5[VAR_14+1] << 16) |
   (VAR_5[VAR_14+2] << 8) |
    VAR_5[VAR_14+3];
 }

 for (VAR_13 = 0; VAR_13 < 64; VAR_13++)
  VAR_6[VAR_13+16] = FUNC_3(VAR_6[VAR_13+13] ^ VAR_6[VAR_13+8] ^ VAR_6[VAR_13+2] ^ VAR_6[VAR_13], 1);

 VAR_7 = VAR_4[0];
 VAR_8 = VAR_4[1];
 VAR_9 = VAR_4[2];
 VAR_10 = VAR_4[3];
 VAR_11 = VAR_4[4];

 for (VAR_13 = 0; VAR_13 < 20; VAR_13++) {
  VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_10) + VAR_0 + FUNC_3(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_3(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 for (; VAR_13 < 40; VAR_13 ++) {
  VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10) + VAR_1 + FUNC_3(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_3(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 for (; VAR_13 < 60; VAR_13 ++) {
  VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10) + VAR_2 + FUNC_3(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_3(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 for (; VAR_13 < 80; VAR_13 ++) {
  VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10) + VAR_3 + FUNC_3(VAR_7, 5) + VAR_11 + VAR_6[VAR_13];
  VAR_11 = VAR_10; VAR_10 = VAR_9; VAR_9 = FUNC_3(VAR_8, 30); VAR_8 = VAR_7; VAR_7 = VAR_12;
 }

 VAR_4[0] += VAR_7;
 VAR_4[1] += VAR_8;
 VAR_4[2] += VAR_9;
 VAR_4[3] += VAR_10;
 VAR_4[4] += VAR_11;
}
