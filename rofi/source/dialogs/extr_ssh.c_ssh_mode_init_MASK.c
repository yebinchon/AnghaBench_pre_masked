
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hosts_list_length; int hosts_list; } ;
typedef TYPE_1__ SSHModePrivateData ;
typedef int Mode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,void*) ;

__attribute__((used)) static int FUNC_4 ( Mode *VAR_1 )
{
    if ( FUNC_2 ( VAR_1 ) == ((void*)0) ) {
        SSHModePrivateData *VAR_2 = FUNC_0 ( sizeof ( *VAR_2 ) );
        FUNC_3 ( VAR_1, (void *) VAR_2 );
        VAR_2->hosts_list = FUNC_1 ( VAR_2, &( VAR_2->hosts_list_length ) );
    }
    return VAR_0;
}
