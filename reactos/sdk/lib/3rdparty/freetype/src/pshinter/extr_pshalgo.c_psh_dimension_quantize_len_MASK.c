
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* widths; } ;
struct TYPE_7__ {TYPE_2__ stdw; } ;
struct TYPE_5__ {int cur; } ;
typedef TYPE_3__* PSH_Dimension ;
typedef int FT_Pos ;
typedef scalar_t__ FT_Bool ;


 int FUNC_0 (int) ;

__attribute__((used)) static FT_Pos
  FUNC_1( PSH_Dimension VAR_0,
                              FT_Pos VAR_1,
                              FT_Bool VAR_2 )
  {
    if ( VAR_1 <= 64 )
      VAR_1 = 64;
    else
    {
      FT_Pos VAR_3 = VAR_1 - VAR_0->stdw.widths[0].cur;


      if ( VAR_3 < 0 )
        VAR_3 = -VAR_3;

      if ( VAR_3 < 40 )
      {
        VAR_1 = VAR_0->stdw.widths[0].cur;
        if ( VAR_1 < 48 )
          VAR_1 = 48;
      }

      if ( VAR_1 < 3 * 64 )
      {
        VAR_3 = ( VAR_1 & 63 );
        VAR_1 &= -64;

        if ( VAR_3 < 10 )
          VAR_1 += VAR_3;

        else if ( VAR_3 < 32 )
          VAR_1 += 10;

        else if ( VAR_3 < 54 )
          VAR_1 += 54;

        else
          VAR_1 += VAR_3;
      }
      else
        VAR_1 = FUNC_0( VAR_1 );
    }

    if ( VAR_2 )
      VAR_1 = FUNC_0( VAR_1 );

    return VAR_1;
  }
