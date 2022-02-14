
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 TYPE_1__** VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (char*,char*,char*,int ,char*) ;

__attribute__((used)) static void FUNC_1 ( int VAR_9 )
{
    for ( unsigned int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++ ) {
        gboolean VAR_11 = VAR_0;
        for ( unsigned int VAR_12 = 0; VAR_12 < VAR_8; VAR_12++ ) {
            if ( VAR_6[VAR_12] == VAR_2[VAR_10] ) {
                VAR_11 = VAR_1;
                break;
            }
        }
        FUNC_0 ( "        * %s%s%s%s\n",
                 VAR_11 ? "+" : "",
                 VAR_9 ? ( VAR_11 ? VAR_3 : VAR_4 ) : "",
                 VAR_2[VAR_10]->name,
                 VAR_9 ? VAR_5 : ""
                 );
    }
}
