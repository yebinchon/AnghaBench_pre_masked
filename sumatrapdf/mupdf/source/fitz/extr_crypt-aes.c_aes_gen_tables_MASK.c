
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 unsigned long* VAR_1 ;
 unsigned long* VAR_2 ;
 unsigned long* VAR_3 ;
 void** VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 unsigned long* VAR_5 ;
 void* FUNC_1 (unsigned long) ;
 int* VAR_6 ;
 unsigned long* VAR_7 ;
 unsigned long* VAR_8 ;
 unsigned long* VAR_9 ;
 void** VAR_10 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( void )
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15[256];
 int VAR_16[256];




 for( VAR_11 = 0, VAR_12 = 1; VAR_11 < 256; VAR_11++ )
 {
  VAR_15[VAR_11] = VAR_12;
  VAR_16[VAR_12] = VAR_11;
  VAR_12 = ( VAR_12 ^ FUNC_2( VAR_12 ) ) & 0xFF;
 }




 for( VAR_11 = 0, VAR_12 = 1; VAR_11 < 10; VAR_11++ )
 {
  VAR_5[VAR_11] = (unsigned long) VAR_12;
  VAR_12 = FUNC_2( VAR_12 ) & 0xFF;
 }




 VAR_0[0x00] = 0x63;
 VAR_6[0x63] = 0x00;

 for( VAR_11 = 1; VAR_11 < 256; VAR_11++ )
 {
  VAR_12 = VAR_15[255 - VAR_16[VAR_11]];

  VAR_13 = VAR_12; VAR_13 = ( (VAR_13 << 1) | (VAR_13 >> 7) ) & 0xFF;
  VAR_12 ^= VAR_13; VAR_13 = ( (VAR_13 << 1) | (VAR_13 >> 7) ) & 0xFF;
  VAR_12 ^= VAR_13; VAR_13 = ( (VAR_13 << 1) | (VAR_13 >> 7) ) & 0xFF;
  VAR_12 ^= VAR_13; VAR_13 = ( (VAR_13 << 1) | (VAR_13 >> 7) ) & 0xFF;
  VAR_12 ^= VAR_13 ^ 0x63;

  VAR_0[VAR_11] = (unsigned char) VAR_12;
  VAR_6[VAR_12] = (unsigned char) VAR_11;
 }




 for( VAR_11 = 0; VAR_11 < 256; VAR_11++ )
 {
  VAR_12 = VAR_0[VAR_11];
  VAR_13 = FUNC_2( VAR_12 ) & 0xFF;
  VAR_14 = ( VAR_13 ^ VAR_12 ) & 0xFF;

  VAR_1[VAR_11] = ( (unsigned long) VAR_13 ) ^
  ( (unsigned long) VAR_12 << 8 ) ^
  ( (unsigned long) VAR_12 << 16 ) ^
  ( (unsigned long) VAR_14 << 24 );

  VAR_2[VAR_11] = FUNC_1( VAR_1[VAR_11] );
  VAR_3[VAR_11] = FUNC_1( VAR_2[VAR_11] );
  VAR_4[VAR_11] = FUNC_1( VAR_3[VAR_11] );

  VAR_12 = VAR_6[VAR_11];

  VAR_7[VAR_11] = ( (unsigned long) FUNC_0( 0x0E, VAR_12 ) ) ^
  ( (unsigned long) FUNC_0( 0x09, VAR_12 ) << 8 ) ^
  ( (unsigned long) FUNC_0( 0x0D, VAR_12 ) << 16 ) ^
  ( (unsigned long) FUNC_0( 0x0B, VAR_12 ) << 24 );

  VAR_8[VAR_11] = FUNC_1( VAR_7[VAR_11] );
  VAR_9[VAR_11] = FUNC_1( VAR_8[VAR_11] );
  VAR_10[VAR_11] = FUNC_1( VAR_9[VAR_11] );
 }
}
