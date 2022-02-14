
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


struct TYPE_37__ {int n_points; TYPE_6__* points; } ;
struct TYPE_36__ {int flags; TYPE_9__* source; TYPE_11__* target; } ;
struct TYPE_32__ {int memory; } ;
struct TYPE_35__ {scalar_t__ glyph_format; int raster; scalar_t__ (* raster_render ) (int ,TYPE_8__*) ;TYPE_4__ root; } ;
struct TYPE_34__ {int x; int y; } ;
struct TYPE_33__ {int flags; } ;
struct TYPE_31__ {TYPE_6__* lcd_geometry; int (* lcd_filter_func ) (TYPE_11__*,scalar_t__,int *) ;int * lcd_weights; } ;
struct TYPE_30__ {TYPE_1__* internal; } ;
struct TYPE_29__ {int (* lcd_filter_func ) (TYPE_11__*,scalar_t__,int *) ;int * lcd_weights; } ;
struct TYPE_28__ {unsigned int rows; int pitch; scalar_t__ pixel_mode; unsigned int width; int * buffer; } ;
struct TYPE_27__ {scalar_t__ format; int bitmap_left; int bitmap_top; TYPE_5__* internal; TYPE_3__* library; TYPE_2__* face; TYPE_11__ bitmap; TYPE_9__ outline; } ;
typedef TYPE_6__ FT_Vector ;
typedef unsigned int FT_ULong ;
typedef unsigned int FT_UInt ;
typedef TYPE_7__* FT_Renderer ;
typedef scalar_t__ FT_Render_Mode ;
typedef TYPE_8__ FT_Raster_Params ;
typedef int FT_Pos ;
typedef TYPE_9__ FT_Outline ;
typedef int FT_Memory ;
typedef int FT_Int ;
typedef TYPE_10__* FT_GlyphSlot ;
typedef scalar_t__ FT_Error ;
typedef int FT_Byte ;
typedef int (* FT_Bitmap_LcdFilterFunc ) (TYPE_11__*,scalar_t__,int *) ;
typedef TYPE_11__ FT_Bitmap ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_9__*,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (TYPE_10__*,scalar_t__,TYPE_6__ const*) ;
 scalar_t__ FUNC_7 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_12 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_13 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_14 (int ,TYPE_8__*) ;

__attribute__((used)) static FT_Error
  FUNC_15( FT_Renderer VAR_10,
                            FT_GlyphSlot VAR_11,
                            FT_Render_Mode VAR_12,
                            const FT_Vector* VAR_13,
                            FT_Render_Mode VAR_14 )
  {
    FT_Error VAR_15 = VAR_1;
    FT_Outline* VAR_16 = &VAR_11->outline;
    FT_Bitmap* VAR_17 = &VAR_11->bitmap;
    FT_Memory VAR_18 = VAR_10->root.memory;
    FT_Pos VAR_19 = 0;
    FT_Pos VAR_20 = 0;
    FT_Int VAR_21 = ( VAR_12 == VAR_6 );
    FT_Int VAR_22 = ( VAR_12 == VAR_7 );

    FT_Raster_Params VAR_23;



    if ( VAR_11->format != VAR_10->glyph_format )
    {
      VAR_15 = FUNC_5( VAR_8 );
      goto Exit;
    }


    if ( VAR_12 != VAR_14 )
    {
      VAR_15 = FUNC_5( VAR_0 );
      goto Exit;
    }


    if ( VAR_11->internal->flags & VAR_3 )
    {
      FUNC_2( VAR_17->buffer );
      VAR_11->internal->flags &= ~VAR_3;
    }

    if ( FUNC_6( VAR_11, VAR_12, VAR_13 ) )
    {
      VAR_15 = FUNC_5( VAR_9 );
      goto Exit;
    }


    if ( FUNC_1( VAR_17->buffer, VAR_17->rows, VAR_17->pitch ) )
      goto Exit;

    VAR_11->internal->flags |= VAR_3;

    VAR_19 = 64 * -VAR_11->bitmap_left;
    VAR_20 = 64 * -VAR_11->bitmap_top;
    if ( VAR_17->pixel_mode == VAR_4 )
      VAR_20 += 64 * (FT_Int)VAR_17->rows / 3;
    else
      VAR_20 += 64 * (FT_Int)VAR_17->rows;

    if ( VAR_13 )
    {
      VAR_19 += VAR_13->x;
      VAR_20 += VAR_13->y;
    }


    if ( VAR_19 || VAR_20 )
      FUNC_4( VAR_16, VAR_19, VAR_20 );


    VAR_23.target = VAR_17;
    VAR_23.source = VAR_16;
    VAR_23.flags = VAR_5;
    if ( VAR_21 )
    {
      FT_Byte* VAR_24;
      FT_Byte* VAR_25 = ((void*)0);
      FT_UInt VAR_26, VAR_27;

      unsigned int VAR_28 = VAR_17->rows;
      unsigned int VAR_29 = VAR_17->width;
      int VAR_30 = VAR_17->pitch;

      FT_Vector* VAR_31 = VAR_11->library->lcd_geometry;



      VAR_29 /= 3;

      FUNC_4( VAR_16,
                            -VAR_31[0].x,
                            -VAR_31[0].y );
      VAR_15 = VAR_10->raster_render( VAR_10->raster, &VAR_23 );
      if ( VAR_15 )
        goto Exit;

      VAR_17->buffer += VAR_29;
      FUNC_4( VAR_16,
                            VAR_31[0].x - VAR_31[1].x,
                            VAR_31[0].y - VAR_31[1].y );
      VAR_15 = VAR_10->raster_render( VAR_10->raster, &VAR_23 );
      VAR_17->buffer -= VAR_29;
      if ( VAR_15 )
        goto Exit;

      VAR_17->buffer += 2 * VAR_29;
      FUNC_4( VAR_16,
                            VAR_31[1].x - VAR_31[2].x,
                            VAR_31[1].y - VAR_31[2].y );
      VAR_15 = VAR_10->raster_render( VAR_10->raster, &VAR_23 );
      VAR_17->buffer -= 2 * VAR_29;
      if ( VAR_15 )
        goto Exit;

      VAR_19 -= VAR_31[2].x;
      VAR_20 -= VAR_31[2].y;




      if ( FUNC_0( VAR_25, (FT_ULong)VAR_30 ) )
        goto Exit;

      for ( VAR_26 = 0; VAR_26 < VAR_28; VAR_26++ )
      {
        VAR_24 = VAR_17->buffer + VAR_26 * (FT_ULong)VAR_30;
        for ( VAR_27 = 0; VAR_27 < VAR_29; VAR_27++ )
        {
          VAR_25[3 * VAR_27 ] = VAR_24[VAR_27];
          VAR_25[3 * VAR_27 + 1] = VAR_24[VAR_27 + VAR_29];
          VAR_25[3 * VAR_27 + 2] = VAR_24[VAR_27 + VAR_29 + VAR_29];
        }
        FUNC_3( VAR_24, VAR_25, VAR_30 );
      }

      FUNC_2( VAR_25 );
    }
    else if ( VAR_22 )
    {
      int VAR_32 = VAR_17->pitch;

      FT_Vector* VAR_33 = VAR_11->library->lcd_geometry;





      VAR_17->pitch *= 3;
      VAR_17->rows /= 3;

      FUNC_4( VAR_16,
                            -VAR_33[0].y,
                            VAR_33[0].x );
      VAR_15 = VAR_10->raster_render( VAR_10->raster, &VAR_23 );
      if ( VAR_15 )
        goto Exit;

      VAR_17->buffer += VAR_32;
      FUNC_4( VAR_16,
                            VAR_33[0].y - VAR_33[1].y,
                            VAR_33[1].x - VAR_33[0].x );
      VAR_15 = VAR_10->raster_render( VAR_10->raster, &VAR_23 );
      VAR_17->buffer -= VAR_32;
      if ( VAR_15 )
        goto Exit;

      VAR_17->buffer += 2 * VAR_32;
      FUNC_4( VAR_16,
                            VAR_33[1].y - VAR_33[2].y,
                            VAR_33[2].x - VAR_33[1].x );
      VAR_15 = VAR_10->raster_render( VAR_10->raster, &VAR_23 );
      VAR_17->buffer -= 2 * VAR_32;
      if ( VAR_15 )
        goto Exit;

      VAR_19 -= VAR_33[2].y;
      VAR_20 += VAR_33[2].x;

      VAR_17->pitch /= 3;
      VAR_17->rows *= 3;
    }
    else
      VAR_15 = VAR_10->raster_render( VAR_10->raster, &VAR_23 );



  Exit:
    if ( !VAR_15 )
    {

      VAR_11->format = VAR_2;
    }
    else if ( VAR_11->internal->flags & VAR_3 )
    {
      FUNC_2( VAR_17->buffer );
      VAR_11->internal->flags &= ~VAR_3;
    }

    if ( VAR_19 || VAR_20 )
      FUNC_4( VAR_16, -VAR_19, -VAR_20 );

    return VAR_15;
  }
