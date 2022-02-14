
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
struct TYPE_12__ {TYPE_8__ emr; int iMode; } ;
struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* pSetMapMode ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef int INT ;
typedef TYPE_3__ EMRSETMAPMODE ;


 int FUNC_0 (TYPE_2__*,TYPE_8__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;

INT FUNC_3( PHYSDEV VAR_2, INT VAR_3 )
{
    PHYSDEV VAR_4 = FUNC_1( VAR_2, VAR_1 );
    EMRSETMAPMODE VAR_5;
    VAR_5.emr.iType = VAR_0;
    VAR_5.emr.nSize = sizeof(VAR_5);
    VAR_5.iMode = VAR_3;

    if (!FUNC_0( VAR_2, &VAR_5.emr )) return 0;
    return VAR_4->funcs->pSetMapMode( VAR_4, VAR_3 );
}
