
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 TYPE_1__** VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3 ( void )
{
    int VAR_12 = FUNC_2 ( FUNC_0 ( VAR_11 ) );

    FUNC_1 ( VAR_10, "Rofi is unsure what to show.\n" );
    FUNC_1 ( VAR_10, "Please specify the mode you want to show.\n\n" );
    FUNC_1 ( VAR_10, "    %srofi%s -show %s{mode}%s\n\n",
              VAR_12 ? VAR_3 : "", VAR_12 ? VAR_6 : "",
              VAR_12 ? VAR_4 : "", VAR_12 ? VAR_6 : "" );
    FUNC_1 ( VAR_10, "The following modi are enabled:\n" );
    for ( unsigned int VAR_13 = 0; VAR_13 < VAR_9; VAR_13++ ) {
        FUNC_1 ( VAR_10, " * %s%s%s\n",
                  VAR_12 ? VAR_4 : "",
                  VAR_7[VAR_13]->name,
                  VAR_12 ? VAR_6 : "" );
    }
    FUNC_1 ( VAR_10, "\nThe following can be enabled:\n" );
    for ( unsigned int VAR_14 = 0; VAR_14 < VAR_8; VAR_14++ ) {
        gboolean VAR_15 = VAR_0;
        for ( unsigned int VAR_16 = 0; VAR_16 < VAR_9; VAR_16++ ) {
            if ( VAR_7[VAR_16] == VAR_2[VAR_14] ) {
                VAR_15 = VAR_1;
                break;
            }
        }
        if ( !VAR_15 ) {
            FUNC_1 ( VAR_10, " * %s%s%s\n",
                      VAR_12 ? VAR_5 : "",
                      VAR_2[VAR_14]->name,
                      VAR_12 ? VAR_6 : "" );
        }
    }
    FUNC_1 ( VAR_10, "\nTo activate a mode, add it to the list of modi in the %smodi%s setting.\n",
              VAR_12 ? VAR_4 : "", VAR_12 ? VAR_6 : "" );
}
