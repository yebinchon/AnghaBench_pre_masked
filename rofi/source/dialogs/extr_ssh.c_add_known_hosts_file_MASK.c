
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_known_hosts; } ;
typedef TYPE_1__ SSHModePrivateData ;
typedef int GList ;
typedef int GCompareFunc ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,char const*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4 ( SSHModePrivateData *VAR_1, const char *VAR_2 )
{
    GList *VAR_3 = FUNC_2 ( VAR_1->user_known_hosts, VAR_2, (GCompareFunc)VAR_0 );
    if ( VAR_3 == ((void*)0) ) {
        FUNC_0("Add '%s' to UserKnownHost list", VAR_2);
        VAR_1->user_known_hosts = FUNC_1 ( VAR_1->user_known_hosts, FUNC_3 ( VAR_2 ) );
    } else {
        FUNC_0("File '%s' already in UserKnownHostsFile list", VAR_2);
    }
}
