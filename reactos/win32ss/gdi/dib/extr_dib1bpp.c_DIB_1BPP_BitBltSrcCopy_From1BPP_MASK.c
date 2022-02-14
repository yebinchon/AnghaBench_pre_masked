
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int XLATEOBJ ;
struct TYPE_10__ {int x; int y; } ;
struct TYPE_9__ {int left; int right; int top; int bottom; } ;
struct TYPE_8__ {int lDelta; scalar_t__ pvScan0; } ;
typedef TYPE_1__ SURFOBJ ;
typedef TYPE_2__* PRECTL ;
typedef TYPE_3__ POINTL ;
typedef int* PBYTE ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static
void
FUNC_1 (
                                 SURFOBJ* VAR_0,
                                 SURFOBJ* VAR_1,
                                 XLATEOBJ* VAR_2,
                                 PRECTL VAR_3,
                                 POINTL *VAR_4 )
{



  int VAR_5, VAR_6;
  int VAR_7;


  int VAR_8 = VAR_3->left;
  int VAR_9 = VAR_3->right-1;
  int VAR_10 = VAR_4->x;
  int VAR_11 = VAR_10 + VAR_9 - VAR_8;


  int VAR_12;
  int VAR_13;
  int VAR_14, VAR_15;


  int VAR_16;
  int VAR_17;
  int VAR_18;
  int VAR_19;

  int VAR_20;
  BYTE VAR_21, VAR_22, VAR_23;



  PBYTE VAR_24, VAR_25;
  PBYTE VAR_26, VAR_27;

  VAR_20 = (VAR_8-VAR_10)&7;

  VAR_23 = 0xFF * (BYTE)FUNC_0(VAR_2, 0);

  if ( VAR_3->top <= VAR_4->y )
  {

    VAR_17 = VAR_3->top;
    VAR_18 = VAR_3->bottom - 1;
    VAR_19 = VAR_4->y;
    VAR_13 = 1;
    VAR_14 = VAR_1->lDelta;
    VAR_15 = VAR_0->lDelta;
  }
  else
  {

    VAR_17 = VAR_3->bottom - 1;
    VAR_18 = VAR_3->top;
    VAR_19 = VAR_4->y + VAR_17 - VAR_18;
    VAR_13 = -1;
    VAR_14 = -VAR_1->lDelta;
    VAR_15 = -VAR_0->lDelta;
  }
  if ( VAR_3->left <= VAR_4->x )
  {

    VAR_5 = VAR_8&~7;
    VAR_7 = (VAR_10-(VAR_8&7))&~7;
    VAR_6 = VAR_9&~7;
    VAR_12 = 1;
  }
  else
  {

    VAR_5 = VAR_9 & ~7;
    VAR_7 = (VAR_11 - (VAR_9 & 7)) & ~7;
    VAR_6 = VAR_8 & ~7;
    VAR_12 = -1;
  }
  VAR_24 = &(((PBYTE)VAR_0->pvScan0)[VAR_17*VAR_0->lDelta + (VAR_5>>3)]);
  VAR_26 = &(((PBYTE)VAR_1->pvScan0)[VAR_19*VAR_1->lDelta + (VAR_7>>3)]);
  for ( ;; )
  {
    VAR_16 = VAR_17;
    VAR_25 = VAR_24;
    VAR_27 = VAR_26;
    VAR_21 = 0xff;
    if ( VAR_5 < VAR_8 )
    {
      int VAR_28 = VAR_8-VAR_5;
      VAR_21 &= (1<<(8-VAR_28))-1;
    }
    if ( VAR_5+7 > VAR_9 )
    {
      int VAR_29 = VAR_9-VAR_5+1;
      VAR_21 &= ~((1<<(8-VAR_29))-1);
    }
    VAR_22 = ~VAR_21;




    if ( !VAR_20 )
    {
      for ( ;; )
      {
        *VAR_25 = (BYTE)((*VAR_25 & VAR_22) | ((VAR_27[0]^VAR_23) & VAR_21));


        if ( VAR_16 == VAR_18 )
          break;
        VAR_16 += VAR_13;
        VAR_25 += VAR_15;
        VAR_27 += VAR_14;
      }
    }
    else if ( !(0xFF00 & (VAR_21<<VAR_20) ) )
    {
      for ( ;; )
      {
        *VAR_25 = (BYTE)((*VAR_25 & VAR_22)
          | ( ( (VAR_27[1]^VAR_23) >> VAR_20 ) & VAR_21 ));


        if ( VAR_16 == VAR_18 )
          break;
        VAR_16 += VAR_13;
        VAR_25 += VAR_15;
        VAR_27 += VAR_14;
      }
    }
    else if ( !(0xFF & (VAR_21<<VAR_20) ) )
    {
      for ( ;; )
      {
        *VAR_25 = (*VAR_25 & VAR_22)
          | ( ( (VAR_27[0]^VAR_23) << ( 8 - VAR_20 ) ) & VAR_21 );


        if ( VAR_16 == VAR_18 )
          break;
        VAR_16 += VAR_13;
        VAR_25 += VAR_15;
        VAR_27 += VAR_14;
      }
    }
    else
    {
      for ( ;; )
      {
        *VAR_25 = (*VAR_25 & VAR_22)
          | ( ( ( ((VAR_27[1]^VAR_23))|((VAR_27[0]^VAR_23)<<8) ) >> VAR_20 ) & VAR_21 );


        if ( VAR_16 == VAR_18 )
          break;
        VAR_16 += VAR_13;
        VAR_25 += VAR_15;
        VAR_27 += VAR_14;
      }
    }


    if ( VAR_5 == VAR_6 )
      break;
    VAR_24 += VAR_12;
    VAR_26 += VAR_12;
    VAR_5 += VAR_12<<3;
    VAR_7 += VAR_12<<3;
  }
}
