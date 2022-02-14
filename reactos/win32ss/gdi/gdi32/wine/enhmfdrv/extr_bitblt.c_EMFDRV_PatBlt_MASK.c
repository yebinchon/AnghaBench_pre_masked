
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bitblt_coords {scalar_t__ log_height; scalar_t__ log_width; scalar_t__ log_y; scalar_t__ log_x; } ;
typedef int emr ;
struct TYPE_8__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_7__ {int nSize; int iType; } ;
struct TYPE_5__ {double eM11; double eM12; double eM21; double eM22; double eDx; double eDy; } ;
struct TYPE_6__ {TYPE_4__ rclBounds; TYPE_3__ emr; scalar_t__ cbBitsSrc; scalar_t__ offBitsSrc; scalar_t__ cbBmiSrc; scalar_t__ offBmiSrc; scalar_t__ iUsageSrc; scalar_t__ crBkColorSrc; TYPE_1__ xformSrc; scalar_t__ ySrc; scalar_t__ xSrc; int dwRop; scalar_t__ cyDest; scalar_t__ cxDest; scalar_t__ yDest; scalar_t__ xDest; } ;
typedef int PHYSDEV ;
typedef TYPE_2__ EMRBITBLT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 int VAR_0 ;

BOOL FUNC_2( PHYSDEV VAR_1, struct bitblt_coords *VAR_2, DWORD VAR_3 )
{
    EMRBITBLT VAR_4;
    BOOL VAR_5;

    VAR_4.emr.iType = VAR_0;
    VAR_4.emr.nSize = sizeof(VAR_4);
    VAR_4.rclBounds.left = VAR_2->log_x;
    VAR_4.rclBounds.top = VAR_2->log_y;
    VAR_4.rclBounds.right = VAR_2->log_x + VAR_2->log_width - 1;
    VAR_4.rclBounds.bottom = VAR_2->log_y + VAR_2->log_height - 1;
    VAR_4.xDest = VAR_2->log_x;
    VAR_4.yDest = VAR_2->log_y;
    VAR_4.cxDest = VAR_2->log_width;
    VAR_4.cyDest = VAR_2->log_height;
    VAR_4.dwRop = VAR_3;
    VAR_4.xSrc = 0;
    VAR_4.ySrc = 0;
    VAR_4.xformSrc.eM11 = 1.0;
    VAR_4.xformSrc.eM12 = 0.0;
    VAR_4.xformSrc.eM21 = 0.0;
    VAR_4.xformSrc.eM22 = 1.0;
    VAR_4.xformSrc.eDx = 0.0;
    VAR_4.xformSrc.eDy = 0.0;
    VAR_4.crBkColorSrc = 0;
    VAR_4.iUsageSrc = 0;
    VAR_4.offBmiSrc = 0;
    VAR_4.cbBmiSrc = 0;
    VAR_4.offBitsSrc = 0;
    VAR_4.cbBitsSrc = 0;

    VAR_5 = FUNC_1( VAR_1, &VAR_4.emr );
    if(VAR_5)
        FUNC_0( VAR_1, &VAR_4.rclBounds );
    return VAR_5;
}
