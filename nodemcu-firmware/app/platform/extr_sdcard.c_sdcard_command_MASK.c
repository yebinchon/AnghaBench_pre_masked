
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int,int,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint8_t FUNC_4( uint8_t VAR_4, uint32_t VAR_5 )
{
  FUNC_2();


  FUNC_3( 100 * 1000 );



  const uint8_t VAR_6 = VAR_4 == VAR_0 ? 0x95 : 0x87;
  FUNC_1( VAR_2, 16, (VAR_4 | 0x40) << 8 | VAR_5 >> 24, 32, VAR_5 << 8 | VAR_6, 0, 0, 0 );


  if (VAR_4 == VAR_1) {
    FUNC_1( VAR_2, 8, 0xff, 0, 0, 0, 0, 0 );
  }


  for (uint8_t VAR_7 = 0; ((VAR_3 = FUNC_0( VAR_2, 8, 0xff )) & 0x80) && VAR_7 != 0xFF; VAR_7++) ;

  return VAR_3;
}
