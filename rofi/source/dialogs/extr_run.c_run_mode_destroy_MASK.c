
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * private_data; } ;
struct TYPE_5__ {int cmd_list; } ;
typedef TYPE_1__ RunModePrivateData ;
typedef TYPE_2__ Mode ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 ( Mode *VAR_0 )
{
    RunModePrivateData *VAR_1 = (RunModePrivateData *) VAR_0->private_data;
    if ( VAR_1 != ((void*)0) ) {
        FUNC_1 ( VAR_1->cmd_list );
        FUNC_0 ( VAR_1 );
        VAR_0->private_data = ((void*)0);
    }
}
