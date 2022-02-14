
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * text; int cursor; } ;
typedef TYPE_1__ textbox ;
typedef int gunichar ;
typedef int gchar ;
typedef scalar_t__ GUnicodeBreakType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6 ( textbox *VAR_4 )
{

    gchar *VAR_5;
    gchar *VAR_6 = FUNC_2 ( VAR_4->text, VAR_4->cursor );
    while ( ( VAR_6 = FUNC_4 ( VAR_6 ) ) && VAR_6 != VAR_4->text ) {
        gunichar VAR_7 = FUNC_1 ( VAR_6 );
        GUnicodeBreakType VAR_8 = FUNC_0 ( VAR_7 );
        if ( ( VAR_8 == VAR_0 || VAR_8 == VAR_1 ||
               VAR_8 == VAR_2 || VAR_8 == VAR_3 ) ) {
            break;
        }
    }
    if ( VAR_6 != VAR_4->text ) {
        while ( ( VAR_5 = FUNC_4 ( VAR_6 ) ) ) {
            gunichar VAR_9 = FUNC_1 ( VAR_5 );
            GUnicodeBreakType VAR_10 = FUNC_0 ( VAR_9 );
            if ( !( VAR_10 == VAR_0 || VAR_10 == VAR_1 ||
                    VAR_10 == VAR_2 || VAR_10 == VAR_3 ) ) {
                break;
            }
            VAR_6 = VAR_5;
            if ( VAR_5 == VAR_4->text ) {
                break;
            }
        }
    }
    int VAR_11 = FUNC_3 ( VAR_4->text, VAR_6 );
    FUNC_5 ( VAR_4, VAR_11 );
}
