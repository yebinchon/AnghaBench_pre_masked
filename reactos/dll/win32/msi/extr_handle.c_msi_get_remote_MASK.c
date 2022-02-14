
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * unk; } ;
struct TYPE_4__ {TYPE_1__ u; int remote; } ;
typedef size_t MSIHANDLE ;
typedef int IUnknown ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;

IUnknown *FUNC_3( MSIHANDLE VAR_3 )
{
    IUnknown *VAR_4 = ((void*)0);

    FUNC_0( &VAR_0 );
    VAR_3--;
    if( VAR_3>=VAR_2 )
        goto out;
    if( !VAR_1[VAR_3].remote)
        goto out;
    VAR_4 = VAR_1[VAR_3].u.unk;
    if( VAR_4 )
        FUNC_1( VAR_4 );

out:
    FUNC_2( &VAR_0 );

    return VAR_4;
}
