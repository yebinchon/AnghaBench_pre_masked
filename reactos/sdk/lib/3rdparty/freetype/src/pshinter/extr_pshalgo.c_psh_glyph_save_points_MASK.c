
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {size_t num_points; TYPE_1__* outline; TYPE_2__* points; } ;
struct TYPE_8__ {int flags_x; int flags2; int flags; int flags_y; int cur_u; int cur_y; int cur_x; } ;
struct TYPE_7__ {char* tags; TYPE_4__* points; } ;
typedef TYPE_2__* PSH_Point ;
typedef TYPE_3__* PSH_Glyph ;
typedef TYPE_4__ FT_Vector ;
typedef size_t FT_UInt ;
typedef scalar_t__ FT_Int ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_1( PSH_Glyph VAR_0,
                         FT_Int VAR_1 )
  {
    FT_UInt VAR_2;
    PSH_Point VAR_3 = VAR_0->points;
    FT_Vector* VAR_4 = VAR_0->outline->points;
    char* VAR_5 = VAR_0->outline->tags;


    for ( VAR_2 = 0; VAR_2 < VAR_0->num_points; VAR_2++ )
    {
      if ( VAR_1 == 0 )
        VAR_4[VAR_2].x = VAR_3->cur_u;
      else
        VAR_4[VAR_2].y = VAR_3->cur_u;

      if ( FUNC_0( VAR_3 ) )
        VAR_5[VAR_2] |= (char)( ( VAR_1 == 0 ) ? 32 : 64 );
      VAR_3++;
    }
  }
