
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int emr ;
struct TYPE_21__ {int y; int x; } ;
struct TYPE_25__ {TYPE_3__ cur_pos; } ;
struct TYPE_24__ {int path; } ;
struct TYPE_18__ {int nSize; int iType; } ;
struct TYPE_19__ {void* y; void* x; } ;
struct TYPE_23__ {TYPE_14__ emr; TYPE_1__ ptl; } ;
struct TYPE_22__ {int hdc; } ;
struct TYPE_20__ {void* bottom; void* right; void* top; void* left; } ;
typedef TYPE_2__ RECTL ;
typedef TYPE_3__ POINT ;
typedef TYPE_4__* PHYSDEV ;
typedef void* INT ;
typedef TYPE_5__ EMRLINETO ;
typedef TYPE_6__ EMFDRV_PDEVICE ;
typedef TYPE_7__ DC ;
typedef int BOOL ;


 int FUNC_0 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_14__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_2 ;
 TYPE_6__* FUNC_3 (TYPE_4__*) ;
 TYPE_7__* FUNC_4 (TYPE_4__*) ;
 void* FUNC_5 (void*,int ) ;
 void* FUNC_6 (void*,int ) ;

BOOL FUNC_7( PHYSDEV VAR_3, INT VAR_4, INT VAR_5 )
{
    EMFDRV_PDEVICE *VAR_6 = FUNC_3( VAR_3 );

    DC *VAR_7 = FUNC_4( VAR_3 );

    POINT VAR_8;
    EMRLINETO VAR_9;
    RECTL VAR_10;

    VAR_9.emr.iType = VAR_0;
    VAR_9.emr.nSize = sizeof(VAR_9);
    VAR_9.ptl.x = VAR_4;
    VAR_9.ptl.y = VAR_5;

    if(!FUNC_1( VAR_3, &VAR_9.emr ))
     return VAR_1;



    VAR_8 = VAR_7->cur_pos;

    VAR_10.left = FUNC_6(VAR_4, VAR_8.x);
    VAR_10.top = FUNC_6(VAR_5, VAR_8.y);
    VAR_10.right = FUNC_5(VAR_4, VAR_8.x);
    VAR_10.bottom = FUNC_5(VAR_5, VAR_8.y);

    if(!VAR_6->path)
        FUNC_0( VAR_3, &VAR_10 );

    return VAR_2;
}
