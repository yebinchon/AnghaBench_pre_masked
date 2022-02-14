
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int (* pDeleteDC ) (int ) ;} ;
struct TYPE_14__ {TYPE_1__* funcs; } ;
struct TYPE_13__ {int (* pAbortPath ) (TYPE_2__*) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef int DC ;
typedef int BOOL ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_5__ VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static BOOL FUNC_7( PHYSDEV VAR_2 )
{
    PHYSDEV VAR_3 = FUNC_1( VAR_2 );
    PHYSDEV VAR_4 = FUNC_0( VAR_2, VAR_1 );
    DC *VAR_5 = FUNC_2( VAR_2 );

    VAR_0.pDeleteDC( FUNC_3( VAR_5, &VAR_0 ));
    VAR_3->funcs->pAbortPath( VAR_3 );
    return VAR_4->funcs->pAbortPath( VAR_4 );
}
