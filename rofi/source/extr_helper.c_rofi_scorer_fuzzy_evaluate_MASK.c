
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ gunichar ;
typedef size_t glong ;
typedef char gchar ;
typedef scalar_t__ gboolean ;
typedef enum CharClass { ____Placeholder_CharClass } CharClass ;
struct TYPE_2__ {scalar_t__ case_sensitive; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (size_t,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int) ;

int FUNC_9 ( const char *VAR_11, glong VAR_12, const char *VAR_13, glong VAR_14 )
{
    if ( VAR_14 > VAR_2 ) {
        return -VAR_5;
    }
    glong VAR_15, VAR_16;

    gboolean VAR_17 = VAR_9;

    gboolean VAR_18 = VAR_9;

    int *VAR_19 = FUNC_2 ( VAR_14, sizeof ( int ) );

    int *VAR_20 = FUNC_2 ( VAR_14, sizeof ( int ) );


    int VAR_21 = 0, VAR_22 = 0, VAR_23, VAR_24;
    const gchar *VAR_25 = VAR_11, *VAR_26;
    enum CharClass VAR_27 = VAR_6;
    for ( VAR_16 = 0, VAR_26 = VAR_13; VAR_16 < VAR_14; VAR_16++, VAR_26 = FUNC_6 ( VAR_26 ) ) {
        enum CharClass VAR_28 = FUNC_7 ( FUNC_5 ( VAR_26 ) );
        VAR_19[VAR_16] = FUNC_8 ( VAR_27, VAR_28 );
        VAR_27 = VAR_28;
        VAR_20[VAR_16] = VAR_5;
    }
    for ( VAR_15 = 0; VAR_15 < VAR_12; VAR_15++, VAR_25 = FUNC_6 ( VAR_25 ) ) {
        gunichar VAR_29 = FUNC_5 ( VAR_25 ), VAR_30;
        if ( FUNC_3 ( VAR_29 ) ) {
            VAR_18 = VAR_9;
            continue;
        }
        VAR_24 = VAR_5;
        for ( VAR_16 = 0, VAR_26 = VAR_13; VAR_16 < VAR_14; VAR_16++, VAR_26 = FUNC_6 ( VAR_26 ) ) {
            VAR_23 = VAR_20[VAR_16];
            VAR_24 = FUNC_0 ( VAR_24 + VAR_3, VAR_23 );
            VAR_30 = FUNC_5 ( VAR_26 );
            if ( VAR_10.case_sensitive
                 ? VAR_29 == VAR_30
                 : FUNC_4 ( VAR_29 ) == FUNC_4 ( VAR_30 ) ) {
                int VAR_31 = VAR_19[VAR_16] * ( VAR_18 ? VAR_8 : VAR_7 );
                VAR_20[VAR_16] = VAR_17
                         ? VAR_4 * VAR_16 + VAR_31
                         : FUNC_0 ( VAR_21 + VAR_0, VAR_22 + VAR_31 );
            }
            else {
                VAR_20[VAR_16] = VAR_5;
            }
            VAR_21 = VAR_23;
            VAR_22 = VAR_24;
        }
        VAR_17 = VAR_18 = VAR_1;
    }
    VAR_24 = VAR_5;
    for ( VAR_16 = 0; VAR_16 < VAR_14; VAR_16++ ) {
        VAR_24 = FUNC_0 ( VAR_24 + VAR_3, VAR_20[VAR_16] );
    }
    FUNC_1 ( VAR_19 );
    FUNC_1 ( VAR_20 );
    return -VAR_24;
}
