
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int gray_TWorker ;
struct TYPE_8__ {scalar_t__ pitch; scalar_t__ origin; } ;
struct TYPE_10__ {scalar_t__ n_points; int n_contours; scalar_t__* contours; int points; } ;
struct TYPE_13__ {scalar_t__ min_ex; scalar_t__ min_ey; scalar_t__ max_ex; scalar_t__ max_ey; int * render_span_data; void* render_span; TYPE_1__ target; TYPE_3__ outline; } ;
struct TYPE_12__ {scalar_t__ xMin; scalar_t__ yMin; scalar_t__ xMax; scalar_t__ yMax; } ;
struct TYPE_11__ {int rows; scalar_t__ pitch; scalar_t__ width; scalar_t__ buffer; } ;
struct TYPE_9__ {int flags; TYPE_5__ clip_box; int * user; scalar_t__ gray_spans; TYPE_4__* target; scalar_t__ source; } ;
typedef void* FT_Raster_Span_Func ;
typedef TYPE_2__ FT_Raster_Params ;
typedef int FT_Raster ;
typedef void* FT_Pos ;
typedef TYPE_3__ FT_Outline ;
typedef TYPE_4__ FT_Bitmap ;
typedef TYPE_5__ FT_BBox ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 TYPE_6__ VAR_7 ;

__attribute__((used)) static int
  FUNC_2( FT_Raster VAR_8,
                      const FT_Raster_Params* VAR_9 )
  {
    const FT_Outline* VAR_10 = (const FT_Outline*)VAR_9->source;
    const FT_Bitmap* VAR_11 = VAR_9->target;
    FT_BBox VAR_12;


    gray_TWorker VAR_13[1];



    if ( !VAR_8 )
      return FUNC_0( VAR_3 );


    if ( !( VAR_9->flags & VAR_0 ) )
      return FUNC_0( VAR_4 );

    if ( !VAR_10 )
      return FUNC_0( VAR_5 );


    if ( VAR_10->n_points == 0 || VAR_10->n_contours <= 0 )
      return 0;

    if ( !VAR_10->contours || !VAR_10->points )
      return FUNC_0( VAR_5 );

    if ( VAR_10->n_points !=
           VAR_10->contours[VAR_10->n_contours - 1] + 1 )
      return FUNC_0( VAR_5 );

    VAR_7.outline = *VAR_10;

    if ( VAR_9->flags & VAR_2 )
    {
      if ( !VAR_9->gray_spans )
        return 0;

      VAR_7.render_span = (FT_Raster_Span_Func)VAR_9->gray_spans;
      VAR_7.render_span_data = VAR_9->user;
    }
    else
    {

      if ( !VAR_11 )
        return FUNC_0( VAR_3 );


      if ( !VAR_11->width || !VAR_11->rows )
        return 0;

      if ( !VAR_11->buffer )
        return FUNC_0( VAR_3 );

      if ( VAR_11->pitch < 0 )
        VAR_7.target.origin = VAR_11->buffer;
      else
        VAR_7.target.origin = VAR_11->buffer
              + ( VAR_11->rows - 1 ) * (unsigned int)VAR_11->pitch;

      VAR_7.target.pitch = VAR_11->pitch;

      VAR_7.render_span = (FT_Raster_Span_Func)((void*)0);
      VAR_7.render_span_data = ((void*)0);
    }


    if ( VAR_9->flags & VAR_2 &&
         VAR_9->flags & VAR_1 )
      VAR_12 = VAR_9->clip_box;
    else
    {

      VAR_12.xMin = 0;
      VAR_12.yMin = 0;
      VAR_12.xMax = (FT_Pos)VAR_11->width;
      VAR_12.yMax = (FT_Pos)VAR_11->rows;
    }


    VAR_7.min_ex = VAR_12.xMin;
    VAR_7.min_ey = VAR_12.yMin;
    VAR_7.max_ex = VAR_12.xMax;
    VAR_7.max_ey = VAR_12.yMax;

    if ( VAR_7.max_ex <= VAR_7.min_ex || VAR_7.max_ey <= VAR_7.min_ey )
      return 0;

    return FUNC_1( VAR_6 );
  }
