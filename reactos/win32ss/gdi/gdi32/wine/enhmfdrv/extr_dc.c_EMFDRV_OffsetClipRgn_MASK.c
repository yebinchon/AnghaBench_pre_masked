
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int emr ;
struct TYPE_15__ {int nSize; int iType; } ;
struct TYPE_12__ {void* y; void* x; } ;
struct TYPE_14__ {TYPE_9__ emr; TYPE_2__ ptlOffset; } ;
struct TYPE_13__ {TYPE_1__* funcs; } ;
struct TYPE_11__ {void* (* pOffsetClipRgn ) (TYPE_3__*,void*,void*) ;} ;
typedef TYPE_3__* PHYSDEV ;
typedef void* INT ;
typedef TYPE_4__ EMROFFSETCLIPRGN ;


 int FUNC_0 (TYPE_3__*,TYPE_9__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 void* FUNC_2 (TYPE_3__*,void*,void*) ;

INT FUNC_3( PHYSDEV VAR_3, INT VAR_4, INT VAR_5 )
{
    PHYSDEV VAR_6 = FUNC_1( VAR_3, VAR_2 );
    EMROFFSETCLIPRGN VAR_7;

    VAR_7.emr.iType = VAR_0;
    VAR_7.emr.nSize = sizeof(VAR_7);
    VAR_7.ptlOffset.x = VAR_4;
    VAR_7.ptlOffset.y = VAR_5;
    if (!FUNC_0( VAR_3, &VAR_7.emr )) return VAR_1;
    return VAR_6->funcs->pOffsetClipRgn( VAR_6, VAR_4, VAR_5 );
}
