
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int emr ;
typedef int XFORM ;
struct TYPE_13__ {int nSize; int iType; } ;
struct TYPE_12__ {TYPE_8__ emr; int xform; } ;
struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* pSetWorldTransform ) (TYPE_2__*,int const*) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef TYPE_3__ EMRSETWORLDTRANSFORM ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int const*) ;

BOOL FUNC_3( PHYSDEV VAR_3, const XFORM *VAR_4)
{
    PHYSDEV VAR_5 = FUNC_1( VAR_3, VAR_2 );
    EMRSETWORLDTRANSFORM VAR_6;

    VAR_6.emr.iType = VAR_0;
    VAR_6.emr.nSize = sizeof(VAR_6);
    VAR_6.xform = *VAR_4;

    if (!FUNC_0( VAR_3, &VAR_6.emr )) return VAR_1;
    return VAR_5->funcs->pSetWorldTransform( VAR_5, VAR_4 );
}
