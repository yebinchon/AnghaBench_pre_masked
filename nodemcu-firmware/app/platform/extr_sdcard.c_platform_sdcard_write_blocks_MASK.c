
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int const*) ;
 int FUNC_7 () ;

int FUNC_8( uint8_t VAR_10, uint32_t VAR_11, size_t VAR_12, const uint8_t *VAR_13 )
{
  FUNC_0(VAR_10);

  if (FUNC_1( VAR_0, VAR_12 )) {
    VAR_8 = VAR_3;
    goto fail;
  }

  if (VAR_9 != VAR_6) {
    VAR_11 <<= 9;
  }
  if (FUNC_4( VAR_1, VAR_11 )) {
    VAR_8 = VAR_4;
    goto fail;
  }
  FUNC_2();

  for (size_t VAR_14 = 0; VAR_14 < VAR_12; VAR_14++, VAR_13 += 512) {
    FUNC_3();


    if (! FUNC_5( 100 * 1000 )) {
      goto fail_write;
    }
    if (! FUNC_6( VAR_7, VAR_13 )) {
      goto fail_write;
    }

    FUNC_2();
  }

  return FUNC_7();

  fail_write:
  VAR_8 = VAR_5;
  fail:
  FUNC_2();
  return VAR_2;
}
