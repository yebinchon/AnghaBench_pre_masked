
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int increase_x_height; int glyph_styles; } ;
struct TYPE_12__ {size_t fallback_style; size_t default_script; int no_stem_darkening; int * darken_params; int warping; } ;
struct TYPE_11__ {size_t script; } ;
struct TYPE_10__ {int map; int face; } ;
struct TYPE_9__ {int limit; int face; } ;
typedef size_t FT_UInt ;
typedef TYPE_1__ FT_Prop_IncreaseXHeight ;
typedef TYPE_2__ FT_Prop_GlyphToScriptMap ;
typedef int FT_Module ;
typedef int FT_Int ;
typedef int FT_Error ;
typedef int FT_Bool ;
typedef TYPE_3__* AF_StyleClass ;
typedef TYPE_4__* AF_Module ;
typedef TYPE_5__* AF_FaceGlobals ;


 TYPE_3__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_5__**,TYPE_4__*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static FT_Error
  FUNC_4( FT_Module VAR_3,
                   const char* VAR_4,
                   void* VAR_5 )
  {
    FT_Error VAR_6 = VAR_1;
    AF_Module VAR_7 = (AF_Module)VAR_3;
    FT_UInt VAR_8 = VAR_7->fallback_style;
    FT_UInt VAR_9 = VAR_7->default_script;





    if ( !FUNC_3( VAR_4, "glyph-to-script-map" ) )
    {
      FT_Prop_GlyphToScriptMap* VAR_10 = (FT_Prop_GlyphToScriptMap*)VAR_5;
      AF_FaceGlobals VAR_11;


      VAR_6 = FUNC_2( VAR_10->face, &VAR_11, VAR_7 );
      if ( !VAR_6 )
        VAR_10->map = VAR_11->glyph_styles;

      return VAR_6;
    }
    else if ( !FUNC_3( VAR_4, "fallback-script" ) )
    {
      FT_UInt* VAR_12 = (FT_UInt*)VAR_5;

      AF_StyleClass VAR_13 = VAR_0[VAR_8];


      *VAR_12 = VAR_13->script;

      return VAR_6;
    }
    else if ( !FUNC_3( VAR_4, "default-script" ) )
    {
      FT_UInt* VAR_14 = (FT_UInt*)VAR_5;


      *VAR_14 = VAR_9;

      return VAR_6;
    }
    else if ( !FUNC_3( VAR_4, "increase-x-height" ) )
    {
      FT_Prop_IncreaseXHeight* VAR_15 = (FT_Prop_IncreaseXHeight*)VAR_5;
      AF_FaceGlobals VAR_16;


      VAR_6 = FUNC_2( VAR_15->face, &VAR_16, VAR_7 );
      if ( !VAR_6 )
        VAR_15->limit = VAR_16->increase_x_height;

      return VAR_6;
    }
    else if ( !FUNC_3( VAR_4, "darkening-parameters" ) )
    {
      FT_Int* VAR_17 = VAR_7->darken_params;
      FT_Int* VAR_18 = (FT_Int*)VAR_5;


      VAR_18[0] = VAR_17[0];
      VAR_18[1] = VAR_17[1];
      VAR_18[2] = VAR_17[2];
      VAR_18[3] = VAR_17[3];
      VAR_18[4] = VAR_17[4];
      VAR_18[5] = VAR_17[5];
      VAR_18[6] = VAR_17[6];
      VAR_18[7] = VAR_17[7];

      return VAR_6;
    }
    else if ( !FUNC_3( VAR_4, "no-stem-darkening" ) )
    {
      FT_Bool VAR_19 = VAR_7->no_stem_darkening;
      FT_Bool* VAR_20 = (FT_Bool*)VAR_5;


      *VAR_20 = VAR_19;

      return VAR_6;
    }

    FUNC_1(( "af_property_get: missing property `%s'\n",
                VAR_4 ));
    return FUNC_0( VAR_2 );
  }
