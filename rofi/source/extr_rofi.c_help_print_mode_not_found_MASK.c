
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_3__ {int name; } ;
typedef int GString ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char const*) ;
 TYPE_1__** VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 ( const char *VAR_6 )
{
    GString *VAR_7 = FUNC_1 ("");
    FUNC_2(VAR_7, "Mode %s is not found.\nThe following modi are known:\n", VAR_6 );
    for ( unsigned int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++ ) {
        gboolean VAR_9 = VAR_0;
        for ( unsigned int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++ ) {
            if ( VAR_3[VAR_10] == VAR_2[VAR_8] ) {
                VAR_9 = VAR_1;
                break;
            }
        }
        FUNC_0 (VAR_7, "        * %s%s\n",
                VAR_9 ? "+" : "",
                VAR_2[VAR_8]->name
                );
    }
    FUNC_3 ( VAR_7 );
}
