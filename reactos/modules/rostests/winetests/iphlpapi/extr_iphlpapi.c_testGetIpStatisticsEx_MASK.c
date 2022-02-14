
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__ FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_7;
    MIB_IPSTATS VAR_8;

    if (!&FUNC_3)
    {
        FUNC_5( "GetIpStatisticsEx not available\n" );
        return;
    }

    VAR_7 = FUNC_3(((void*)0), VAR_1);
    FUNC_2(VAR_7 == VAR_3,
       "GetIpStatisticsEx(NULL, AF_INET) returned %d, expected ERROR_INVALID_PARAMETER\n", VAR_7);

    VAR_7 = FUNC_3(&VAR_8, VAR_0);
    FUNC_2(VAR_7 == VAR_3,
       "GetIpStatisticsEx(&stats, AF_BAN) returned %d, expected ERROR_INVALID_PARAMETER\n", VAR_7);

    VAR_7 = FUNC_3(&VAR_8, VAR_1);
    FUNC_2(VAR_7 == VAR_5, "GetIpStatisticsEx returned %d, expected NO_ERROR\n", VAR_7);
    if (VAR_7 == VAR_5 && VAR_6 > 1)
    {
        FUNC_4( "IP IPv4 Ex stats:\n" );
        FUNC_4( "    dwForwarding:      %u\n", FUNC_0(VAR_8).dwForwarding );
        FUNC_4( "    dwDefaultTTL:      %u\n", VAR_8.dwDefaultTTL );
        FUNC_4( "    dwInReceives:      %u\n", VAR_8.dwInReceives );
        FUNC_4( "    dwInHdrErrors:     %u\n", VAR_8.dwInHdrErrors );
        FUNC_4( "    dwInAddrErrors:    %u\n", VAR_8.dwInAddrErrors );
        FUNC_4( "    dwForwDatagrams:   %u\n", VAR_8.dwForwDatagrams );
        FUNC_4( "    dwInUnknownProtos: %u\n", VAR_8.dwInUnknownProtos );
        FUNC_4( "    dwInDiscards:      %u\n", VAR_8.dwInDiscards );
        FUNC_4( "    dwInDelivers:      %u\n", VAR_8.dwInDelivers );
        FUNC_4( "    dwOutRequests:     %u\n", VAR_8.dwOutRequests );
        FUNC_4( "    dwRoutingDiscards: %u\n", VAR_8.dwRoutingDiscards );
        FUNC_4( "    dwOutDiscards:     %u\n", VAR_8.dwOutDiscards );
        FUNC_4( "    dwOutNoRoutes:     %u\n", VAR_8.dwOutNoRoutes );
        FUNC_4( "    dwReasmTimeout:    %u\n", VAR_8.dwReasmTimeout );
        FUNC_4( "    dwReasmReqds:      %u\n", VAR_8.dwReasmReqds );
        FUNC_4( "    dwReasmOks:        %u\n", VAR_8.dwReasmOks );
        FUNC_4( "    dwReasmFails:      %u\n", VAR_8.dwReasmFails );
        FUNC_4( "    dwFragOks:         %u\n", VAR_8.dwFragOks );
        FUNC_4( "    dwFragFails:       %u\n", VAR_8.dwFragFails );
        FUNC_4( "    dwFragCreates:     %u\n", VAR_8.dwFragCreates );
        FUNC_4( "    dwNumIf:           %u\n", VAR_8.dwNumIf );
        FUNC_4( "    dwNumAddr:         %u\n", VAR_8.dwNumAddr );
        FUNC_4( "    dwNumRoutes:       %u\n", VAR_8.dwNumRoutes );
    }

    VAR_7 = FUNC_3(&VAR_8, VAR_2);
    FUNC_2(VAR_7 == VAR_5 || FUNC_1(VAR_7 == VAR_4),
       "GetIpStatisticsEx returned %d, expected NO_ERROR\n", VAR_7);
    if (VAR_7 == VAR_5 && VAR_6 > 1)
    {
        FUNC_4( "IP IPv6 Ex stats:\n" );
        FUNC_4( "    dwForwarding:      %u\n", FUNC_0(VAR_8).dwForwarding );
        FUNC_4( "    dwDefaultTTL:      %u\n", VAR_8.dwDefaultTTL );
        FUNC_4( "    dwInReceives:      %u\n", VAR_8.dwInReceives );
        FUNC_4( "    dwInHdrErrors:     %u\n", VAR_8.dwInHdrErrors );
        FUNC_4( "    dwInAddrErrors:    %u\n", VAR_8.dwInAddrErrors );
        FUNC_4( "    dwForwDatagrams:   %u\n", VAR_8.dwForwDatagrams );
        FUNC_4( "    dwInUnknownProtos: %u\n", VAR_8.dwInUnknownProtos );
        FUNC_4( "    dwInDiscards:      %u\n", VAR_8.dwInDiscards );
        FUNC_4( "    dwInDelivers:      %u\n", VAR_8.dwInDelivers );
        FUNC_4( "    dwOutRequests:     %u\n", VAR_8.dwOutRequests );
        FUNC_4( "    dwRoutingDiscards: %u\n", VAR_8.dwRoutingDiscards );
        FUNC_4( "    dwOutDiscards:     %u\n", VAR_8.dwOutDiscards );
        FUNC_4( "    dwOutNoRoutes:     %u\n", VAR_8.dwOutNoRoutes );
        FUNC_4( "    dwReasmTimeout:    %u\n", VAR_8.dwReasmTimeout );
        FUNC_4( "    dwReasmReqds:      %u\n", VAR_8.dwReasmReqds );
        FUNC_4( "    dwReasmOks:        %u\n", VAR_8.dwReasmOks );
        FUNC_4( "    dwReasmFails:      %u\n", VAR_8.dwReasmFails );
        FUNC_4( "    dwFragOks:         %u\n", VAR_8.dwFragOks );
        FUNC_4( "    dwFragFails:       %u\n", VAR_8.dwFragFails );
        FUNC_4( "    dwFragCreates:     %u\n", VAR_8.dwFragCreates );
        FUNC_4( "    dwNumIf:           %u\n", VAR_8.dwNumIf );
        FUNC_4( "    dwNumAddr:         %u\n", VAR_8.dwNumAddr );
        FUNC_4( "    dwNumRoutes:       %u\n", VAR_8.dwNumRoutes );
    }
}
