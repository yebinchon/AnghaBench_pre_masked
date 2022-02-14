
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_5__ {unsigned int num_switchers; TYPE_1__* switchers; } ;
struct TYPE_4__ {int disable; int mode; } ;
typedef int Mode ;
typedef TYPE_2__ CombiModePrivateData ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*,int) ;
 char* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*,char const*,scalar_t__) ;

__attribute__((used)) static char * FUNC_7 ( Mode *VAR_2, const char *VAR_3 )
{
    CombiModePrivateData *VAR_4 = FUNC_4 ( VAR_2 );
    for ( unsigned VAR_5 = 0; VAR_5 < VAR_4->num_switchers; VAR_5++ ) {
        VAR_4->switchers[VAR_5].disable = VAR_0;
    }
    if ( VAR_3 != ((void*)0) && VAR_3[0] == '!' ) {
        char *VAR_6 = FUNC_5 ( VAR_3, ' ' );
        ssize_t VAR_7 = FUNC_1 ( VAR_3, VAR_6 ) - 1;
        if ( VAR_7 > 0 ) {
            for ( unsigned VAR_8 = 0; VAR_8 < VAR_4->num_switchers; VAR_8++ ) {
                const char *VAR_9 = FUNC_3 ( VAR_4->switchers[VAR_8].mode );
                size_t VAR_10 = FUNC_2 ( VAR_9, -1 );
                if ( !( (size_t) VAR_7 <= VAR_10 && FUNC_6 ( &VAR_3[1], VAR_9, VAR_7 ) == 0 ) ) {

                    VAR_4->switchers[VAR_8].disable = VAR_1;
                }
            }
            if ( VAR_6[0] == '\0' || VAR_6[1] == '\0' ) {
                return ((void*)0);
            }
            return FUNC_0 ( VAR_6 + 1 );
        }
    }
    return FUNC_0 ( VAR_3 );
}
