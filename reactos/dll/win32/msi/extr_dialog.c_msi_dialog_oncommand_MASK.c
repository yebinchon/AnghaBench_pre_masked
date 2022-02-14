
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int control_cancel; int control_default; } ;
typedef TYPE_1__ msi_dialog ;
struct TYPE_13__ {int (* handler ) (TYPE_1__*,TYPE_2__*,int) ;} ;
typedef TYPE_2__ msi_control ;
typedef int WPARAM ;
typedef int LRESULT ;
typedef int HWND ;


 int FUNC_0 (char*,TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static LRESULT FUNC_5( msi_dialog *VAR_0, WPARAM VAR_1, HWND VAR_2 )
{
    msi_control *VAR_3 = ((void*)0);

    FUNC_0("%p %p %08lx\n", VAR_0, VAR_2, VAR_1);

    switch (VAR_1)
    {
    case 1:
        VAR_3 = FUNC_2( VAR_0, VAR_0->control_default );
        break;
    case 2:
        VAR_3 = FUNC_2( VAR_0, VAR_0->control_cancel );
        break;
    default:
        VAR_3 = FUNC_3( VAR_0, VAR_2 );
    }

    if( VAR_3 )
    {
        if( VAR_3->handler )
        {
            VAR_3->handler( VAR_0, VAR_3, VAR_1 );
            FUNC_1( VAR_0 );
        }
    }

    return 0;
}
