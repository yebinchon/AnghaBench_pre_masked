
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_19__ ;


struct TYPE_36__ {TYPE_6__* dimension; } ;
struct TYPE_35__ {scalar_t__ n_points; scalar_t__ n_contours; } ;
struct TYPE_34__ {scalar_t__ scale_mult; } ;
struct TYPE_31__ {TYPE_1__* zones; } ;
struct TYPE_29__ {TYPE_2__ normal_top; } ;
struct TYPE_33__ {TYPE_19__ blues; int memory; } ;
struct TYPE_32__ {int do_horz_hints; int do_vert_hints; TYPE_8__* globals; int * hint_tables; void* do_stem_adjust; void* do_vert_snapping; void* do_horz_snapping; } ;
struct TYPE_30__ {int org_ref; } ;
typedef int PS_Hints ;
typedef TYPE_3__ PSH_GlyphRec ;
typedef TYPE_3__* PSH_Glyph ;
typedef TYPE_5__* PSH_Globals ;
typedef TYPE_6__* PSH_Dimension ;
typedef scalar_t__ FT_Render_Mode ;
typedef TYPE_7__ FT_Outline ;
typedef int FT_Memory ;
typedef int FT_Int ;
typedef scalar_t__ FT_Fixed ;
typedef scalar_t__ FT_Error ;
typedef scalar_t__ FT_Bool ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_6 (TYPE_8__*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_19__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_7__*,int ,TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*,int) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (int *,TYPE_8__*,int,TYPE_3__*) ;

FT_Error
  FUNC_18( PS_Hints VAR_8,
                  FT_Outline* VAR_9,
                  PSH_Globals VAR_10,
                  FT_Render_Mode VAR_11 )
  {
    PSH_GlyphRec VAR_12;
    PSH_Glyph VAR_13 = &VAR_12;
    FT_Error VAR_14;



    FT_Int VAR_15;



    if ( VAR_9->n_points == 0 || VAR_9->n_contours == 0 )
      return VAR_1;
    VAR_14 = FUNC_11( VAR_13, VAR_9, VAR_8, VAR_10 );
    if ( VAR_14 )
      goto Exit;




    {
      PSH_Dimension VAR_16 = &VAR_13->globals->dimension[0];
      PSH_Dimension VAR_17 = &VAR_13->globals->dimension[1];

      FT_Fixed VAR_18 = VAR_16->scale_mult;
      FT_Fixed VAR_19 = VAR_17->scale_mult;

      FT_Fixed VAR_20 = VAR_18;
      FT_Fixed VAR_21 = VAR_19;

      FT_Fixed VAR_22;
      FT_Fixed VAR_23;

      FT_Bool VAR_24 = VAR_0;


      VAR_22 = FUNC_3( VAR_10->blues.normal_top.zones->org_ref, VAR_19 );
      VAR_23 = FUNC_5( VAR_22 );

      if ( VAR_23 != 0 && VAR_22 != VAR_23 )
      {
        VAR_24 = VAR_6;

        VAR_19 = FUNC_2( VAR_19, VAR_23, VAR_22 );

        if ( VAR_23 < VAR_22 )
          VAR_18 -= VAR_18 / 50;

        FUNC_6( VAR_13->globals, VAR_18, VAR_19, 0, 0 );
      }

      VAR_13->do_horz_hints = 1;
      VAR_13->do_vert_hints = 1;

      VAR_13->do_horz_snapping = FUNC_0( VAR_11 == VAR_5 ||
                                         VAR_11 == VAR_2 );

      VAR_13->do_vert_snapping = FUNC_0( VAR_11 == VAR_5 ||
                                         VAR_11 == VAR_3 );

      VAR_13->do_stem_adjust = FUNC_0( VAR_11 != VAR_4 );

      for ( VAR_15 = 0; VAR_15 < 2; VAR_15++ )
      {

        FUNC_15( VAR_13, VAR_15 );


        FUNC_7( VAR_13 );


        FUNC_17( &VAR_13->hint_tables[VAR_15],
                                    VAR_13->globals,
                                    VAR_15,
                                    VAR_13 );


        FUNC_10( VAR_13, VAR_15 );
        if ( VAR_15 == 1 )
          FUNC_9( &VAR_10->blues, VAR_13 );
        FUNC_14( VAR_13, VAR_15 );
        FUNC_12( VAR_13, VAR_15 );
        FUNC_13( VAR_13, VAR_15 );


        FUNC_16( VAR_13, VAR_15 );

        if ( VAR_24 )
          FUNC_6( VAR_13->globals,
                                 VAR_20, VAR_21, 0, 0 );
      }
    }

  Exit:


    FUNC_8( VAR_13 );


    return VAR_14;
  }
