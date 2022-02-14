
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {scalar_t__ Type; int Metric1; int Gw; int Mask; int Dest; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__* PVOID ;
typedef int PIP_INTERFACE ;
typedef TYPE_1__* PIPROUTE_ENTRY ;
typedef int IP_ADDRESS ;
typedef int IPROUTE_ENTRY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int *,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,char*) ;

TDI_STATUS FUNC_7(PIP_INTERFACE VAR_8, PVOID VAR_9, UINT VAR_10)
{
    IP_ADDRESS VAR_11, VAR_12, VAR_13;
    PIPROUTE_ENTRY VAR_14 = VAR_9;

    if (!VAR_9 || VAR_10 < sizeof(IPROUTE_ENTRY))
        return VAR_4;

    FUNC_1( &VAR_11, VAR_14->Dest );
    FUNC_1( &VAR_12, VAR_14->Mask );
    FUNC_1( &VAR_13, VAR_14->Gw );

    if (VAR_8 == VAR_3)
    {
        FUNC_2("Failing attempt to add route to loopback adapter\n");
        return VAR_4;
    }

    if( VAR_14->Type == VAR_1 ) {
        FUNC_6(VAR_0,("Adding route (%s)\n", FUNC_0(&VAR_11)));
 if (!FUNC_4( &VAR_11, &VAR_12, &VAR_13,
          VAR_8, VAR_14->Metric1))
     return VAR_6;

        return VAR_7;
     } else if( VAR_14->Type == VAR_2 ) {
 FUNC_6(VAR_0,("Removing route (%s)\n", FUNC_0(&VAR_11)));
 if (FUNC_3(FUNC_5( &VAR_11, &VAR_13 )))
            return VAR_7;
        else
            return VAR_4;
     }

     return VAR_5;
}
