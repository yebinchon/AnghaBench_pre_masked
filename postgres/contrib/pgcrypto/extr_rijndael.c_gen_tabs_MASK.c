
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u4byte ;
typedef size_t u1byte ;


 scalar_t__ FUNC_0 (int,size_t) ;
 int** VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 size_t* VAR_3 ;
 int** VAR_4 ;
 int* VAR_5 ;
 size_t* VAR_6 ;
 size_t* VAR_7 ;
 void* FUNC_1 (int,int) ;
 size_t* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(void)
{

 u4byte VAR_10,
    VAR_11;
 u1byte VAR_12,
    VAR_13;





 for (VAR_10 = 0, VAR_12 = 1; VAR_10 < 256; ++VAR_10)
 {
  VAR_6[VAR_10] = (u1byte) VAR_12;
  VAR_5[VAR_12] = (u1byte) VAR_10;

  VAR_12 = VAR_12 ^ (VAR_12 << 1) ^ (VAR_12 & 0x80 ? 0x01b : 0);
 }

 VAR_5[1] = 0;
 VAR_12 = 1;

 for (VAR_10 = 0; VAR_10 < 10; ++VAR_10)
 {
  VAR_7[VAR_10] = VAR_12;

  VAR_12 = (VAR_12 << 1) ^ (VAR_12 & 0x80 ? 0x1b : 0);
 }







 for (VAR_10 = 0; VAR_10 < 256; ++VAR_10)
 {
  VAR_12 = (VAR_10 ? VAR_6[255 - VAR_5[VAR_10]] : 0);
  VAR_13 = VAR_12;
  VAR_13 = (VAR_13 >> 7) | (VAR_13 << 1);
  VAR_12 ^= VAR_13;
  VAR_13 = (VAR_13 >> 7) | (VAR_13 << 1);
  VAR_12 ^= VAR_13;
  VAR_13 = (VAR_13 >> 7) | (VAR_13 << 1);
  VAR_12 ^= VAR_13;
  VAR_13 = (VAR_13 >> 7) | (VAR_13 << 1);
  VAR_12 ^= VAR_13 ^ 0x63;
  VAR_8[VAR_10] = (u1byte) VAR_12;
  VAR_3[VAR_12] = (u1byte) VAR_10;
 }

 for (VAR_10 = 0; VAR_10 < 256; ++VAR_10)
 {
  VAR_12 = VAR_8[VAR_10];
  VAR_11 = ((u4byte) FUNC_0(2, VAR_12)) |
   ((u4byte) VAR_12 << 8) |
   ((u4byte) VAR_12 << 16) |
   ((u4byte) FUNC_0(3, VAR_12) << 24);

  VAR_1[0][VAR_10] = VAR_11;
  VAR_1[1][VAR_10] = FUNC_1(VAR_11, 8);
  VAR_1[2][VAR_10] = FUNC_1(VAR_11, 16);
  VAR_1[3][VAR_10] = FUNC_1(VAR_11, 24);

  VAR_12 = VAR_3[VAR_10];
  VAR_11 = ((u4byte) FUNC_0(14, VAR_12)) |
   ((u4byte) FUNC_0(9, VAR_12) << 8) |
   ((u4byte) FUNC_0(13, VAR_12) << 16) |
   ((u4byte) FUNC_0(11, VAR_12) << 24);

  VAR_4[0][VAR_10] = VAR_11;
  VAR_4[1][VAR_10] = FUNC_1(VAR_11, 8);
  VAR_4[2][VAR_10] = FUNC_1(VAR_11, 16);
  VAR_4[3][VAR_10] = FUNC_1(VAR_11, 24);
 }

 VAR_9 = 1;

}
