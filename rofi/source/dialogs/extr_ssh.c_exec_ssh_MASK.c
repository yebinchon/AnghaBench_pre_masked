
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* hostname; scalar_t__ port; } ;
typedef TYPE_1__ SshEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 char* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5 ( const SshEntry *VAR_2 )
{
    if ( !(VAR_2->hostname )|| !(VAR_2->hostname[0]) ) {
        return;
    }

    if ( !FUNC_0 ( VAR_2 ) ) {
        return;
    }



    char *VAR_3 = FUNC_1 ( VAR_1, VAR_0, ((void*)0) );

    if ( VAR_2->port > 0 ) {
        char *VAR_4 = FUNC_3("%s\x1F%d", VAR_2->hostname, VAR_2->port );
        FUNC_4 ( VAR_3, VAR_4 );
        FUNC_2 ( VAR_4 );
    } else {
        FUNC_4 ( VAR_3, VAR_2->hostname );
    }
    FUNC_2 ( VAR_3 );
}
