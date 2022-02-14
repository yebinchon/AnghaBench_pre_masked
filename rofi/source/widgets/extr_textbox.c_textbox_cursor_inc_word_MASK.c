
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * text; int cursor; } ;
typedef TYPE_1__ textbox ;
typedef int gunichar ;
typedef char gchar ;
typedef scalar_t__ GUnicodeBreakType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6 ( textbox *VAR_4 )
{
    if ( VAR_4->text == ((void*)0) ) {
        return;
    }

    gchar *VAR_5 = FUNC_3 ( VAR_4->text, VAR_4->cursor );
    while ( ( VAR_5 = FUNC_2 ( VAR_5 ) ) ) {
        gunichar VAR_6 = FUNC_1 ( VAR_5 );
        GUnicodeBreakType VAR_7 = FUNC_0 ( VAR_6 );
        if ( ( VAR_7 == VAR_0 || VAR_7 == VAR_1 ||
               VAR_7 == VAR_2 || VAR_7 == VAR_3 ) ) {
            break;
        }
    }
    if ( VAR_5 == ((void*)0) || *VAR_5 == '\0' ) {
        return;
    }
    while ( ( VAR_5 = FUNC_2 ( VAR_5 ) ) ) {
        gunichar VAR_8 = FUNC_1 ( VAR_5 );
        GUnicodeBreakType VAR_9 = FUNC_0 ( VAR_8 );
        if ( !( VAR_9 == VAR_0 || VAR_9 == VAR_1 ||
                VAR_9 == VAR_2 || VAR_9 == VAR_3 ) ) {
            break;
        }
    }
    int VAR_10 = FUNC_4 ( VAR_4->text, VAR_5 );
    FUNC_5 ( VAR_4, VAR_10 );
}
