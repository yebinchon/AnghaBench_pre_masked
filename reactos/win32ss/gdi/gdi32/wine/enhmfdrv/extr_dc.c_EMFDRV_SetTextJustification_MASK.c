
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int emr ;
struct TYPE_4__ {int nSize; int iType; } ;
struct TYPE_3__ {TYPE_2__ emr; void* nBreakCount; void* nBreakExtra; } ;
typedef int PHYSDEV ;
typedef void* INT ;
typedef TYPE_1__ EMRSETTEXTJUSTIFICATION ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;

BOOL FUNC_1(PHYSDEV VAR_1, INT VAR_2, INT VAR_3)
{
    EMRSETTEXTJUSTIFICATION VAR_4;
    VAR_4.emr.iType = VAR_0;
    VAR_4.emr.nSize = sizeof(VAR_4);
    VAR_4.nBreakExtra = VAR_2;
    VAR_4.nBreakCount = VAR_3;
    return FUNC_0(VAR_1, &VAR_4.emr);
}
