
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {TYPE_1__* obj; } ;
struct TYPE_6__ {TYPE_2__ u; scalar_t__ remote; } ;
struct TYPE_4__ {scalar_t__ magic; scalar_t__ type; } ;
typedef void MSIOBJECTHDR ;
typedef size_t MSIHANDLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (void*) ;

void *FUNC_3(MSIHANDLE VAR_4, UINT VAR_5)
{
    MSIOBJECTHDR *VAR_6 = ((void*)0);

    FUNC_0( &VAR_1 );
    VAR_4--;
    if( VAR_4 >= VAR_3 )
        goto out;
    if( VAR_2[VAR_4].remote)
        goto out;
    if( !VAR_2[VAR_4].u.obj )
        goto out;
    if( VAR_2[VAR_4].u.obj->magic != VAR_0 )
        goto out;
    if( VAR_5 && (VAR_2[VAR_4].u.obj->type != VAR_5) )
        goto out;
    VAR_6 = VAR_2[VAR_4].u.obj;
    FUNC_2( VAR_6 );

out:
    FUNC_1( &VAR_1 );

    return VAR_6;
}
