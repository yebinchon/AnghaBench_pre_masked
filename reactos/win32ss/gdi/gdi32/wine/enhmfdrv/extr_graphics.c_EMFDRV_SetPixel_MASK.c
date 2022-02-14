
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int emr ;
struct TYPE_9__ {int nSize; int iType; } ;
struct TYPE_6__ {void* y; void* x; } ;
struct TYPE_8__ {int crColor; TYPE_4__ emr; TYPE_1__ ptlPixel; } ;
struct TYPE_7__ {void* bottom; void* top; void* right; void* left; } ;
typedef TYPE_2__ RECTL ;
typedef int PHYSDEV ;
typedef void* INT ;
typedef TYPE_3__ EMRSETPIXELV ;
typedef int COLORREF ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*) ;
 int VAR_0 ;

COLORREF FUNC_2( PHYSDEV VAR_1, INT VAR_2, INT VAR_3, COLORREF VAR_4 )
{
    EMRSETPIXELV VAR_5;

    VAR_5.emr.iType = VAR_0;
    VAR_5.emr.nSize = sizeof(VAR_5);
    VAR_5.ptlPixel.x = VAR_2;
    VAR_5.ptlPixel.y = VAR_3;
    VAR_5.crColor = VAR_4;

    if (FUNC_1( VAR_1, &VAR_5.emr )) {
        RECTL VAR_6;
        VAR_6.left = VAR_6.right = VAR_2;
        VAR_6.top = VAR_6.bottom = VAR_3;
        FUNC_0( VAR_1, &VAR_6 );
        return VAR_4;
    }
    return -1;
}
