
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ count; TYPE_4__* zones; } ;
struct TYPE_14__ {scalar_t__ org_bottom; scalar_t__ org_top; int cur_top; int cur_bottom; } ;
struct TYPE_13__ {scalar_t__ blue_fuzz; scalar_t__ blue_threshold; scalar_t__ no_overshoots; TYPE_5__ normal_bottom; TYPE_5__ normal_top; } ;
struct TYPE_12__ {scalar_t__ num_points; TYPE_1__* points; } ;
struct TYPE_11__ {scalar_t__ org_u; int cur_u; int dir_out; int dir_in; } ;
typedef TYPE_1__* PSH_Point ;
typedef TYPE_2__* PSH_Glyph ;
typedef TYPE_3__* PSH_Blues ;
typedef TYPE_4__* PSH_Blue_Zone ;
typedef TYPE_5__* PSH_Blue_Table ;
typedef scalar_t__ FT_UInt ;
typedef scalar_t__ FT_Pos ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_4( PSH_Blues VAR_1,
                              PSH_Glyph VAR_2 )
  {
    PSH_Blue_Table VAR_3;
    PSH_Blue_Zone VAR_4;
    FT_UInt VAR_5 = VAR_2->num_points;
    FT_UInt VAR_6;
    PSH_Point VAR_7 = VAR_2->points;


    for ( ; VAR_5 > 0; VAR_5--, VAR_7++ )
    {
      FT_Pos VAR_8;



      if ( !FUNC_0( VAR_7->dir_in, VAR_0 ) &&
           !FUNC_0( VAR_7->dir_out, VAR_0 ) )
        continue;


      if ( FUNC_1( VAR_7 ) )
        continue;

      VAR_8 = VAR_7->org_u;


      VAR_3 = &VAR_1->normal_top;
      VAR_6 = VAR_3->count;
      VAR_4 = VAR_3->zones;

      for ( ; VAR_6 > 0; VAR_6--, VAR_4++ )
      {
        FT_Pos VAR_9 = VAR_8 - VAR_4->org_bottom;


        if ( VAR_9 < -VAR_1->blue_fuzz )
          break;

        if ( VAR_8 <= VAR_4->org_top + VAR_1->blue_fuzz )
          if ( VAR_1->no_overshoots || VAR_9 <= VAR_1->blue_threshold )
          {
            VAR_7->cur_u = VAR_4->cur_bottom;
            FUNC_3( VAR_7 );
            FUNC_2( VAR_7 );
          }
      }


      VAR_3 = &VAR_1->normal_bottom;
      VAR_6 = VAR_3->count;
      VAR_4 = VAR_3->zones + VAR_6 - 1;

      for ( ; VAR_6 > 0; VAR_6--, VAR_4-- )
      {
        FT_Pos VAR_10 = VAR_4->org_top - VAR_8;


        if ( VAR_10 < -VAR_1->blue_fuzz )
          break;

        if ( VAR_8 >= VAR_4->org_bottom - VAR_1->blue_fuzz )
          if ( VAR_1->no_overshoots || VAR_10 < VAR_1->blue_threshold )
          {
            VAR_7->cur_u = VAR_4->cur_top;
            FUNC_3( VAR_7 );
            FUNC_2( VAR_7 );
          }
      }
    }
  }
