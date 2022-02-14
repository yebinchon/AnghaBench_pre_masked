
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int hosts_list_length; struct TYPE_4__* hosts_list; int user_known_hosts; struct TYPE_4__* hostname; } ;
typedef TYPE_1__ SSHModePrivateData ;
typedef int Mode ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int (*) (TYPE_1__*)) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4 ( Mode *VAR_0 )
{
    SSHModePrivateData *VAR_1 = (SSHModePrivateData *) FUNC_2 ( VAR_0 );
    if ( VAR_1 != ((void*)0) ) {
        for ( unsigned int VAR_2 = 0; VAR_2 < VAR_1->hosts_list_length; VAR_2++ ){
            FUNC_0( VAR_1->hosts_list[VAR_2].hostname );
        }
        FUNC_1 ( VAR_1->user_known_hosts, FUNC_0 );
        FUNC_0 ( VAR_1->hosts_list );
        FUNC_0 ( VAR_1 );
        FUNC_3 ( VAR_0, ((void*)0) );
    }
}
