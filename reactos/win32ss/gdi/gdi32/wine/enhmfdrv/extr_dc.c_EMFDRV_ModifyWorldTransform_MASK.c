
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
struct TYPE_12__ {TYPE_8__ emr; int iMode; int xform; } ;
struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int (* pModifyWorldTransform ) (TYPE_2__*,int const*,int ) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef TYPE_3__ EMRMODIFYWORLDTRANSFORM ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int const*,int ) ;

BOOL FUNC_3( PHYSDEV VAR_3, const XFORM *VAR_4, DWORD VAR_5)
{
    PHYSDEV VAR_6 = FUNC_1( VAR_3, VAR_2 );
    EMRMODIFYWORLDTRANSFORM VAR_7;

    VAR_7.emr.iType = VAR_0;
    VAR_7.emr.nSize = sizeof(VAR_7);
    VAR_7.xform = *VAR_4;
    VAR_7.iMode = VAR_5;

    if (!FUNC_0( VAR_3, &VAR_7.emr )) return VAR_1;
    return VAR_6->funcs->pModifyWorldTransform( VAR_6, VAR_4, VAR_5 );
}
