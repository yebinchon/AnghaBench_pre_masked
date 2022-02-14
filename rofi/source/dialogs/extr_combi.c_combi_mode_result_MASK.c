
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_5__ {unsigned int num_switchers; unsigned int* starts; unsigned int* lengths; TYPE_1__* switchers; } ;
struct TYPE_4__ {int mode; } ;
typedef int ModeMode ;
typedef int Mode ;
typedef TYPE_2__ CombiModePrivateData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char const*,int) ;
 char* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char**,unsigned int) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char const*,scalar_t__) ;

__attribute__((used)) static ModeMode FUNC_7 ( Mode *VAR_3, int VAR_4, char **VAR_5, unsigned int VAR_6 )
{
    CombiModePrivateData *VAR_7 = FUNC_3 ( VAR_3 );

    if ( VAR_5[0][0] == '!' ) {
        int VAR_8 = -1;
        char *VAR_9 = FUNC_5 ( VAR_5[0], ' ' );
        ssize_t VAR_10 = FUNC_0 ( VAR_5[0], VAR_9 ) - 1;
        if ( VAR_10 > 0 ) {
            for ( unsigned VAR_11 = 0; VAR_8 == -1 && VAR_11 < VAR_7->num_switchers; VAR_11++ ) {
                const char *VAR_12 = FUNC_2 ( VAR_7->switchers[VAR_11].mode );
                size_t VAR_13 = FUNC_1 ( VAR_12, -1 );
                if ( (size_t) VAR_10 <= VAR_13 && FUNC_6 ( &VAR_5[0][1], VAR_12, VAR_10 ) == 0 ) {
                    VAR_8 = VAR_11;
                }
            }
        }
        if ( VAR_8 >= 0 ) {
            if ( VAR_9[0] == ' ' ) {
                char *VAR_14 = VAR_9 + 1;
                return FUNC_4 ( VAR_7->switchers[VAR_8].mode, VAR_4, &VAR_14,
                                     VAR_6 - VAR_7->starts[VAR_8] );
            }
            return VAR_2;
        }
    }
    if ( VAR_4 & VAR_1 ) {
        return VAR_4 & VAR_0;
    }

    for ( unsigned VAR_15 = 0; VAR_15 < VAR_7->num_switchers; VAR_15++ ) {
        if ( VAR_6 >= VAR_7->starts[VAR_15] &&
             VAR_6 < ( VAR_7->starts[VAR_15] + VAR_7->lengths[VAR_15] ) ) {
            return FUNC_4 ( VAR_7->switchers[VAR_15].mode, VAR_4, VAR_5, VAR_6 - VAR_7->starts[VAR_15] );
        }
    }
    return VAR_2;
}
