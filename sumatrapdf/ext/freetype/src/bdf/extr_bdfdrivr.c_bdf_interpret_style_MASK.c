
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* atom; } ;
struct TYPE_10__ {scalar_t__ format; TYPE_1__ value; } ;
typedef TYPE_2__ bdf_property_t ;
typedef int bdf_font_t ;
struct TYPE_12__ {int * bdffont; } ;
struct TYPE_11__ {char* style_name; int style_flags; int memory; } ;
typedef int FT_Memory ;
typedef TYPE_3__* FT_Face ;
typedef int FT_Error ;
typedef TYPE_4__* BDF_Face ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,size_t) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static FT_Error
  FUNC_5( BDF_Face VAR_4 )
  {
    FT_Error VAR_5 = VAR_1;
    FT_Face VAR_6 = FUNC_1( VAR_4 );
    FT_Memory VAR_7 = VAR_6->memory;
    bdf_font_t* VAR_8 = VAR_4->bdffont;
    bdf_property_t* VAR_9;

    char* VAR_10[4] = { ((void*)0), ((void*)0), ((void*)0), ((void*)0) };
    size_t VAR_11, VAR_12, VAR_13[4];


    VAR_6->style_flags = 0;

    VAR_9 = FUNC_2( VAR_8, (char *)"SLANT" );
    if ( VAR_9 && VAR_9->format == VAR_0 &&
         VAR_9->value.atom &&
         ( *(VAR_9->value.atom) == 'O' || *(VAR_9->value.atom) == 'o' ||
           *(VAR_9->value.atom) == 'I' || *(VAR_9->value.atom) == 'i' ) )
    {
      VAR_6->style_flags |= VAR_3;
      VAR_10[2] = ( *(VAR_9->value.atom) == 'O' || *(VAR_9->value.atom) == 'o' )
                   ? (char *)"Oblique"
                   : (char *)"Italic";
    }

    VAR_9 = FUNC_2( VAR_8, (char *)"WEIGHT_NAME" );
    if ( VAR_9 && VAR_9->format == VAR_0 &&
         VAR_9->value.atom &&
         ( *(VAR_9->value.atom) == 'B' || *(VAR_9->value.atom) == 'b' ) )
    {
      VAR_6->style_flags |= VAR_2;
      VAR_10[1] = (char *)"Bold";
    }

    VAR_9 = FUNC_2( VAR_8, (char *)"SETWIDTH_NAME" );
    if ( VAR_9 && VAR_9->format == VAR_0 &&
         VAR_9->value.atom && *(VAR_9->value.atom) &&
         !( *(VAR_9->value.atom) == 'N' || *(VAR_9->value.atom) == 'n' ) )
      VAR_10[3] = (char *)(VAR_9->value.atom);

    VAR_9 = FUNC_2( VAR_8, (char *)"ADD_STYLE_NAME" );
    if ( VAR_9 && VAR_9->format == VAR_0 &&
         VAR_9->value.atom && *(VAR_9->value.atom) &&
         !( *(VAR_9->value.atom) == 'N' || *(VAR_9->value.atom) == 'n' ) )
      VAR_10[0] = (char *)(VAR_9->value.atom);

    for ( VAR_12 = 0, VAR_11 = 0; VAR_11 < 4; VAR_11++ )
    {
      VAR_13[VAR_11] = 0;
      if ( VAR_10[VAR_11] )
      {
        VAR_13[VAR_11] = FUNC_4( VAR_10[VAR_11] );
        VAR_12 += VAR_13[VAR_11] + 1;
      }
    }

    if ( VAR_12 == 0 )
    {
      VAR_10[0] = (char *)"Regular";
      VAR_13[0] = FUNC_4( VAR_10[0] );
      VAR_12 = VAR_13[0] + 1;
    }

    {
      char* VAR_14;


      if ( FUNC_0( VAR_6->style_name, VAR_12 ) )
        return VAR_5;

      VAR_14 = VAR_6->style_name;

      for ( VAR_11 = 0; VAR_11 < 4; VAR_11++ )
      {
        char* VAR_15 = VAR_10[VAR_11];


        VAR_12 = VAR_13[VAR_11];

        if ( !VAR_15 )
          continue;


        if ( VAR_14 != VAR_6->style_name )
          *VAR_14++ = ' ';

        FUNC_3( VAR_14, VAR_15, VAR_12 );



        if ( VAR_11 == 0 || VAR_11 == 3 )
        {
          size_t VAR_16;


          for ( VAR_16 = 0; VAR_16 < VAR_12; VAR_16++ )
            if ( VAR_14[VAR_16] == ' ' )
              VAR_14[VAR_16] = '-';
        }

        VAR_14 += VAR_12;
      }
      *VAR_14 = 0;
    }

    return VAR_5;
  }
