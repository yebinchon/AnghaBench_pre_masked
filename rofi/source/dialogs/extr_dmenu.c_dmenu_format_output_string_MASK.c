
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef char gchar ;
struct TYPE_3__ {scalar_t__* columns; int column_separator; } ;
typedef TYPE_1__ DmenuModePrivateData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (int ,char const*,int ,int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char**) ;
 char* FUNC_5 (char*,char*,char*,int *) ;

__attribute__((used)) static gchar * FUNC_6 ( const DmenuModePrivateData *VAR_1, const char *VAR_2 )
{
    if ( VAR_1->columns == ((void*)0) ) {
        return FUNC_3 ( VAR_2 );
    }
    char *VAR_3 = ((void*)0);
    char ** VAR_4 = FUNC_2 ( VAR_1->column_separator, VAR_2, VAR_0, 00 );
    uint32_t VAR_5 = 0;
    for (; VAR_4 && VAR_4[VAR_5]; VAR_5++ ) {
        ;
    }
    for ( uint32_t VAR_6 = 0; VAR_1->columns && VAR_1->columns[VAR_6]; VAR_6++ ) {
        unsigned int VAR_7 = (unsigned int ) FUNC_0 ( VAR_1->columns[VAR_6], ((void*)0), 10 );
        if ( VAR_7 < VAR_5 && VAR_7 > 0 ) {
            if ( VAR_3 == ((void*)0) ) {
                VAR_3 = FUNC_3 ( VAR_4[VAR_7 - 1] );
            }
            else {
                gchar *VAR_8 = FUNC_5 ( "\t", VAR_3, VAR_4[VAR_7 - 1], ((void*)0) );
                FUNC_1 ( VAR_3 );
                VAR_3 = VAR_8;
            }
        }
    }
    FUNC_4 ( VAR_4 );
    return VAR_3 ? VAR_3 : FUNC_3 ( "" );
}
