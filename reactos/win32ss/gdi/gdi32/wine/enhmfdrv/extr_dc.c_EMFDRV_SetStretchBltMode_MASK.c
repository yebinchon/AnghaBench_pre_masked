
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int emr ;
struct TYPE_4__ {int nSize; int iType; } ;
struct TYPE_3__ {TYPE_2__ emr; int iMode; } ;
typedef int PHYSDEV ;
typedef int INT ;
typedef TYPE_1__ EMRSETSTRETCHBLTMODE ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;

INT FUNC_1( PHYSDEV VAR_1, INT VAR_2 )
{
    EMRSETSTRETCHBLTMODE VAR_3;
    VAR_3.emr.iType = VAR_0;
    VAR_3.emr.nSize = sizeof(VAR_3);
    VAR_3.iMode = VAR_2;
    return FUNC_0( VAR_1, &VAR_3.emr ) ? VAR_2 : 0;
}
