
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8 ;
typedef int uint32 ;
typedef int pg_crc32c ;


 int FUNC_0 (int ) ;
 int** VAR_0 ;

pg_crc32c
FUNC_1(pg_crc32c VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = VAR_2;
 const uint32 *VAR_5;





 while (VAR_3 > 0 && ((uintptr_t) VAR_4 & 3))
 {
  VAR_1 = FUNC_0(*VAR_4++);
  VAR_3--;
 }




 VAR_5 = (const uint32 *) VAR_4;
 while (VAR_3 >= 8)
 {
  uint32 VAR_6 = *VAR_5++ ^ VAR_1;
  uint32 VAR_7 = *VAR_5++;
  const uint8 VAR_8 = VAR_7 >> 24;
  const uint8 VAR_9 = VAR_7 >> 16;
  const uint8 VAR_10 = VAR_7 >> 8;
  const uint8 VAR_11 = VAR_7;
  const uint8 VAR_12 = VAR_6 >> 24;
  const uint8 VAR_13 = VAR_6 >> 16;
  const uint8 VAR_14 = VAR_6 >> 8;
  const uint8 VAR_15 = VAR_6;


  VAR_1 =
   VAR_0[0][VAR_8] ^ VAR_0[1][VAR_9] ^
   VAR_0[2][VAR_10] ^ VAR_0[3][VAR_11] ^
   VAR_0[4][VAR_12] ^ VAR_0[5][VAR_13] ^
   VAR_0[6][VAR_14] ^ VAR_0[7][VAR_15];

  VAR_3 -= 8;
 }




 VAR_4 = (const unsigned char *) VAR_5;
 while (VAR_3 > 0)
 {
  VAR_1 = FUNC_0(*VAR_4++);
  VAR_3--;
 }

 return VAR_1;
}
