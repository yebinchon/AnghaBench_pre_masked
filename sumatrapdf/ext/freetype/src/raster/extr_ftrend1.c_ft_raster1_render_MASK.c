
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {int buffer; scalar_t__ rows; int pitch; } ;
struct TYPE_19__ {scalar_t__ format; int bitmap_left; int bitmap_top; TYPE_2__* internal; TYPE_7__ bitmap; int outline; } ;
struct TYPE_18__ {int flags; int * source; TYPE_7__* target; } ;
struct TYPE_14__ {int memory; } ;
struct TYPE_17__ {scalar_t__ glyph_format; int raster; int (* raster_render ) (int ,TYPE_5__*) ;TYPE_1__ root; } ;
struct TYPE_16__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_3__ FT_Vector ;
typedef TYPE_4__* FT_Renderer ;
typedef scalar_t__ FT_Render_Mode ;
typedef TYPE_5__ FT_Raster_Params ;
typedef int FT_Pos ;
typedef int FT_Outline ;
typedef int FT_Memory ;
typedef int FT_Int ;
typedef TYPE_6__* FT_GlyphSlot ;
typedef int FT_Error ;
typedef TYPE_7__ FT_Bitmap ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_6__*,scalar_t__,TYPE_3__ const*) ;
 int FUNC_5 (int ,TYPE_5__*) ;

__attribute__((used)) static FT_Error
  FUNC_6( FT_Renderer VAR_8,
                     FT_GlyphSlot VAR_9,
                     FT_Render_Mode VAR_10,
                     const FT_Vector* VAR_11 )
  {
    FT_Error VAR_12 = VAR_1;
    FT_Outline* VAR_13 = &VAR_9->outline;
    FT_Bitmap* VAR_14 = &VAR_9->bitmap;
    FT_Memory VAR_15 = VAR_8->root.memory;
    FT_Pos VAR_16 = 0;
    FT_Pos VAR_17 = 0;

    FT_Raster_Params VAR_18;



    if ( VAR_9->format != VAR_8->glyph_format )
    {
      VAR_12 = FUNC_3( VAR_6 );
      goto Exit;
    }


    if ( VAR_10 != VAR_5 )
    {

      return FUNC_3( VAR_0 );
    }


    if ( VAR_9->internal->flags & VAR_3 )
    {
      FUNC_1( VAR_14->buffer );
      VAR_9->internal->flags &= ~VAR_3;
    }

    if ( FUNC_4( VAR_9, VAR_10, VAR_11 ) )
    {
      VAR_12 = FUNC_3( VAR_7 );
      goto Exit;
    }


    if ( FUNC_0( VAR_14->buffer, VAR_14->rows, VAR_14->pitch ) )
      goto Exit;

    VAR_9->internal->flags |= VAR_3;

    VAR_16 = -VAR_9->bitmap_left * 64;
    VAR_17 = ( (FT_Int)VAR_14->rows - VAR_9->bitmap_top ) * 64;

    if ( VAR_11 )
    {
      VAR_16 += VAR_11->x;
      VAR_17 += VAR_11->y;
    }


    if ( VAR_16 || VAR_17 )
      FUNC_2( VAR_13, VAR_16, VAR_17 );


    VAR_18.target = VAR_14;
    VAR_18.source = VAR_13;
    VAR_18.flags = VAR_4;


    VAR_12 = VAR_8->raster_render( VAR_8->raster, &VAR_18 );

  Exit:
    if ( !VAR_12 )

      VAR_9->format = VAR_2;
    else if ( VAR_9->internal->flags & VAR_3 )
    {
      FUNC_1( VAR_14->buffer );
      VAR_9->internal->flags &= ~VAR_3;
    }

    if ( VAR_16 || VAR_17 )
      FUNC_2( VAR_13, -VAR_16, -VAR_17 );

    return VAR_12;
  }
