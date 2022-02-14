
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {char* request_uri; } ;


 int FUNC_0 (int (*) (char*,int,char*,int ,int *),int *) ;
 int FUNC_1 (int (*) (char*,int,char*,int ,int *),int *) ;
 TYPE_1__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int *) ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(zval *VAR_3)
{
    char * VAR_4 = "";
    if ( VAR_0 ) {
        if ( (FUNC_2(VAR_1).request_uri ) )
            VAR_4 = (FUNC_2(VAR_1).request_uri );

        FUNC_4(VAR_3);

        FUNC_1( FUNC_3, VAR_3 );
        FUNC_0( FUNC_3, VAR_3 );
        FUNC_3("PHP_SELF", 8, VAR_4, FUNC_7( VAR_4 ), VAR_3 );
    } else {
        FUNC_5(VAR_3);

        FUNC_6("PHP_SELF", VAR_4, VAR_3);
        FUNC_6("SCRIPT_NAME", VAR_4, VAR_3);
        FUNC_6("SCRIPT_FILENAME", VAR_2, VAR_3);
        FUNC_6("PATH_TRANSLATED", VAR_2, VAR_3);
        FUNC_6("DOCUMENT_ROOT", "", VAR_3);

    }
}
