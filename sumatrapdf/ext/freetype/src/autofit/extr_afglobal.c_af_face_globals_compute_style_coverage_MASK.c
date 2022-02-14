
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {int* glyph_styles; size_t glyph_count; TYPE_1__* module; TYPE_2__* face; } ;
struct TYPE_20__ {TYPE_4__* script_uni_nonbase_ranges; TYPE_4__* script_uni_ranges; } ;
struct TYPE_19__ {scalar_t__ first; size_t last; } ;
struct TYPE_18__ {size_t script; scalar_t__ coverage; size_t style; } ;
struct TYPE_17__ {int charmap; } ;
struct TYPE_16__ {size_t default_script; int fallback_style; } ;
typedef int FT_UShort ;
typedef size_t FT_ULong ;
typedef size_t FT_UInt ;
typedef size_t FT_Long ;
typedef TYPE_2__* FT_Face ;
typedef scalar_t__ FT_Error ;
typedef int FT_CharMap ;
typedef TYPE_3__* AF_StyleClass ;
typedef TYPE_4__* AF_Script_UniRange ;
typedef TYPE_5__* AF_ScriptClass ;
typedef TYPE_6__* AF_FaceGlobals ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_0 (TYPE_2__*,size_t) ;
 size_t FUNC_1 (TYPE_2__*,size_t,size_t*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char*) ;
 TYPE_5__** VAR_7 ;
 int FUNC_5 (TYPE_6__*,TYPE_3__*,int*,int) ;
 TYPE_3__** VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static FT_Error
  FUNC_6( AF_FaceGlobals VAR_10 )
  {
    FT_Error VAR_11;
    FT_Face VAR_12 = VAR_10->face;
    FT_CharMap VAR_13 = VAR_12->charmap;
    FT_UShort* VAR_14 = VAR_10->glyph_styles;
    FT_UInt VAR_15;
    FT_UInt VAR_16;
    FT_UInt VAR_17 = ~0U;



    for ( VAR_16 = 0; VAR_16 < (FT_UInt)VAR_10->glyph_count; VAR_16++ )
      VAR_14[VAR_16] = VAR_4;

    VAR_11 = FUNC_2( VAR_12, VAR_5 );
    if ( VAR_11 )
    {




      VAR_11 = VAR_6;
      goto Exit;
    }


    for ( VAR_15 = 0; VAR_8[VAR_15]; VAR_15++ )
    {
      AF_StyleClass VAR_18 =
                            VAR_8[VAR_15];
      AF_ScriptClass VAR_19 =
                            VAR_7[VAR_18->script];
      AF_Script_UniRange VAR_20;


      if ( !VAR_19->script_uni_ranges )
        continue;





      if ( VAR_18->coverage == VAR_0 )
      {
        if ( (FT_UInt)VAR_18->script ==
             VAR_10->module->default_script )
          VAR_17 = VAR_15;

        for ( VAR_20 = VAR_19->script_uni_ranges;
              VAR_20->first != 0;
              VAR_20++ )
        {
          FT_ULong VAR_21 = VAR_20->first;
          FT_UInt VAR_22;


          VAR_22 = FUNC_0( VAR_12, VAR_21 );

          if ( VAR_22 != 0 &&
               VAR_22 < (FT_ULong)VAR_10->glyph_count &&
               ( VAR_14[VAR_22] & VAR_3 ) == VAR_4 )
            VAR_14[VAR_22] = (FT_UShort)VAR_15;

          for (;;)
          {
            VAR_21 = FUNC_1( VAR_12, VAR_21, &VAR_22 );

            if ( VAR_22 == 0 || VAR_21 > VAR_20->last )
              break;

            if ( VAR_22 < (FT_ULong)VAR_10->glyph_count &&
                 ( VAR_14[VAR_22] & VAR_3 ) == VAR_4 )
              VAR_14[VAR_22] = (FT_UShort)VAR_15;
          }
        }


        for ( VAR_20 = VAR_19->script_uni_nonbase_ranges;
              VAR_20->first != 0;
              VAR_20++ )
        {
          FT_ULong VAR_23 = VAR_20->first;
          FT_UInt VAR_24;


          VAR_24 = FUNC_0( VAR_12, VAR_23 );

          if ( VAR_24 != 0 &&
               VAR_24 < (FT_ULong)VAR_10->glyph_count &&
               ( VAR_14[VAR_24] & VAR_3 ) == (FT_UShort)VAR_15 )
            VAR_14[VAR_24] |= VAR_2;

          for (;;)
          {
            VAR_23 = FUNC_1( VAR_12, VAR_23, &VAR_24 );

            if ( VAR_24 == 0 || VAR_23 > VAR_20->last )
              break;

            if ( VAR_24 < (FT_ULong)VAR_10->glyph_count &&
                 ( VAR_14[VAR_24] & VAR_3 ) == (FT_UShort)VAR_15 )
              VAR_14[VAR_24] |= VAR_2;
          }
        }
      }
      else
      {

        FUNC_5( VAR_10, VAR_18, VAR_14, 0 );
      }
    }


    for ( VAR_15 = 0; VAR_8[VAR_15]; VAR_15++ )
    {
      AF_StyleClass VAR_25 = VAR_8[VAR_15];


      if ( VAR_25->coverage == VAR_0 )
        FUNC_5( VAR_10, VAR_25, VAR_14, 0 );
    }


    FUNC_5( VAR_10, VAR_8[VAR_17], VAR_14, 1 );


    for ( VAR_16 = 0x30; VAR_16 <= 0x39; VAR_16++ )
    {
      FT_UInt VAR_26 = FUNC_0( VAR_12, VAR_16 );


      if ( VAR_26 != 0 && VAR_26 < (FT_ULong)VAR_10->glyph_count )
        VAR_14[VAR_26] |= VAR_1;
    }

  Exit:




    if ( VAR_10->module->fallback_style != VAR_4 )
    {
      FT_Long VAR_27;


      for ( VAR_27 = 0; VAR_27 < VAR_10->glyph_count; VAR_27++ )
      {
        if ( ( VAR_14[VAR_27] & VAR_3 ) == VAR_4 )
        {
          VAR_14[VAR_27] &= ~VAR_3;
          VAR_14[VAR_27] |= VAR_10->module->fallback_style;
        }
      }
    }
    FUNC_3( VAR_12, VAR_13 );
    return VAR_11;
  }
