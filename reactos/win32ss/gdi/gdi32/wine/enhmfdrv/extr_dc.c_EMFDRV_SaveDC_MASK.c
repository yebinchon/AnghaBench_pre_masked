
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int emr ;
struct TYPE_13__ {int nSize; int iType; } ;
struct TYPE_12__ {TYPE_8__ emr; } ;
struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {scalar_t__ (* pSaveDC ) (TYPE_2__*) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef scalar_t__ INT ;
typedef TYPE_3__ EMRSAVEDC ;


 int FUNC_0 (TYPE_2__*,TYPE_8__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

INT FUNC_3( PHYSDEV VAR_2 )
{
    PHYSDEV VAR_3 = FUNC_1( VAR_2, VAR_1 );
    INT VAR_4 = VAR_3->funcs->pSaveDC( VAR_3 );

    if (VAR_4)
    {
        EMRSAVEDC VAR_5;
        VAR_5.emr.iType = VAR_0;
        VAR_5.emr.nSize = sizeof(VAR_5);
        FUNC_0( VAR_2, &VAR_5.emr );
    }
    return VAR_4;
}
