
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int to_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int ,int ,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int *) ;

int FUNC_11( uint8_t VAR_22, uint8_t VAR_23 )
{
  uint32_t VAR_24, VAR_25;
  to_t VAR_26;

  VAR_21 = VAR_12;
  VAR_17 = 0;

  if (VAR_22 > 1) {
    return VAR_4;
  }
  VAR_18 = VAR_22;
  FUNC_0(VAR_23);

  FUNC_2( VAR_19, VAR_6 );
  FUNC_1( VAR_19, VAR_7, VAR_5 );


  VAR_25 = FUNC_9( VAR_18, 200 );




  for (int VAR_27 = 0; VAR_27 < 2; VAR_27++) {
    FUNC_4( VAR_18, 0, 0, 0, 0, 0, 200, 0 );
  }


  FUNC_8( &VAR_26, 500 * 1000 );
  while (FUNC_7( VAR_1, 0 ) != VAR_8) {
    if (FUNC_10( &VAR_26 )) {
      goto fail;
    }
  }

  FUNC_8( &VAR_26, 500 * 1000 );
  while (1) {
    if (FUNC_7( VAR_3, 0x1aa) == (VAR_9 | VAR_8)) {
      VAR_21 = VAR_13;
      break;
    }
    for (uint8_t VAR_28 = 0; VAR_28 < 4; VAR_28++) {
      VAR_20 = FUNC_3( VAR_18, 8, 0xff );
    }
    if (VAR_20 == 0xaa) {
      VAR_21 = VAR_14;
      break;
    }
    if (FUNC_10( &VAR_26 )) {
      goto fail;
    }
  }

  VAR_24 = VAR_21 == VAR_14 ? 0x40000000 : 0;

  FUNC_8( &VAR_26, 500 * 1000 );
  while (FUNC_5( VAR_0, VAR_24 ) != VAR_10) {
    if (FUNC_10( &VAR_26 )) {
      goto fail;
    }
  }

  if (VAR_21 == VAR_14) {
    if (FUNC_7( VAR_2, 0 )) {
      VAR_17 = VAR_11;
      goto fail;
    }
    if ((FUNC_3( VAR_18, 8, 0xff ) & 0xC0) == 0xC0) {
      VAR_21 = VAR_15;
    }

    for (uint8_t VAR_29 = 0; VAR_29 < 3; VAR_29++) {
      FUNC_3( VAR_18, 8, 0xff);
    }
  }
  FUNC_6();


  FUNC_9( VAR_18, VAR_25 );

  return VAR_16;

  fail:
  FUNC_6();
  return VAR_4;
}
