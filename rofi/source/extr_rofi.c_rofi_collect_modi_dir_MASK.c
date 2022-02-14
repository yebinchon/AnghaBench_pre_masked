
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_3__ {scalar_t__ abi_version; int * module; } ;
typedef TYPE_1__ Mode ;
typedef int GModule ;
typedef int GDir ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*,char const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int * FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (int *,char*,int *) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (char*,char const*,...) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12 ( const char *VAR_4 )
{
    GDir *VAR_5 = FUNC_2 ( VAR_4, 0, ((void*)0) );
    if ( VAR_5 ) {
        const char *VAR_6 = ((void*)0);
        while ( ( VAR_6 = FUNC_3 ( VAR_5 ) ) ) {
            if ( !FUNC_9 ( VAR_6, VAR_3 ) ) {
                continue;
            }
            char *VAR_7 = FUNC_0 ( VAR_4, VAR_6, ((void*)0) );
            GModule *VAR_8 = FUNC_7 ( VAR_7, VAR_1 | VAR_2 );
            if ( VAR_8 ) {
                Mode *VAR_9 = ((void*)0);
                if ( FUNC_8 ( VAR_8, "mode", (gpointer *) &VAR_9 ) ) {
                    if ( VAR_9->abi_version != VAR_0 ) {
                        FUNC_10 ( "ABI version of plugin: '%s' does not match: %08X expecting: %08X", VAR_6, VAR_9->abi_version, VAR_0 );
                        FUNC_5 ( VAR_8 );
                    }
                    else {
                        VAR_9->module = VAR_8;
                        if ( !FUNC_11 ( VAR_9 ) ) {
                            FUNC_5 ( VAR_8 );
                        }
                    }
                }
                else {
                    FUNC_10 ( "Symbol 'mode' not found in module: %s", VAR_6 );
                    FUNC_5 ( VAR_8 );
                }
            }
            else {
                FUNC_10 ( "Failed to open 'mode' plugin: '%s', error: %s", VAR_6, FUNC_6 () );
            }
            FUNC_4 ( VAR_7 );
        }
        FUNC_1 ( VAR_5 );
    }
}
