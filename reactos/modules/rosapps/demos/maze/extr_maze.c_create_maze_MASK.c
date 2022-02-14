
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t x; size_t y; int dir; } ;
struct TYPE_3__ {size_t x; size_t y; int dir; } ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int** VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 size_t VAR_10 ;

__attribute__((used)) static void
FUNC_4()
{
  register int VAR_11, VAR_12 = 0;
  HDC VAR_13;

  VAR_13 = FUNC_0(VAR_5);
  do {
    VAR_7[VAR_10].x = VAR_3;
    VAR_7[VAR_10].y = VAR_4;
    VAR_7[VAR_10].dir = VAR_12;
    while ( ( VAR_12 = FUNC_3(VAR_13) ) == -1 ) {
      if ( FUNC_2() == -1 ) {
     FUNC_1(VAR_5, VAR_13);
  return;
      }
    }


    VAR_6[VAR_3][VAR_4] |= ( VAR_1 >> VAR_12 );

    switch (VAR_12) {
    case 0: VAR_4--;
      break;
    case 1: VAR_3++;
      break;
    case 2: VAR_4++;
      break;
    case 3: VAR_3--;
      break;
    }
    VAR_10++;


    VAR_6[VAR_3][VAR_4] |= ( VAR_0 >> ((VAR_12+2)%4) );


    if ( VAR_6[VAR_3][VAR_4] & VAR_2 ) {
      VAR_8 = VAR_10;
      for ( VAR_11=0; VAR_11<VAR_8; VAR_11++) {
 VAR_9[VAR_11].x = VAR_7[VAR_11].x;
 VAR_9[VAR_11].y = VAR_7[VAR_11].y;
 VAR_9[VAR_11].dir = VAR_7[VAR_11].dir;
      }
    }

  } while (1);

}
