
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
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int const*) ;

int FUNC_4( uint8_t VAR_8, uint32_t VAR_9, const uint8_t *VAR_10 )
{
  FUNC_0(VAR_8);


  if (VAR_7 != VAR_4) {
    VAR_9 <<= 9;
  }
  if (FUNC_2( VAR_0, VAR_9 )) {
    VAR_6 = VAR_3;
    goto fail;
  }
  if (! FUNC_3( VAR_1, VAR_10 )) {
    goto fail;
  }

  FUNC_1();
  return VAR_5;

  fail:
  FUNC_1();
  return VAR_2;
}
