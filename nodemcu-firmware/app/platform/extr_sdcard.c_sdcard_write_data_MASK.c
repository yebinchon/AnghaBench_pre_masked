
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int const*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4( uint8_t VAR_8, const uint8_t *VAR_9)
{
  uint16_t VAR_10 = 0xffff;

  FUNC_2( VAR_6, 8, VAR_8, 0, 0, 0, 0, 0 );
  FUNC_0( VAR_6, 512, VAR_9 );
  FUNC_2( VAR_6, 16, VAR_10, 0, 0, 0, 0, 0 );

  VAR_7 = FUNC_1( VAR_6, 8, 0xff );
  if ((VAR_7 & VAR_1) != VAR_0) {
    VAR_5 = VAR_3;
    goto fail;
  }
  return VAR_4;

  fail:
  FUNC_3();
  return VAR_2;
}
