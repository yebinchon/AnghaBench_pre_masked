
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int Y ;
typedef size_t X ;


 int FUNC_0 (int,int const*,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_1( uint32_t VAR_2[32], const uint8_t VAR_3[8] ) {
 int VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 FUNC_0( VAR_5, VAR_3, 0 );
 FUNC_0( VAR_6, VAR_3, 4 );



 VAR_7 = ((VAR_6 >> 4) ^ VAR_5) & 0x0F0F0F0F; VAR_5 ^= VAR_7; VAR_6 ^= (VAR_7 << 4);
 VAR_7 = ((VAR_6 ) ^ VAR_5) & 0x10101010; VAR_5 ^= VAR_7; VAR_6 ^= (VAR_7 );

 VAR_5 = (VAR_0[ (VAR_5 ) & 0xF] << 3) | (VAR_0[ (VAR_5 >> 8) & 0xF ] << 2)
  | (VAR_0[ (VAR_5 >> 16) & 0xF] << 1) | (VAR_0[ (VAR_5 >> 24) & 0xF ] )
  | (VAR_0[ (VAR_5 >> 5) & 0xF] << 7) | (VAR_0[ (VAR_5 >> 13) & 0xF ] << 6)
  | (VAR_0[ (VAR_5 >> 21) & 0xF] << 5) | (VAR_0[ (VAR_5 >> 29) & 0xF ] << 4);

 VAR_6 = (VAR_1[ (VAR_6 >> 1) & 0xF] << 3) | (VAR_1[ (VAR_6 >> 9) & 0xF ] << 2)
  | (VAR_1[ (VAR_6 >> 17) & 0xF] << 1) | (VAR_1[ (VAR_6 >> 25) & 0xF ] )
  | (VAR_1[ (VAR_6 >> 4) & 0xF] << 7) | (VAR_1[ (VAR_6 >> 12) & 0xF ] << 6)
  | (VAR_1[ (VAR_6 >> 20) & 0xF] << 5) | (VAR_1[ (VAR_6 >> 28) & 0xF ] << 4);

 VAR_5 &= 0x0FFFFFFF;
 VAR_6 &= 0x0FFFFFFF;



 for( VAR_4 = 0; VAR_4 < 16; VAR_4++ )
 {
  if( VAR_4 < 2 || VAR_4 == 8 || VAR_4 == 15 )
  {
   VAR_5 = ((VAR_5 << 1) | (VAR_5 >> 27)) & 0x0FFFFFFF;
   VAR_6 = ((VAR_6 << 1) | (VAR_6 >> 27)) & 0x0FFFFFFF;
  }
  else
  {
   VAR_5 = ((VAR_5 << 2) | (VAR_5 >> 26)) & 0x0FFFFFFF;
   VAR_6 = ((VAR_6 << 2) | (VAR_6 >> 26)) & 0x0FFFFFFF;
  }

  *VAR_2++ = ((VAR_5 << 4) & 0x24000000) | ((VAR_5 << 28) & 0x10000000)
    | ((VAR_5 << 14) & 0x08000000) | ((VAR_5 << 18) & 0x02080000)
    | ((VAR_5 << 6) & 0x01000000) | ((VAR_5 << 9) & 0x00200000)
    | ((VAR_5 >> 1) & 0x00100000) | ((VAR_5 << 10) & 0x00040000)
    | ((VAR_5 << 2) & 0x00020000) | ((VAR_5 >> 10) & 0x00010000)
    | ((VAR_6 >> 13) & 0x00002000) | ((VAR_6 >> 4) & 0x00001000)
    | ((VAR_6 << 6) & 0x00000800) | ((VAR_6 >> 1) & 0x00000400)
    | ((VAR_6 >> 14) & 0x00000200) | ((VAR_6 ) & 0x00000100)
    | ((VAR_6 >> 5) & 0x00000020) | ((VAR_6 >> 10) & 0x00000010)
    | ((VAR_6 >> 3) & 0x00000008) | ((VAR_6 >> 18) & 0x00000004)
    | ((VAR_6 >> 26) & 0x00000002) | ((VAR_6 >> 24) & 0x00000001);

  *VAR_2++ = ((VAR_5 << 15) & 0x20000000) | ((VAR_5 << 17) & 0x10000000)
    | ((VAR_5 << 10) & 0x08000000) | ((VAR_5 << 22) & 0x04000000)
    | ((VAR_5 >> 2) & 0x02000000) | ((VAR_5 << 1) & 0x01000000)
    | ((VAR_5 << 16) & 0x00200000) | ((VAR_5 << 11) & 0x00100000)
    | ((VAR_5 << 3) & 0x00080000) | ((VAR_5 >> 6) & 0x00040000)
    | ((VAR_5 << 15) & 0x00020000) | ((VAR_5 >> 4) & 0x00010000)
    | ((VAR_6 >> 2) & 0x00002000) | ((VAR_6 << 8) & 0x00001000)
    | ((VAR_6 >> 14) & 0x00000808) | ((VAR_6 >> 9) & 0x00000400)
    | ((VAR_6 ) & 0x00000200) | ((VAR_6 << 7) & 0x00000100)
    | ((VAR_6 >> 7) & 0x00000020) | ((VAR_6 >> 3) & 0x00000011)
    | ((VAR_6 << 2) & 0x00000004) | ((VAR_6 >> 21) & 0x00000002);
 }
}
