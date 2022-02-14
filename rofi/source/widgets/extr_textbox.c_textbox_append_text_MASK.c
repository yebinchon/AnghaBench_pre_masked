
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ cursor; } ;
typedef TYPE_1__ textbox ;
typedef char gchar ;
typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,char const*,int) ;

gboolean FUNC_5 ( textbox *VAR_3, const char *VAR_4, const int VAR_5 )
{
    if ( VAR_3 == ((void*)0) ) {
        return VAR_0;
    }
    if ( !( VAR_3->flags & VAR_1 ) ) {
        return VAR_0;
    }



    gboolean VAR_6 = VAR_0;
    const gchar *VAR_7, *VAR_8, *VAR_9;
    for ( VAR_7 = VAR_4, VAR_8 = FUNC_2 ( VAR_7 ), VAR_9 = VAR_7 + VAR_5; VAR_7 < VAR_9; VAR_7 = VAR_8, VAR_8 = FUNC_2 ( VAR_8 ) ) {
        if ( FUNC_0 ( FUNC_1 ( VAR_7 ) ) ) {
            continue;
        }
        FUNC_4 ( VAR_3, VAR_3->cursor, VAR_7, VAR_8 - VAR_7 );
        FUNC_3 ( VAR_3, VAR_3->cursor + 1 );
        VAR_6 = VAR_2;
    }
    return VAR_6;
}
