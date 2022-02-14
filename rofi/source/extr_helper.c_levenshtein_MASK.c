
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ gunichar ;
typedef int glong ;
struct TYPE_2__ {int case_sensitive; } ;


 int const VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int) ;
 unsigned int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;

unsigned int FUNC_4 ( const char *VAR_3, const glong VAR_4, const char *VAR_5, const glong VAR_6 )
{
    if ( VAR_4 == VAR_0 ) {

        return VAR_1;
    }
    unsigned int VAR_7[VAR_4 + 1];
    for ( glong VAR_8 = 0; VAR_8 < VAR_4; VAR_8++ ) {
        VAR_7[VAR_8] = VAR_8;
    }


    VAR_7[VAR_4] = VAR_4;
    for ( glong VAR_9 = 1; VAR_9 <= VAR_6; VAR_9++ ) {
        const char *VAR_10 = VAR_3;
        VAR_7[0] = VAR_9;
        gunichar VAR_11 = FUNC_2 ( VAR_5 );
        if ( !VAR_2.case_sensitive ) {
            VAR_11 = FUNC_1 ( VAR_11 );
        }
        for ( glong VAR_12 = 1, VAR_13 = VAR_9 - 1; VAR_12 <= VAR_4; VAR_12++ ) {
            gunichar VAR_14 = FUNC_2 ( VAR_10 );
            if ( !VAR_2.case_sensitive ) {
                VAR_14 = FUNC_1 ( VAR_14 );
            }
            unsigned int VAR_15 = VAR_7[VAR_12];
            VAR_7[VAR_12] = FUNC_0 ( VAR_7[VAR_12] + 1, VAR_7[VAR_12 - 1] + 1, VAR_13 + ( VAR_14 == VAR_11 ? 0 : 1 ) );
            VAR_13 = VAR_15;
            VAR_10 = FUNC_3 ( VAR_10 );
        }
        VAR_5 = FUNC_3 ( VAR_5 );
    }
    return VAR_7[VAR_4];
}
