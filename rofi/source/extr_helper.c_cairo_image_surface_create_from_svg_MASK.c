
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int gchar ;
typedef scalar_t__ gboolean ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_10__ {int dpi; } ;
struct TYPE_9__ {int message; } ;
struct TYPE_8__ {double height; scalar_t__ width; } ;
typedef int RsvgHandle ;
typedef TYPE_1__ RsvgDimensionData ;
typedef TYPE_2__ GError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,double,double) ;
 int FUNC_5 (int *,double,double) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_7__ VAR_3 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int const*,...) ;
 int FUNC_11 (int *,TYPE_2__**) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int * FUNC_13 (int const*,TYPE_2__**) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int ) ;

cairo_surface_t* FUNC_16 ( const gchar* VAR_4, int VAR_5 )
{
    GError *VAR_6 = ((void*)0);
    cairo_surface_t *VAR_7 = ((void*)0);
    RsvgHandle * VAR_8;

    VAR_8 = FUNC_13 ( VAR_4, &VAR_6 );
    if ( FUNC_0 ( VAR_8 != ((void*)0) ) ) {
        RsvgDimensionData VAR_9;

        FUNC_15 ( VAR_8, VAR_3.dpi );

        FUNC_12 ( VAR_8, &VAR_9 );

        double VAR_10 = (double) VAR_5 / VAR_9.height;
        VAR_7 = FUNC_4 ( VAR_0,
                                               (double) VAR_9.width * VAR_10,
                                               (double) VAR_9.height * VAR_10 );
        gboolean VAR_11 = FUNC_7 ( VAR_7 ) != VAR_1;
        if ( FUNC_0 ( VAR_11 == VAR_2 ) ) {
            cairo_t *VAR_12 = FUNC_2 ( VAR_7 );
            FUNC_5 ( VAR_12, VAR_10, VAR_10 );
            VAR_11 = FUNC_14 ( VAR_8, VAR_12 ) == VAR_2;
            FUNC_3 ( VAR_12 );
        }

        FUNC_11 ( VAR_8, &VAR_6 );
        FUNC_9 ( VAR_8 );


        if ( FUNC_1 ( VAR_11 ) ) {
            FUNC_10 ( "Failed to render file: '%s'", VAR_4 );
            FUNC_6 ( VAR_7 );
            VAR_7 = ((void*)0);
        }
    }
    if ( FUNC_1 ( VAR_6 != ((void*)0) ) ) {
        FUNC_10 ( "Failed to render SVG file: '%s': %s", VAR_4, VAR_6->message );
        FUNC_8 ( VAR_6 );
    }

    return VAR_7;
}
