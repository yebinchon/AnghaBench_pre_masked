
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* Interface; } ;
struct TYPE_6__ {int MTU; } ;
typedef TYPE_2__* PNEIGHBOR_CACHE_ENTRY ;
typedef scalar_t__ PIP_INTERFACE ;
typedef int PIP_ADDRESS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

PNEIGHBOR_CACHE_ENTRY FUNC_6(PIP_ADDRESS VAR_5)
{
    PNEIGHBOR_CACHE_ENTRY VAR_6 = ((void*)0);
    PIP_INTERFACE VAR_7;

    FUNC_5(VAR_0, ("Called. Destination (0x%X)\n", VAR_5));

    FUNC_5(VAR_0, ("Destination (%s)\n", FUNC_0(VAR_5)));







    VAR_7 = FUNC_1(VAR_5);
    if (VAR_7) {

 VAR_6 = FUNC_2(VAR_7, VAR_5, VAR_2);
    } else {

 VAR_6 = FUNC_4(VAR_5);
    }

    if( VAR_6 )
 FUNC_5(VAR_1,("Interface->MTU: %d\n", VAR_6->Interface->MTU));

    return VAR_6;
}
