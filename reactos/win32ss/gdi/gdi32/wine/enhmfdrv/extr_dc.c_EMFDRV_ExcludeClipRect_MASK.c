
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
struct TYPE_11__ {void* bottom; void* right; void* top; void* left; } ;
struct TYPE_14__ {TYPE_9__ emr; TYPE_1__ rclClip; } ;
struct TYPE_13__ {TYPE_2__* funcs; } ;
struct TYPE_12__ {void* (* pExcludeClipRect ) (TYPE_3__*,void*,void*,void*,void*) ;} ;
typedef TYPE_3__* PHYSDEV ;
typedef void* INT ;
typedef TYPE_4__ EMREXCLUDECLIPRECT ;


 int FUNC_0 (TYPE_3__*,TYPE_9__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 void* FUNC_2 (TYPE_3__*,void*,void*,void*,void*) ;

INT FUNC_3( PHYSDEV VAR_3, INT VAR_4, INT VAR_5, INT VAR_6, INT VAR_7 )
{
    PHYSDEV VAR_8 = FUNC_1( VAR_3, VAR_2 );
    EMREXCLUDECLIPRECT VAR_9;

    VAR_9.emr.iType = VAR_0;
    VAR_9.emr.nSize = sizeof(VAR_9);
    VAR_9.rclClip.left = VAR_4;
    VAR_9.rclClip.top = VAR_5;
    VAR_9.rclClip.right = VAR_6;
    VAR_9.rclClip.bottom = VAR_7;
    if (!FUNC_0( VAR_3, &VAR_9.emr )) return VAR_1;
    return VAR_8->funcs->pExcludeClipRect( VAR_8, VAR_4, VAR_5, VAR_6, VAR_7 );
}
