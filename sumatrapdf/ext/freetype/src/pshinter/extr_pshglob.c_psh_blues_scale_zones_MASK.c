
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int count; TYPE_2__* zones; } ;
struct TYPE_6__ {int cur_top; int org_top; int cur_bottom; int org_bottom; int cur_ref; int org_ref; int cur_delta; int org_delta; } ;
struct TYPE_5__ {int blue_scale; scalar_t__ blue_shift; TYPE_3__ family_bottom; TYPE_3__ normal_bottom; TYPE_3__ family_top; TYPE_3__ normal_top; scalar_t__ blue_threshold; void* no_overshoots; } ;
typedef TYPE_1__* PSH_Blues ;
typedef TYPE_2__* PSH_Blue_Zone ;
typedef TYPE_3__* PSH_Blue_Table ;
typedef int FT_UInt ;
typedef int FT_Pos ;
typedef scalar_t__ FT_Int ;
typedef int FT_Fixed ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
  FUNC_3( PSH_Blues VAR_0,
                         FT_Fixed VAR_1,
                         FT_Pos VAR_2 )
  {
    FT_UInt VAR_3;
    FT_UInt VAR_4;
    PSH_Blue_Table VAR_5 = ((void*)0);
    if ( VAR_1 >= 0x20C49BAL )
      VAR_0->no_overshoots = FUNC_0( VAR_1 < VAR_0->blue_scale * 8 / 125 );
    else
      VAR_0->no_overshoots = FUNC_0( VAR_1 * 125 < VAR_0->blue_scale * 8 );
    {
      FT_Int VAR_6 = VAR_0->blue_shift;


      while ( VAR_6 > 0 && FUNC_1( VAR_6, VAR_1 ) > 32 )
        VAR_6--;

      VAR_0->blue_threshold = VAR_6;
    }

    for ( VAR_4 = 0; VAR_4 < 4; VAR_4++ )
    {
      PSH_Blue_Zone VAR_7;


      switch ( VAR_4 )
      {
      case 0:
        VAR_5 = &VAR_0->normal_top;
        break;
      case 1:
        VAR_5 = &VAR_0->normal_bottom;
        break;
      case 2:
        VAR_5 = &VAR_0->family_top;
        break;
      default:
        VAR_5 = &VAR_0->family_bottom;
        break;
      }

      VAR_7 = VAR_5->zones;
      VAR_3 = VAR_5->count;
      for ( ; VAR_3 > 0; VAR_3--, VAR_7++ )
      {
        VAR_7->cur_top = FUNC_1( VAR_7->org_top, VAR_1 ) + VAR_2;
        VAR_7->cur_bottom = FUNC_1( VAR_7->org_bottom, VAR_1 ) + VAR_2;
        VAR_7->cur_ref = FUNC_1( VAR_7->org_ref, VAR_1 ) + VAR_2;
        VAR_7->cur_delta = FUNC_1( VAR_7->org_delta, VAR_1 );


        VAR_7->cur_ref = FUNC_2( VAR_7->cur_ref );







      }
    }



    for ( VAR_4 = 0; VAR_4 < 2; VAR_4++ )
    {
      PSH_Blue_Zone VAR_8, VAR_9;
      FT_UInt VAR_10, VAR_11;
      PSH_Blue_Table VAR_12, VAR_13;


      switch ( VAR_4 )
      {
      case 0:
        VAR_12 = &VAR_0->normal_top;
        VAR_13 = &VAR_0->family_top;
        break;

      default:
        VAR_12 = &VAR_0->normal_bottom;
        VAR_13 = &VAR_0->family_bottom;
      }

      VAR_8 = VAR_12->zones;
      VAR_10 = VAR_12->count;

      for ( ; VAR_10 > 0; VAR_10--, VAR_8++ )
      {


        VAR_9 = VAR_13->zones;
        VAR_11 = VAR_13->count;

        for ( ; VAR_11 > 0; VAR_11--, VAR_9++ )
        {
          FT_Pos VAR_14;


          VAR_14 = VAR_8->org_ref - VAR_9->org_ref;
          if ( VAR_14 < 0 )
            VAR_14 = -VAR_14;

          if ( FUNC_1( VAR_14, VAR_1 ) < 64 )
          {
            VAR_8->cur_top = VAR_9->cur_top;
            VAR_8->cur_bottom = VAR_9->cur_bottom;
            VAR_8->cur_ref = VAR_9->cur_ref;
            VAR_8->cur_delta = VAR_9->cur_delta;
            break;
          }
        }
      }
    }
  }
