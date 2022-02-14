
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwForwarding; } ;
struct TYPE_5__ {int dwNumRoutes; int dwNumAddr; int dwNumIf; int dwFragCreates; int dwFragFails; int dwFragOks; int dwReasmFails; int dwReasmOks; int dwReasmReqds; int dwReasmTimeout; int dwOutNoRoutes; int dwOutDiscards; int dwRoutingDiscards; int dwOutRequests; int dwInDelivers; int dwInDiscards; int dwInUnknownProtos; int dwForwDatagrams; int dwInAddrErrors; int dwInHdrErrors; int dwInReceives; int dwDefaultTTL; } ;
typedef TYPE_1__ MIB_IPSTATS ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
  if (&FUNC_2) {
    DWORD VAR_4;
    MIB_IPSTATS VAR_5;

    VAR_4 = FUNC_2(((void*)0));
    if (VAR_4 == VAR_1) {
      FUNC_3("GetIpStatistics is not supported\n");
      return;
    }
    FUNC_1(VAR_4 == VAR_0,
     "GetIpStatistics(NULL) returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_4);
    VAR_4 = FUNC_2(&VAR_5);
    FUNC_1(VAR_4 == VAR_2,
      "GetIpStatistics returned %d, expected NO_ERROR\n", VAR_4);
    if (VAR_4 == VAR_2 && VAR_3 > 1)
    {
        FUNC_4( "IP stats:\n" );
        FUNC_4( "    dwForwarding:      %u\n", FUNC_0(VAR_5).dwForwarding );
        FUNC_4( "    dwDefaultTTL:      %u\n", VAR_5.dwDefaultTTL );
        FUNC_4( "    dwInReceives:      %u\n", VAR_5.dwInReceives );
        FUNC_4( "    dwInHdrErrors:     %u\n", VAR_5.dwInHdrErrors );
        FUNC_4( "    dwInAddrErrors:    %u\n", VAR_5.dwInAddrErrors );
        FUNC_4( "    dwForwDatagrams:   %u\n", VAR_5.dwForwDatagrams );
        FUNC_4( "    dwInUnknownProtos: %u\n", VAR_5.dwInUnknownProtos );
        FUNC_4( "    dwInDiscards:      %u\n", VAR_5.dwInDiscards );
        FUNC_4( "    dwInDelivers:      %u\n", VAR_5.dwInDelivers );
        FUNC_4( "    dwOutRequests:     %u\n", VAR_5.dwOutRequests );
        FUNC_4( "    dwRoutingDiscards: %u\n", VAR_5.dwRoutingDiscards );
        FUNC_4( "    dwOutDiscards:     %u\n", VAR_5.dwOutDiscards );
        FUNC_4( "    dwOutNoRoutes:     %u\n", VAR_5.dwOutNoRoutes );
        FUNC_4( "    dwReasmTimeout:    %u\n", VAR_5.dwReasmTimeout );
        FUNC_4( "    dwReasmReqds:      %u\n", VAR_5.dwReasmReqds );
        FUNC_4( "    dwReasmOks:        %u\n", VAR_5.dwReasmOks );
        FUNC_4( "    dwReasmFails:      %u\n", VAR_5.dwReasmFails );
        FUNC_4( "    dwFragOks:         %u\n", VAR_5.dwFragOks );
        FUNC_4( "    dwFragFails:       %u\n", VAR_5.dwFragFails );
        FUNC_4( "    dwFragCreates:     %u\n", VAR_5.dwFragCreates );
        FUNC_4( "    dwNumIf:           %u\n", VAR_5.dwNumIf );
        FUNC_4( "    dwNumAddr:         %u\n", VAR_5.dwNumAddr );
        FUNC_4( "    dwNumRoutes:       %u\n", VAR_5.dwNumRoutes );
    }
  }
}
