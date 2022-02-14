
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int increase_x_height; } ;
struct TYPE_10__ {size_t fallback_style; size_t default_script; int warping; void* no_stem_darkening; scalar_t__* darken_params; } ;
struct TYPE_9__ {scalar_t__ coverage; scalar_t__ script; } ;
struct TYPE_8__ {int limit; int face; } ;
typedef size_t FT_UInt ;
typedef TYPE_1__ FT_Prop_IncreaseXHeight ;
typedef int FT_Module ;
typedef scalar_t__ FT_Int ;
typedef int FT_Error ;
typedef void* FT_Bool ;
typedef TYPE_2__* AF_StyleClass ;
typedef TYPE_3__* AF_Module ;
typedef TYPE_4__* AF_FaceGlobals ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (int ,TYPE_4__**,TYPE_3__*) ;
 TYPE_2__** VAR_6 ;
 int FUNC_4 (char const*,char*) ;
 long FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static FT_Error
  FUNC_6( FT_Module VAR_7,
                   const char* VAR_8,
                   const void* VAR_9,
                   FT_Bool VAR_10 )
  {
    FT_Error VAR_11 = VAR_2;
    AF_Module VAR_12 = (AF_Module)VAR_7;


    FUNC_2( VAR_10 );



    if ( !FUNC_4( VAR_8, "fallback-script" ) )
    {
      FT_UInt* VAR_13;
      FT_UInt VAR_14;







      VAR_13 = (FT_UInt*)VAR_9;




      for ( VAR_14 = 0; VAR_6[VAR_14]; VAR_14++ )
      {
        AF_StyleClass VAR_15 = VAR_6[VAR_14];


        if ( (FT_UInt)VAR_15->script == *VAR_13 &&
             VAR_15->coverage == VAR_0 )
        {
          VAR_12->fallback_style = VAR_14;
          break;
        }
      }

      if ( !VAR_6[VAR_14] )
      {
        FUNC_1(( "af_property_set: Invalid value %d for property `%s'\n",
                    VAR_13, VAR_8 ));
        return FUNC_0( VAR_3 );
      }

      return VAR_11;
    }
    else if ( !FUNC_4( VAR_8, "default-script" ) )
    {
      FT_UInt* VAR_16;







      VAR_16 = (FT_UInt*)VAR_9;

      VAR_12->default_script = *VAR_16;

      return VAR_11;
    }
    else if ( !FUNC_4( VAR_8, "increase-x-height" ) )
    {
      FT_Prop_IncreaseXHeight* VAR_17;
      AF_FaceGlobals VAR_18;







      VAR_17 = (FT_Prop_IncreaseXHeight*)VAR_9;

      VAR_11 = FUNC_3( VAR_17->face, &VAR_18, VAR_12 );
      if ( !VAR_11 )
        VAR_18->increase_x_height = VAR_17->limit;

      return VAR_11;
    }
    else if ( !FUNC_4( VAR_8, "darkening-parameters" ) )
    {
      FT_Int* VAR_19;
      FT_Int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
        VAR_19 = (FT_Int*)VAR_9;

      VAR_20 = VAR_19[0];
      VAR_21 = VAR_19[1];
      VAR_22 = VAR_19[2];
      VAR_23 = VAR_19[3];
      VAR_24 = VAR_19[4];
      VAR_25 = VAR_19[5];
      VAR_26 = VAR_19[6];
      VAR_27 = VAR_19[7];

      if ( VAR_20 < 0 || VAR_22 < 0 || VAR_24 < 0 || VAR_26 < 0 ||
           VAR_21 < 0 || VAR_23 < 0 || VAR_25 < 0 || VAR_27 < 0 ||
           VAR_20 > VAR_22 || VAR_22 > VAR_24 || VAR_24 > VAR_26 ||
           VAR_21 > 500 || VAR_23 > 500 || VAR_25 > 500 || VAR_27 > 500 )
        return FUNC_0( VAR_3 );

      VAR_12->darken_params[0] = VAR_20;
      VAR_12->darken_params[1] = VAR_21;
      VAR_12->darken_params[2] = VAR_22;
      VAR_12->darken_params[3] = VAR_23;
      VAR_12->darken_params[4] = VAR_24;
      VAR_12->darken_params[5] = VAR_25;
      VAR_12->darken_params[6] = VAR_26;
      VAR_12->darken_params[7] = VAR_27;

      return VAR_11;
    }
    else if ( !FUNC_4( VAR_8, "no-stem-darkening" ) )
    {
      {
        FT_Bool* VAR_28 = (FT_Bool*)VAR_9;


        VAR_12->no_stem_darkening = *VAR_28;
      }

      return VAR_11;
    }

    FUNC_1(( "af_property_set: missing property `%s'\n",
                VAR_8 ));
    return FUNC_0( VAR_4 );
  }
