
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int** VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_1()
{
  register int VAR_20, VAR_21, VAR_22;


  for ( VAR_20=0; VAR_20<VAR_14; VAR_20++) {
    for ( VAR_21=0; VAR_21<VAR_15; VAR_21++) {
      VAR_13[VAR_20][VAR_21] = 0;
    }
  }


  for ( VAR_20=0; VAR_20<VAR_14; VAR_20++ ) {
    VAR_13[VAR_20][0] |= VAR_7;
  }


  for ( VAR_21=0; VAR_21<VAR_15; VAR_21++ ) {
    VAR_13[VAR_14-1][VAR_21] |= VAR_6;
  }


  for ( VAR_20=0; VAR_20<VAR_14; VAR_20++ ) {
    VAR_13[VAR_20][VAR_15-1] |= VAR_4;
  }


  for ( VAR_21=0; VAR_21<VAR_15; VAR_21++ ) {
    VAR_13[0][VAR_21] |= VAR_5;
  }


  VAR_22 = FUNC_0(4);
  switch (VAR_22) {
  case 0:
    VAR_20 = FUNC_0(VAR_14);
    VAR_21 = 0;
    break;
  case 1:
    VAR_20 = VAR_14 - 1;
    VAR_21 = FUNC_0(VAR_15);
    break;
  case 2:
    VAR_20 = FUNC_0(VAR_14);
    VAR_21 = VAR_15 - 1;
    break;
  case 3:
    VAR_20 = 0;
    VAR_21 = FUNC_0(VAR_15);
    break;
  }
  VAR_13[VAR_20][VAR_21] |= VAR_3;
  VAR_13[VAR_20][VAR_21] |= ( VAR_0 >> VAR_22 );
  VAR_13[VAR_20][VAR_21] &= ~( VAR_7 >> VAR_22 );
  VAR_8 = VAR_20;
  VAR_9 = VAR_21;
  VAR_18 = VAR_20;
  VAR_19 = VAR_21;
  VAR_17 = VAR_22;
  VAR_16 = 0;


  VAR_22 = (VAR_22 + 2)%4;
  switch (VAR_22) {
  case 0:
    VAR_20 = FUNC_0(VAR_14);
    VAR_21 = 0;
    break;
  case 1:
    VAR_20 = VAR_14 - 1;
    VAR_21 = FUNC_0(VAR_15);
    break;
  case 2:
    VAR_20 = FUNC_0(VAR_14);
    VAR_21 = VAR_15 - 1;
    break;
  case 3:
    VAR_20 = 0;
    VAR_21 = FUNC_0(VAR_15);
    break;
  }
  VAR_13[VAR_20][VAR_21] |= VAR_2;
  VAR_13[VAR_20][VAR_21] |= ( VAR_1 >> VAR_22 );
  VAR_13[VAR_20][VAR_21] &= ~( VAR_7 >> VAR_22 );
  VAR_11 = VAR_20;
  VAR_12 = VAR_21;
  VAR_10 = VAR_22;
}
