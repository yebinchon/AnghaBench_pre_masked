
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
typedef TYPE_1__ EMRFLATTENPATH ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;

BOOL FUNC_1( PHYSDEV VAR_1 )
{
    EMRFLATTENPATH VAR_2;

    VAR_2.emr.iType = VAR_0;
    VAR_2.emr.nSize = sizeof(VAR_2);

    return FUNC_0( VAR_1, &VAR_2.emr );
}
