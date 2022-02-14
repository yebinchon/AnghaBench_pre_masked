
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * unk; } ;
struct TYPE_5__ {int remote; int dwThreadId; TYPE_1__ u; } ;
typedef TYPE_2__ msi_handle_info ;
typedef int MSIHANDLE ;
typedef int IUnknown ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (char*,int *,int) ;
 int VAR_1 ;
 int FUNC_5 () ;
 TYPE_2__* VAR_2 ;

MSIHANDLE FUNC_6( IUnknown *VAR_3 )
{
    msi_handle_info *VAR_4;
    MSIHANDLE VAR_5;

    FUNC_0( &VAR_0 );

    VAR_5 = FUNC_5();
    if (VAR_5)
    {
        VAR_4 = &VAR_2[ VAR_5 - 1 ];
        FUNC_2( VAR_3 );
        VAR_4->u.unk = VAR_3;
        VAR_4->dwThreadId = FUNC_1();
        VAR_4->remote = VAR_1;
    }

    FUNC_3( &VAR_0 );

    FUNC_4("%p -> %d\n", VAR_3, VAR_5);

    return VAR_5;
}
