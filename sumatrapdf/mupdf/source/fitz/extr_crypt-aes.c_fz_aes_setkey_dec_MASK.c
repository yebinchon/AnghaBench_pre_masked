
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nr; unsigned long* rk; unsigned long* buf; } ;
typedef TYPE_1__ aes_context ;


 size_t* VAR_0 ;
 unsigned long* FUNC_0 (unsigned long*) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int FUNC_3(aes_context *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 aes_context VAR_10;
 unsigned long *VAR_11;
 unsigned long *VAR_12;

 switch( VAR_7 )
 {
 case 128: VAR_5->nr = 10; break;
 case 192: VAR_5->nr = 12; break;
 case 256: VAR_5->nr = 14; break;
 default: return 1;
 }




 VAR_5->rk = VAR_11 = VAR_5->buf;


 VAR_8 = FUNC_1( &VAR_10, VAR_6, VAR_7 );
 if (VAR_8)
  return VAR_8;
 VAR_12 = VAR_10.rk + VAR_10.nr * 4;

 *VAR_11++ = *VAR_12++;
 *VAR_11++ = *VAR_12++;
 *VAR_11++ = *VAR_12++;
 *VAR_11++ = *VAR_12++;

 for( VAR_8 = VAR_5->nr - 1, VAR_12 -= 8; VAR_8 > 0; VAR_8--, VAR_12 -= 8 )
 {
  for( VAR_9 = 0; VAR_9 < 4; VAR_9++, VAR_12++ )
  {
   *VAR_11++ = VAR_1[ VAR_0[ ( *VAR_12 ) & 0xFF ] ] ^
    VAR_2[ VAR_0[ ( *VAR_12 >> 8 ) & 0xFF ] ] ^
    VAR_3[ VAR_0[ ( *VAR_12 >> 16 ) & 0xFF ] ] ^
    VAR_4[ VAR_0[ ( *VAR_12 >> 24 ) & 0xFF ] ];
  }
 }

 *VAR_11++ = *VAR_12++;
 *VAR_11++ = *VAR_12++;
 *VAR_11++ = *VAR_12++;
 *VAR_11 = *VAR_12;

 FUNC_2( &VAR_10, 0, sizeof( aes_context ) );
 return 0;
}
