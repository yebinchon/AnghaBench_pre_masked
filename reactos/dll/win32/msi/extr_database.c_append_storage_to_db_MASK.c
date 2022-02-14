
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int transforms; } ;
struct TYPE_5__ {int entry; int * stg; } ;
typedef TYPE_1__ MSITRANSFORM ;
typedef TYPE_2__ MSIDATABASE ;
typedef int IStorage ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int) ;

void FUNC_3( MSIDATABASE *VAR_0, IStorage *VAR_1 )
{
    MSITRANSFORM *VAR_2;

    VAR_2 = FUNC_2( sizeof *VAR_2 );
    VAR_2->stg = VAR_1;
    FUNC_0( VAR_1 );
    FUNC_1( &VAR_0->transforms, &VAR_2->entry );
}
