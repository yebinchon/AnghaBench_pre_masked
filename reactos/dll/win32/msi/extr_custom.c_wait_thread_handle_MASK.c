
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int action; int handle; int package; } ;
typedef TYPE_1__ msi_custom_action_info ;
typedef int UINT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_5( msi_custom_action_info *VAR_3 )
{
    UINT VAR_4 = VAR_0;

    if (!(VAR_3->type & VAR_1))
    {
        FUNC_0("waiting for %s\n", FUNC_2( VAR_3->action ));

        FUNC_3( VAR_3->handle );

        if (!(VAR_3->type & VAR_2))
            VAR_4 = FUNC_1( VAR_3->package, VAR_3->handle );

        FUNC_4( VAR_3 );
    }
    else
    {
        FUNC_0("%s running in background\n", FUNC_2( VAR_3->action ));
    }

    return VAR_4;
}
