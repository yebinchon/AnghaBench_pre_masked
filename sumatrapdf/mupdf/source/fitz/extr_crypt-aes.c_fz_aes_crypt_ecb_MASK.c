
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* rk; int nr; } ;
typedef TYPE_1__ aes_context ;
typedef size_t Y3 ;
typedef size_t Y2 ;
typedef size_t Y1 ;
typedef size_t Y0 ;


 int FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned long,unsigned char const*,int) ;
 int VAR_2 ;
 int FUNC_3 (unsigned long,unsigned char*,int) ;
 int* VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,unsigned char const*,unsigned char*) ;

void FUNC_6( aes_context *VAR_4,
 int VAR_5,
 const unsigned char VAR_6[16],
 unsigned char VAR_7[16] )
{
 int VAR_8;
 unsigned long *VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 VAR_9 = VAR_4->rk;

 FUNC_2( VAR_10, VAR_6, 0 ); VAR_10 ^= *VAR_9++;
 FUNC_2( VAR_11, VAR_6, 4 ); VAR_11 ^= *VAR_9++;
 FUNC_2( VAR_12, VAR_6, 8 ); VAR_12 ^= *VAR_9++;
 FUNC_2( VAR_13, VAR_6, 12 ); VAR_13 ^= *VAR_9++;

 if( VAR_5 == VAR_1 )
 {
  for( VAR_8 = (VAR_4->nr >> 1) - 1; VAR_8 > 0; VAR_8-- )
  {
   FUNC_1( VAR_14, VAR_15, VAR_16, VAR_17, VAR_10, VAR_11, VAR_12, VAR_13 );
   FUNC_1( VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 );
  }

  FUNC_1( VAR_14, VAR_15, VAR_16, VAR_17, VAR_10, VAR_11, VAR_12, VAR_13 );

  VAR_10 = *VAR_9++ ^ ( VAR_3[ ( VAR_14 ) & 0xFF ] ) ^
   ( VAR_3[ ( VAR_17 >> 8 ) & 0xFF ] << 8 ) ^
   ( VAR_3[ ( VAR_16 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_3[ ( VAR_15 >> 24 ) & 0xFF ] << 24 );

  VAR_11 = *VAR_9++ ^ ( VAR_3[ ( VAR_15 ) & 0xFF ] ) ^
   ( VAR_3[ ( VAR_14 >>8 ) & 0xFF ] << 8 ) ^
   ( VAR_3[ ( VAR_17 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_3[ ( VAR_16 >> 24 ) & 0xFF ] << 24 );

  VAR_12 = *VAR_9++ ^ ( VAR_3[ ( VAR_16 ) & 0xFF ] ) ^
   ( VAR_3[ ( VAR_15 >> 8 ) & 0xFF ] << 8 ) ^
   ( VAR_3[ ( VAR_14 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_3[ ( VAR_17 >> 24 ) & 0xFF ] << 24 );

  VAR_13 = *VAR_9 ^ ( VAR_3[ ( VAR_17 ) & 0xFF ] ) ^
   ( VAR_3[ ( VAR_16 >> 8 ) & 0xFF ] << 8 ) ^
   ( VAR_3[ ( VAR_15 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_3[ ( VAR_14 >> 24 ) & 0xFF ] << 24 );
 }
 else
 {
  for( VAR_8 = (VAR_4->nr >> 1) - 1; VAR_8 > 0; VAR_8-- )
  {
   FUNC_0( VAR_14, VAR_15, VAR_16, VAR_17, VAR_10, VAR_11, VAR_12, VAR_13 );
   FUNC_0( VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 );
  }

  FUNC_0( VAR_14, VAR_15, VAR_16, VAR_17, VAR_10, VAR_11, VAR_12, VAR_13 );

  VAR_10 = *VAR_9++ ^ ( VAR_0[ ( VAR_14 ) & 0xFF ] ) ^
   ( VAR_0[ ( VAR_15 >> 8 ) & 0xFF ] << 8 ) ^
   ( VAR_0[ ( VAR_16 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_0[ ( VAR_17 >> 24 ) & 0xFF ] << 24 );

  VAR_11 = *VAR_9++ ^ ( VAR_0[ ( VAR_15 ) & 0xFF ] ) ^
   ( VAR_0[ ( VAR_16 >> 8 ) & 0xFF ] << 8 ) ^
   ( VAR_0[ ( VAR_17 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_0[ ( VAR_14 >> 24 ) & 0xFF ] << 24 );

  VAR_12 = *VAR_9++ ^ ( VAR_0[ ( VAR_16 ) & 0xFF ] ) ^
   ( VAR_0[ ( VAR_17 >> 8 ) & 0xFF ] << 8 ) ^
   ( VAR_0[ ( VAR_14 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_0[ ( VAR_15 >> 24 ) & 0xFF ] << 24 );

  VAR_13 = *VAR_9 ^ ( VAR_0[ ( VAR_17 ) & 0xFF ] ) ^
   ( VAR_0[ ( VAR_14 >> 8 ) & 0xFF ] << 8 ) ^
   ( VAR_0[ ( VAR_15 >> 16 ) & 0xFF ] << 16 ) ^
   ( VAR_0[ ( VAR_16 >> 24 ) & 0xFF ] << 24 );
 }

 FUNC_3( VAR_10, VAR_7, 0 );
 FUNC_3( VAR_11, VAR_7, 4 );
 FUNC_3( VAR_12, VAR_7, 8 );
 FUNC_3( VAR_13, VAR_7, 12 );
}
