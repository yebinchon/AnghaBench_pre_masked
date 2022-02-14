
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int emr ;
struct TYPE_6__ {int nSize; int iType; } ;
struct TYPE_4__ {void* y; void* x; } ;
struct TYPE_5__ {TYPE_3__ emr; TYPE_1__ ptl; } ;
typedef int PHYSDEV ;
typedef void* INT ;
typedef TYPE_2__ EMRMOVETOEX ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;

BOOL FUNC_1(PHYSDEV VAR_1, INT VAR_2, INT VAR_3)
{
    EMRMOVETOEX VAR_4;

    VAR_4.emr.iType = VAR_0;
    VAR_4.emr.nSize = sizeof(VAR_4);
    VAR_4.ptl.x = VAR_2;
    VAR_4.ptl.y = VAR_3;

    return FUNC_0( VAR_1, &VAR_4.emr );
}
