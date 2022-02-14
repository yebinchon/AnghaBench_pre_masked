
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * private_data; } ;
struct TYPE_5__ {int cmd_list_length; int cmd_list; } ;
typedef TYPE_1__ RunModePrivateData ;
typedef TYPE_2__ Mode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 ( Mode *VAR_1 )
{
    if ( VAR_1->private_data == ((void*)0) ) {
        RunModePrivateData *VAR_2 = FUNC_0 ( sizeof ( *VAR_2 ) );
        VAR_1->private_data = (void *) VAR_2;
        VAR_2->cmd_list = FUNC_1 ( &( VAR_2->cmd_list_length ) );
    }

    return VAR_0;
}
