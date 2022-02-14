
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int emr ;
struct TYPE_4__ {int nSize; int iType; } ;
struct TYPE_3__ {TYPE_2__ emr; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ EMRENDPATH ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_1( PHYSDEV VAR_2 )
{
    EMRENDPATH VAR_3;

    VAR_3.emr.iType = VAR_0;
    VAR_3.emr.nSize = sizeof(VAR_3);

    FUNC_0( VAR_2, &VAR_3.emr );
    return VAR_1;
}
