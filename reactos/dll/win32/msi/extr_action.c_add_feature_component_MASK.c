
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int entry; int * component; } ;
struct TYPE_5__ {int Components; } ;
typedef TYPE_1__ MSIFEATURE ;
typedef int MSICOMPONENT ;
typedef TYPE_2__ ComponentList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static UINT FUNC_2( MSIFEATURE *VAR_2, MSICOMPONENT *VAR_3 )
{
    ComponentList *VAR_4;

    VAR_4 = FUNC_1( sizeof (*VAR_4) );
    if ( !VAR_4 )
        return VAR_0;
    VAR_4->component = VAR_3;
    FUNC_0( &VAR_2->Components, &VAR_4->entry );

    return VAR_1;
}
