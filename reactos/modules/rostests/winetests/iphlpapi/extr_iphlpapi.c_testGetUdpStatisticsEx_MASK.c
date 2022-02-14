
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwNumAddrs; int dwOutDatagrams; int dwInErrors; int dwNoPorts; int dwInDatagrams; } ;
typedef TYPE_1__ MIB_UDPSTATS ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_7;
    MIB_UDPSTATS VAR_8;

    if (!&FUNC_2)
    {
        FUNC_4( "GetUdpStatisticsEx not available\n" );
        return;
    }

    VAR_7 = FUNC_2(((void*)0), VAR_1);
    FUNC_1(VAR_7 == VAR_3,
       "GetUdpStatisticsEx(NULL, AF_INET); returned %d, expected ERROR_INVALID_PARAMETER\n", VAR_7);

    VAR_7 = FUNC_2(&VAR_8, VAR_0);
    FUNC_1(VAR_7 == VAR_3 || VAR_7 == VAR_4,
       "GetUdpStatisticsEx(&stats, AF_BAN) returned %d, expected ERROR_INVALID_PARAMETER\n", VAR_7);

    VAR_7 = FUNC_2(&VAR_8, VAR_1);
    FUNC_1(VAR_7 == VAR_5, "GetUdpStatisticsEx returned %d, expected NO_ERROR\n", VAR_7);
    if (VAR_7 == VAR_5 && VAR_6 > 1)
    {
        FUNC_3( "UDP IPv4 Ex stats:\n" );
        FUNC_3( "    dwInDatagrams:  %u\n", VAR_8.dwInDatagrams );
        FUNC_3( "    dwNoPorts:      %u\n", VAR_8.dwNoPorts );
        FUNC_3( "    dwInErrors:     %u\n", VAR_8.dwInErrors );
        FUNC_3( "    dwOutDatagrams: %u\n", VAR_8.dwOutDatagrams );
        FUNC_3( "    dwNumAddrs:     %u\n", VAR_8.dwNumAddrs );
    }

    VAR_7 = FUNC_2(&VAR_8, VAR_2);
    FUNC_1(VAR_7 == VAR_5 || FUNC_0(VAR_7 == VAR_4),
       "GetUdpStatisticsEx returned %d, expected NO_ERROR\n", VAR_7);
    if (VAR_7 == VAR_5 && VAR_6 > 1)
    {
        FUNC_3( "UDP IPv6 Ex stats:\n" );
        FUNC_3( "    dwInDatagrams:  %u\n", VAR_8.dwInDatagrams );
        FUNC_3( "    dwNoPorts:      %u\n", VAR_8.dwNoPorts );
        FUNC_3( "    dwInErrors:     %u\n", VAR_8.dwInErrors );
        FUNC_3( "    dwOutDatagrams: %u\n", VAR_8.dwOutDatagrams );
        FUNC_3( "    dwNumAddrs:     %u\n", VAR_8.dwNumAddrs );
    }
}
