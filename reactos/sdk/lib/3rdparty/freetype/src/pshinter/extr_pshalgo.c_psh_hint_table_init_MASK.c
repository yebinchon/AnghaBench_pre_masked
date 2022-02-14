
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int flags; int org_len; int org_pos; } ;
struct TYPE_17__ {int max_hints; int num_hints; TYPE_1__* hint_masks; TYPE_5__* hints; int * zone; scalar_t__ num_zones; TYPE_5__* sort; TYPE_5__* sort_global; TYPE_5__* zones; } ;
struct TYPE_16__ {int flags; int len; int pos; } ;
struct TYPE_15__ {int num_hints; TYPE_3__* hints; } ;
struct TYPE_14__ {int num_masks; int masks; } ;
typedef TYPE_1__* PS_Mask_Table ;
typedef int PS_Mask ;
typedef TYPE_2__* PS_Hint_Table ;
typedef TYPE_3__* PS_Hint ;
typedef TYPE_4__* PSH_Hint_Table ;
typedef TYPE_5__* PSH_Hint ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef int FT_Error ;


 scalar_t__ FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static FT_Error
  FUNC_5( PSH_Hint_Table VAR_0,
                       PS_Hint_Table VAR_1,
                       PS_Mask_Table VAR_2,
                       PS_Mask_Table VAR_3,
                       FT_Memory VAR_4 )
  {
    FT_UInt VAR_5;
    FT_Error VAR_6;

    FUNC_2( VAR_3 );


    VAR_5 = VAR_1->num_hints;


    if ( FUNC_0( VAR_0->sort, 2 * VAR_5 ) ||
         FUNC_0( VAR_0->hints, VAR_5 ) ||
         FUNC_0( VAR_0->zones, 2 * VAR_5 + 1 ) )
      goto Exit;

    VAR_0->max_hints = VAR_5;
    VAR_0->sort_global = VAR_0->sort + VAR_5;
    VAR_0->num_hints = 0;
    VAR_0->num_zones = 0;
    VAR_0->zone = ((void*)0);


    {
      PSH_Hint VAR_7 = VAR_0->hints;
      PS_Hint VAR_8 = VAR_1->hints;


      for ( ; VAR_5 > 0; VAR_5--, VAR_7++, VAR_8++ )
      {
        VAR_7->org_pos = VAR_8->pos;
        VAR_7->org_len = VAR_8->len;
        VAR_7->flags = VAR_8->flags;
      }
    }



    if ( VAR_2 )
    {
      PS_Mask VAR_9 = VAR_2->masks;


      VAR_5 = VAR_2->num_masks;
      VAR_0->hint_masks = VAR_2;

      for ( ; VAR_5 > 0; VAR_5--, VAR_9++ )
        FUNC_4( VAR_0, VAR_9 );
    }


    if ( VAR_0->num_hints != VAR_0->max_hints )
    {
      FT_UInt VAR_10;


      FUNC_1(( "psh_hint_table_init: missing/incorrect hint masks\n" ));

      VAR_5 = VAR_0->max_hints;
      for ( VAR_10 = 0; VAR_10 < VAR_5; VAR_10++ )
        FUNC_3( VAR_0, VAR_10 );
    }

  Exit:
    return VAR_6;
  }
