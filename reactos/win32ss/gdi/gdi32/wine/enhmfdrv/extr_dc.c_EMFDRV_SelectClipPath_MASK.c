
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
typedef TYPE_1__ EMRSELECTCLIPPATH ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

BOOL FUNC_1( PHYSDEV VAR_3, INT VAR_4 )
{

    EMRSELECTCLIPPATH VAR_5;



    VAR_5.emr.iType = VAR_0;
    VAR_5.emr.nSize = sizeof(VAR_5);
    VAR_5.iMode = VAR_4;

    if (!FUNC_0( VAR_3, &VAR_5.emr )) return VAR_1;







    return VAR_2;
}
