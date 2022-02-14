
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int w; int h; int monitor_id; } ;
typedef TYPE_2__ workarea ;
struct TYPE_9__ {unsigned int num_widgets; int * widgets; TYPE_1__* media; } ;
typedef TYPE_3__ ThemeWidget ;
struct TYPE_10__ {unsigned int num_widgets; TYPE_3__** widgets; } ;
struct TYPE_7__ {int type; int value; } ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ) ;

void FUNC_2 ( void )
{
    workarea VAR_1;
    FUNC_0 ( &VAR_1 );
    if ( VAR_0 == ((void*)0) ) return;
    for ( unsigned int VAR_2 = 0; VAR_2 < VAR_0->num_widgets; VAR_2++ ) {
            ThemeWidget *VAR_3 = VAR_0->widgets[VAR_2];
            if ( VAR_3->media != ((void*)0) ) {
                switch ( VAR_3->media->type )
                {
                    case 129:
                        {
                            int VAR_4 = VAR_3->media->value;
                            if ( VAR_1.w >= VAR_4 ){
                                for ( unsigned int VAR_5 =0; VAR_5 < VAR_3->num_widgets; VAR_5++) {
                                    FUNC_1 ( VAR_0, VAR_3->widgets[VAR_5] );
                                }
                            }
                            break;
                        }
                    case 132:
                        {
                            int VAR_6 = VAR_3->media->value;
                            if ( VAR_1.w < VAR_6 ){
                                for ( unsigned int VAR_7 =0; VAR_7 < VAR_3->num_widgets; VAR_7++) {
                                    FUNC_1 ( VAR_0, VAR_3->widgets[VAR_7] );
                                }
                            }
                            break;
                        }
                    case 130:
                        {
                            int VAR_8 = VAR_3->media->value;
                            if ( VAR_1.h >= VAR_8 ){
                                for ( unsigned int VAR_9 =0; VAR_9 < VAR_3->num_widgets; VAR_9++) {
                                    FUNC_1 ( VAR_0, VAR_3->widgets[VAR_9] );
                                }
                            }
                            break;
                        }
                    case 133:
                        {
                            int VAR_10 = VAR_3->media->value;
                            if ( VAR_1.h < VAR_10 ){
                                for ( unsigned int VAR_11 =0; VAR_11 < VAR_3->num_widgets; VAR_11++) {
                                    FUNC_1 ( VAR_0, VAR_3->widgets[VAR_11] );
                                }
                            }
                            break;
                        }
                    case 128:
                        {
                            if ( VAR_1.monitor_id == VAR_3->media->value ){
                                for ( unsigned int VAR_12 =0; VAR_12 < VAR_3->num_widgets; VAR_12++) {
                                    FUNC_1 ( VAR_0, VAR_3->widgets[VAR_12] );
                                }
                            }
                            break;
                        }
                    case 131:
                        {
                            double VAR_13 = VAR_3->media->value;
                            if ( (VAR_1.w/(double)VAR_1.h) >= VAR_13 ){
                                for ( unsigned int VAR_14 =0; VAR_14 < VAR_3->num_widgets; VAR_14++) {
                                    FUNC_1 ( VAR_0, VAR_3->widgets[VAR_14] );
                                }
                            }
                            break;
                        }
                    case 134:
                        {
                            double VAR_15 = VAR_3->media->value;
                            if ( (VAR_1.w/(double)VAR_1.h) < VAR_15 ){
                                for ( unsigned int VAR_16 =0; VAR_16 < VAR_3->num_widgets; VAR_16++) {
                                    FUNC_1 ( VAR_0, VAR_3->widgets[VAR_16] );
                                }
                            }
                            break;
                        }
                    default:
                        {
                            break;
                        }
                }
            }
    }
}
