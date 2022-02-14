
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
typedef TYPE_1__ EMRSETLAYOUT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

DWORD FUNC_1( PHYSDEV VAR_2, DWORD VAR_3 )
{
    EMRSETLAYOUT VAR_4;

    VAR_4.emr.iType = VAR_0;
    VAR_4.emr.nSize = sizeof(VAR_4);
    VAR_4.iMode = VAR_3;
    return FUNC_0( VAR_2, &VAR_4.emr ) ? VAR_3 : VAR_1;
}
