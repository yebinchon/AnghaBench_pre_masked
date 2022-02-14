
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;

int FUNC_4( uint8_t VAR_6, uint32_t VAR_7, uint8_t *VAR_8 )
{
  FUNC_0(VAR_6);


  if (VAR_5 != VAR_3) {
    VAR_7 <<= 9;
  }
  if (FUNC_2( VAR_0, VAR_7 )) {
    VAR_4 = VAR_2;
    goto fail;
  }
  return FUNC_3( VAR_8, 512 );

  fail:
  FUNC_1();
  return VAR_1;
}
