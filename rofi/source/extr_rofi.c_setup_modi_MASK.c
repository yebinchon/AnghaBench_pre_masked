
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_2__ {int modi; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const* const,char**) ;

__attribute__((used)) static gboolean FUNC_5 ( void )
{
    const char *const VAR_2 = ",#";
    char *VAR_3 = ((void*)0);

    char *VAR_4 = FUNC_2 ( VAR_1.modi );

    for ( char *VAR_5 = FUNC_4 ( VAR_4, VAR_2, &VAR_3 ); VAR_5 != ((void*)0); VAR_5 = FUNC_4 ( ((void*)0), VAR_2, &VAR_3 ) ) {
        if ( FUNC_0 ( VAR_5 ) == -1 ) {
            FUNC_3 ( VAR_5 );
        }
    }

    FUNC_1 ( VAR_4 );
    return VAR_0;
}
