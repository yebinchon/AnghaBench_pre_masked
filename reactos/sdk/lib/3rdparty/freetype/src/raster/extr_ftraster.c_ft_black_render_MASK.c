
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* sizeBuff; struct TYPE_11__* buff; } ;
typedef TYPE_1__ black_TWorker ;
struct TYPE_15__ {int buffer; int rows; int width; } ;
struct TYPE_14__ {scalar_t__ n_points; int n_contours; scalar_t__* contours; TYPE_3__* points; } ;
struct TYPE_16__ {TYPE_6__ target; TYPE_5__ outline; } ;
struct TYPE_13__ {int flags; TYPE_6__* target; scalar_t__ source; } ;
struct TYPE_12__ {int x; int y; } ;
typedef TYPE_1__ Long ;
typedef TYPE_3__ FT_Vector ;
typedef TYPE_4__ FT_Raster_Params ;
typedef int FT_Raster ;
typedef TYPE_5__ FT_Outline ;
typedef int FT_Error ;
typedef TYPE_6__ FT_Bitmap ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_7__ VAR_10 ;

__attribute__((used)) static int
  FUNC_5( FT_Raster VAR_11,
                   const FT_Raster_Params* VAR_12 )
  {
    const FT_Outline* VAR_13 = (const FT_Outline*)VAR_12->source;
    const FT_Bitmap* VAR_14 = VAR_12->target;






    black_TWorker VAR_15[1];

    Long VAR_16[VAR_0];



    if ( !VAR_11 )
      return FUNC_1( VAR_5 );

    if ( !VAR_13 )
      return FUNC_1( VAR_4 );


    if ( VAR_13->n_points == 0 || VAR_13->n_contours <= 0 )
      return VAR_8;

    if ( !VAR_13->contours || !VAR_13->points )
      return FUNC_1( VAR_4 );

    if ( VAR_13->n_points !=
           VAR_13->contours[VAR_13->n_contours - 1] + 1 )
      return FUNC_1( VAR_4 );


    if ( VAR_12->flags & VAR_2 )
      return FUNC_1( VAR_9 );

    if ( VAR_12->flags & VAR_1 )
      return FUNC_1( VAR_9 );

    if ( !VAR_14 )
      return FUNC_1( VAR_4 );


    if ( !VAR_14->width || !VAR_14->rows )
      return VAR_8;

    if ( !VAR_14->buffer )
      return FUNC_1( VAR_4 );


    {
      FT_Vector* VAR_17 = VAR_13->points;
      FT_Vector* VAR_18 = VAR_17 + VAR_13->n_points;


      for ( ; VAR_17 < VAR_18; VAR_17++ )
      {
        if ( VAR_17->x < -0x1000000L || VAR_17->x > 0x1000000L ||
             VAR_17->y < -0x1000000L || VAR_17->y > 0x1000000L )
         return FUNC_1( VAR_4 );
      }
    }
    VAR_10.outline = *VAR_13;
    VAR_10.target = *VAR_14;

    VAR_15->buff = VAR_16;



    VAR_15->sizeBuff = (&VAR_16)[1];
    return FUNC_2( VAR_7 );

  }
