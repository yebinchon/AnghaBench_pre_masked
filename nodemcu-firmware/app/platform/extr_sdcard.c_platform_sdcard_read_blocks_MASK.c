
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
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int *,int) ;

int FUNC_6( uint8_t VAR_9, uint32_t VAR_10, size_t VAR_11, uint8_t *VAR_12 )
{
  FUNC_0(VAR_9);

  if (VAR_11 == 0) {
    return VAR_6;
  }
  if (VAR_11 == 1) {
    return FUNC_1( VAR_9, VAR_10, VAR_12 );
  }


  if (VAR_8 != VAR_5) {
    VAR_10 <<= 9;
  }


  if (FUNC_4( VAR_1, VAR_10 )) {
    VAR_7 = VAR_4;
    goto fail;
  }


  while (VAR_11 > 0) {
    FUNC_3();
    if (FUNC_5( VAR_12, 512 )) {
      VAR_11--;
      VAR_12 = &(VAR_12[512]);
    } else {
      break;
    }
  }


  if (FUNC_4( VAR_0, 0 )) {
    VAR_7 = VAR_3;
    goto fail;
  }
  FUNC_2();
  return VAR_6;

  fail:
  FUNC_2();
  return VAR_2;
}
