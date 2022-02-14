
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_26__ {TYPE_6__* font; } ;
struct TYPE_20__ {int pixel_height; scalar_t__ avg_width; scalar_t__ max_width; int weight; int nominal_point_size; int horizontal_resolution; int vertical_resolution; scalar_t__ charset; scalar_t__ last_char; scalar_t__ first_char; scalar_t__ face_name_offset; scalar_t__ file_size; scalar_t__ external_leading; scalar_t__ italic; } ;
struct TYPE_25__ {char* family_name; int fnt_frame; TYPE_1__ header; int fnt_size; scalar_t__ offset; } ;
struct TYPE_24__ {int size; int y_ppem; int x_ppem; void* height; void* width; } ;
struct TYPE_23__ {int platform_id; int encoding; TYPE_3__* face; int encoding_id; } ;
struct TYPE_22__ {int num_faces; int face_flags; int style_flags; int num_fixed_sizes; scalar_t__ num_glyphs; char* family_name; char* style_name; TYPE_5__* available_sizes; scalar_t__ face_index; } ;
struct TYPE_21__ {int size; } ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef TYPE_2__* FT_Stream ;
typedef void* FT_Short ;
typedef int FT_Parameter ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Int ;
typedef TYPE_3__* FT_Face ;
typedef scalar_t__ FT_Error ;
typedef TYPE_4__ FT_CharMapRec ;
typedef TYPE_5__ FT_Bitmap_Size ;
typedef TYPE_6__* FNT_Font ;
typedef TYPE_7__* FNT_Face ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ,int *,TYPE_4__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 TYPE_3__* FUNC_5 (TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (char*,int,int) ;
 void* FUNC_8 (int,int,int) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int) ;
 void* FUNC_11 (int) ;
 scalar_t__ FUNC_12 (char*,int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_16 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_17 (TYPE_6__*,TYPE_2__*) ;
 scalar_t__ FUNC_18 (char*) ;

__attribute__((used)) static FT_Error
  FUNC_19( FT_Stream VAR_15,
                 FT_Face VAR_16,
                 FT_Int VAR_17,
                 FT_Int VAR_18,
                 FT_Parameter* VAR_19 )
  {
    FNT_Face VAR_20 = (FNT_Face)VAR_16;
    FT_Error VAR_21;
    FT_Memory VAR_22 = FUNC_6( VAR_20 );
    FT_Int VAR_23;

    FUNC_15( VAR_18 );
    FUNC_15( VAR_19 );


    FUNC_14(( "Windows FNT driver\n" ));

    VAR_23 = FUNC_1( VAR_17 ) & 0xFFFF;


    VAR_21 = FUNC_16( VAR_20, VAR_17 );
    if ( !VAR_21 && VAR_17 < 0 )
      goto Exit;

    if ( FUNC_4( VAR_21, VAR_13 ) )
    {

      FNT_Font VAR_24;

      if ( FUNC_9( VAR_20->font ) )
        goto Exit;

      VAR_16->num_faces = 1;

      VAR_24 = VAR_20->font;
      VAR_24->offset = 0;
      VAR_24->fnt_size = VAR_15->size;

      VAR_21 = FUNC_17( VAR_24, VAR_15 );

      if ( !VAR_21 )
      {
        if ( VAR_17 < 0 )
          goto Exit;

        if ( VAR_23 > 0 )
          VAR_21 = FUNC_13( VAR_8 );
      }
    }

    if ( VAR_21 )
      goto Fail;


    if ( !VAR_20->font->header.pixel_height )
    {
      FUNC_14(( "invalid pixel height\n" ));
      VAR_21 = FUNC_13( VAR_9 );
      goto Fail;
    }



    {
      FT_Face VAR_25 = FUNC_5( VAR_20 );
      FNT_Font VAR_26 = VAR_20->font;
      FT_ULong VAR_27;


      VAR_25->face_index = VAR_23;

      VAR_25->face_flags |= VAR_2 |
                          VAR_4;

      if ( VAR_26->header.avg_width == VAR_26->header.max_width )
        VAR_25->face_flags |= VAR_3;

      if ( VAR_26->header.italic )
        VAR_25->style_flags |= VAR_6;

      if ( VAR_26->header.weight >= 800 )
        VAR_25->style_flags |= VAR_5;


      if ( FUNC_10( VAR_25->available_sizes, 1 ) )
        goto Fail;

      VAR_25->num_fixed_sizes = 1;

      {
        FT_Bitmap_Size* VAR_28 = VAR_25->available_sizes;
        FT_UShort VAR_29, VAR_30;


        VAR_28->width = (FT_Short)VAR_26->header.avg_width;
        VAR_28->height = (FT_Short)( VAR_26->header.pixel_height +
                                    VAR_26->header.external_leading );
        VAR_28->size = VAR_26->header.nominal_point_size << 6;

        VAR_29 = VAR_26->header.horizontal_resolution;
        if ( !VAR_29 )
          VAR_29 = 72;

        VAR_30 = VAR_26->header.vertical_resolution;
        if ( !VAR_30 )
          VAR_30 = 72;

        VAR_28->y_ppem = FUNC_8( VAR_28->size, VAR_30, 72 );
        VAR_28->y_ppem = FUNC_11( VAR_28->y_ppem );
        if ( VAR_28->y_ppem > ( VAR_26->header.pixel_height << 6 ) )
        {
          FUNC_14(( "use pixel_height as the nominal height\n" ));

          VAR_28->y_ppem = VAR_26->header.pixel_height << 6;
          VAR_28->size = FUNC_8( VAR_28->y_ppem, 72, VAR_30 );
        }

        VAR_28->x_ppem = FUNC_8( VAR_28->size, VAR_29, 72 );
        VAR_28->x_ppem = FUNC_11( VAR_28->x_ppem );
      }

      {
        FT_CharMapRec VAR_31;


        VAR_31.encoding = VAR_1;

        VAR_31.platform_id = VAR_11;
        VAR_31.encoding_id = VAR_10;
        VAR_31.face = VAR_25;

        if ( VAR_26->header.charset == VAR_7 )
        {
          VAR_31.encoding = VAR_0;
          VAR_31.platform_id = VAR_12;

        }

        VAR_21 = FUNC_3( VAR_14,
                             ((void*)0),
                             &VAR_31,
                             ((void*)0) );
        if ( VAR_21 )
          goto Fail;
      }



      if ( VAR_26->header.last_char < VAR_26->header.first_char )
      {
        FUNC_14(( "invalid number of glyphs\n" ));
        VAR_21 = FUNC_13( VAR_9 );
        goto Fail;
      }


      VAR_25->num_glyphs = VAR_26->header.last_char -
                         VAR_26->header.first_char + 1 + 1;

      if ( VAR_26->header.face_name_offset >= VAR_26->header.file_size )
      {
        FUNC_14(( "invalid family name offset\n" ));
        VAR_21 = FUNC_13( VAR_9 );
        goto Fail;
      }
      VAR_27 = VAR_26->header.file_size - VAR_26->header.face_name_offset;




      if ( FUNC_2( VAR_26->family_name, VAR_27 + 1 ) )
        goto Fail;

      FUNC_7( VAR_26->family_name,
                   VAR_26->fnt_frame + VAR_26->header.face_name_offset,
                   VAR_27 );

      VAR_26->family_name[VAR_27] = '\0';

      if ( FUNC_12( VAR_26->family_name,
                       VAR_27,
                       FUNC_18( VAR_26->family_name ) + 1 ) )
        goto Fail;

      VAR_25->family_name = VAR_26->family_name;
      VAR_25->style_name = (char *)"Regular";

      if ( VAR_25->style_flags & VAR_5 )
      {
        if ( VAR_25->style_flags & VAR_6 )
          VAR_25->style_name = (char *)"Bold Italic";
        else
          VAR_25->style_name = (char *)"Bold";
      }
      else if ( VAR_25->style_flags & VAR_6 )
        VAR_25->style_name = (char *)"Italic";
    }
    goto Exit;

  Fail:
    FUNC_0( VAR_16 );

  Exit:
    return VAR_21;
  }
