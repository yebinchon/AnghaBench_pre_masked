
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t count; TYPE_2__* widths; } ;
struct TYPE_9__ {int scale_mult; TYPE_1__ stdw; } ;
struct TYPE_8__ {TYPE_4__* dimension; } ;
struct TYPE_7__ {int cur; void* fit; int org; } ;
typedef TYPE_1__* PSH_Widths ;
typedef TYPE_2__* PSH_Width ;
typedef TYPE_3__* PSH_Globals ;
typedef TYPE_4__* PSH_Dimension ;
typedef size_t FT_UInt ;
typedef int FT_Pos ;
typedef int FT_Fixed ;


 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
  FUNC_2( PSH_Globals VAR_0,
                            FT_UInt VAR_1 )
  {
    PSH_Dimension VAR_2 = &VAR_0->dimension[VAR_1];
    PSH_Widths VAR_3 = &VAR_2->stdw;
    FT_UInt VAR_4 = VAR_3->count;
    PSH_Width VAR_5 = VAR_3->widths;
    PSH_Width VAR_6 = VAR_5;
    FT_Fixed VAR_7 = VAR_2->scale_mult;


    if ( VAR_4 > 0 )
    {
      VAR_5->cur = FUNC_0( VAR_5->org, VAR_7 );
      VAR_5->fit = FUNC_1( VAR_5->cur );

      VAR_5++;
      VAR_4--;

      for ( ; VAR_4 > 0; VAR_4--, VAR_5++ )
      {
        FT_Pos VAR_8, VAR_9;


        VAR_8 = FUNC_0( VAR_5->org, VAR_7 );
        VAR_9 = VAR_8 - VAR_6->cur;

        if ( VAR_9 < 0 )
          VAR_9 = -VAR_9;

        if ( VAR_9 < 128 )
          VAR_8 = VAR_6->cur;

        VAR_5->cur = VAR_8;
        VAR_5->fit = FUNC_1( VAR_8 );
      }
    }
  }
