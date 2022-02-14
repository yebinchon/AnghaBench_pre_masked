
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int stop; } ;
typedef TYPE_1__ rofi_range_pair ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char) ;
 char* FUNC_2 (char**,char const*) ;
 scalar_t__ FUNC_3 (char*,int *,int) ;

__attribute__((used)) static void FUNC_4 ( char *VAR_0, rofi_range_pair *VAR_1 )
{

    while ( VAR_0 != ((void*)0) && FUNC_0(*VAR_0) )
        ++VAR_0;

    const char *VAR_2[] = { "-", ":" };
    int VAR_3 = ( FUNC_1(VAR_0, ':') || VAR_0[0] == '-' ) ? 1 : 0;
    int VAR_4 = 0;

    for ( char *VAR_5 = FUNC_2 ( &VAR_0, VAR_2[VAR_3] ); VAR_5 != ((void*)0); VAR_5 = FUNC_2 ( &VAR_0, VAR_2[VAR_3] ) ) {
        if ( VAR_4 == 0 ) {
            VAR_1->start = VAR_1->stop = (int) FUNC_3 ( VAR_5, ((void*)0), 10 );
            VAR_4++;
            continue;
        }

        if ( VAR_5[0] == '\0' ) {
            VAR_1->stop = -1;
            continue;
        }

        VAR_1->stop = (int) FUNC_3 ( VAR_5, ((void*)0), 10 );
        if ( VAR_3 ) {
            --VAR_1->stop;
        }
    }
}
