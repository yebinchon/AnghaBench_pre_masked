
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef int ThemeWidget ;
struct TYPE_25__ {unsigned int num_switchers; unsigned int* starts; unsigned int* lengths; TYPE_1__* switchers; } ;
struct TYPE_24__ {int name; } ;
struct TYPE_23__ {int end_index; int start_index; } ;
struct TYPE_20__ {int red; int green; int blue; } ;
struct TYPE_21__ {TYPE_2__ color; } ;
struct TYPE_22__ {TYPE_3__ value; } ;
struct TYPE_19__ {TYPE_12__* mode; } ;
struct TYPE_18__ {int combi_hide_mode_prefix; } ;
struct TYPE_17__ {int name; } ;
typedef TYPE_4__ Property ;
typedef TYPE_5__ PangoAttribute ;
typedef TYPE_6__ Mode ;
typedef int GList ;
typedef TYPE_7__ CombiModePrivateData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_15__ VAR_4 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,TYPE_5__*) ;
 char* FUNC_2 (char*,char const*,char*) ;
 char* FUNC_3 (TYPE_12__*) ;
 char* FUNC_4 (TYPE_12__*,unsigned int,int*,int **,int ) ;
 TYPE_7__* FUNC_5 (TYPE_6__ const*) ;
 TYPE_5__* FUNC_6 (int,int,int) ;
 TYPE_4__* FUNC_7 (int *,int ,int ,int ) ;
 int * FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static char * FUNC_10 ( const Mode *VAR_5, unsigned int VAR_6, int *VAR_7, GList **VAR_8, int VAR_9 )
{
    CombiModePrivateData *VAR_10 = FUNC_5 ( VAR_5 );
    if ( !VAR_9 ) {
        for ( unsigned VAR_11 = 0; VAR_11 < VAR_10->num_switchers; VAR_11++ ) {
            if ( VAR_6 >= VAR_10->starts[VAR_11] && VAR_6 < ( VAR_10->starts[VAR_11] + VAR_10->lengths[VAR_11] ) ) {
                FUNC_4 ( VAR_10->switchers[VAR_11].mode, VAR_6 - VAR_10->starts[VAR_11], VAR_7, VAR_8, VAR_0 );
                return ((void*)0);
            }
        }
        return ((void*)0);
    }
    for ( unsigned VAR_12 = 0; VAR_12 < VAR_10->num_switchers; VAR_12++ ) {
        if ( VAR_6 >= VAR_10->starts[VAR_12] && VAR_6 < ( VAR_10->starts[VAR_12] + VAR_10->lengths[VAR_12] ) ) {
            char * VAR_13;
            char * VAR_14 = VAR_13 = FUNC_4 ( VAR_10->switchers[VAR_12].mode, VAR_6 - VAR_10->starts[VAR_12], VAR_7, VAR_8, VAR_3 );
            const char *VAR_15 = FUNC_3 ( VAR_10->switchers[VAR_12].mode );
            if ( !VAR_4.combi_hide_mode_prefix ) {
                VAR_13 = FUNC_2 ( "%s %s", VAR_15, VAR_14 );
                FUNC_0 ( VAR_14 );
            }

            if ( VAR_8 != ((void*)0) ) {
                ThemeWidget *VAR_16 = FUNC_8 ( VAR_5->name, ((void*)0), VAR_3 );
                Property *VAR_17 = FUNC_7 ( VAR_16, VAR_2, VAR_10->switchers[VAR_12].mode->name, VAR_3 );
                if ( VAR_17 != ((void*)0) ) {
                    PangoAttribute *VAR_18 = FUNC_6 (
                        VAR_17->value.color.red * 65535,
                        VAR_17->value.color.green * 65535,
                        VAR_17->value.color.blue * 65535 );
                    VAR_18->start_index = VAR_1;
                    VAR_18->end_index = FUNC_9 ( VAR_15 );
                    *VAR_8 = FUNC_1 ( *VAR_8, VAR_18 );
                }
            }
            return VAR_13;
        }
    }

    return ((void*)0);
}
