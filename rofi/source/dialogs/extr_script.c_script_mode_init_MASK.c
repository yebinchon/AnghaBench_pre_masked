
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ed; int * private_data; } ;
struct TYPE_6__ {int cmd_list_length; int cmd_list; } ;
typedef TYPE_1__ ScriptModePrivateData ;
typedef TYPE_2__ Mode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,int *,int *) ;

__attribute__((used)) static int FUNC_2 ( Mode *VAR_1 )
{
    if ( VAR_1->private_data == ((void*)0) ) {
        ScriptModePrivateData *VAR_2 = FUNC_0 ( sizeof ( *VAR_2 ) );
        VAR_1->private_data = (void *) VAR_2;
        VAR_2->cmd_list = FUNC_1 ( VAR_1, (char *) VAR_1->ed, ((void*)0), &( VAR_2->cmd_list_length ) );
    }
    return VAR_0;
}
