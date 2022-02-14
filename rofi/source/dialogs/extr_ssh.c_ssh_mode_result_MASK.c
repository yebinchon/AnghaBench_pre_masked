
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* hosts_list; } ;
struct TYPE_4__ {char* hostname; int port; } ;
typedef TYPE_1__ SshEntry ;
typedef TYPE_2__ SSHModePrivateData ;
typedef int ModeMode ;
typedef int Mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ModeMode FUNC_5 ( Mode *VAR_11, int VAR_12, char **VAR_13, unsigned int VAR_14 )
{
    ModeMode VAR_15 = VAR_7;
    SSHModePrivateData *VAR_16 = (SSHModePrivateData *) FUNC_2 ( VAR_11 );
    if ( VAR_12 & VAR_3 ) {
        VAR_15 = VAR_8;
    }
    else if ( VAR_12 & VAR_5 ) {
        VAR_15 = VAR_9;
    }
    else if ( VAR_12 & VAR_6 ) {
        VAR_15 = ( VAR_12 & VAR_2 );
    }
    else if ( ( VAR_12 & VAR_4 ) && VAR_16->hosts_list[VAR_14].hostname != ((void*)0) ) {
        FUNC_1 ( &(VAR_16->hosts_list[VAR_14]) );
    }
    else if ( ( VAR_12 & VAR_0 ) && *VAR_13 != ((void*)0) && *VAR_13[0] != '\0' ) {
        SshEntry VAR_17 = { .hostname = *VAR_13, .port = 0 };
        FUNC_1 ( &VAR_17 );
    }
    else if ( ( VAR_12 & VAR_1 ) && VAR_16->hosts_list[VAR_14].hostname ) {
        FUNC_0 ( VAR_16->hosts_list[VAR_14].hostname );

        VAR_15 = VAR_10;
        FUNC_3 ( VAR_11 );
        FUNC_4 ( VAR_11 );
    }
    return VAR_15;
}
