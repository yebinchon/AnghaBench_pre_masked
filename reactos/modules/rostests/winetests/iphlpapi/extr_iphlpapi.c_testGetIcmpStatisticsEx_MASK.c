
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * rgdwTypeCount; int dwErrors; int dwMsgs; } ;
struct TYPE_5__ {int * rgdwTypeCount; int dwErrors; int dwMsgs; } ;
struct TYPE_7__ {TYPE_2__ icmpOutStats; TYPE_1__ icmpInStats; } ;
typedef TYPE_3__ MIB_ICMP_EX ;
typedef int INT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_7;
    MIB_ICMP_EX VAR_8;

    if (!&FUNC_2)
    {
        FUNC_4( "GetIcmpStatisticsEx not available\n" );
        return;
    }


    if (1) {
        VAR_7 = FUNC_2(((void*)0), VAR_1);
        FUNC_1(VAR_7 == VAR_3,
         "GetIcmpStatisticsEx(NULL, AF_INET) returned %d, expected ERROR_INVALID_PARAMETER\n", VAR_7);
    }

    VAR_7 = FUNC_2(&VAR_8, VAR_0);
    FUNC_1(VAR_7 == VAR_3,
       "GetIcmpStatisticsEx(&stats, AF_BAN) returned %d, expected ERROR_INVALID_PARAMETER\n", VAR_7);

    VAR_7 = FUNC_2(&VAR_8, VAR_1);
    FUNC_1(VAR_7 == VAR_5, "GetIcmpStatisticsEx returned %d, expected NO_ERROR\n", VAR_7);
    if (VAR_7 == VAR_5 && VAR_6 > 1)
    {
        INT VAR_9;
        FUNC_3( "ICMP IPv4 Ex stats:           %8s %8s\n", "in", "out" );
        FUNC_3( "    dwMsgs:              %8u %8u\n", VAR_8.icmpInStats.dwMsgs, VAR_8.icmpOutStats.dwMsgs );
        FUNC_3( "    dwErrors:            %8u %8u\n", VAR_8.icmpInStats.dwErrors, VAR_8.icmpOutStats.dwErrors );
        for (VAR_9 = 0; VAR_9 < 256; VAR_9++)
            FUNC_3( "    rgdwTypeCount[%3i]: %8u %8u\n", VAR_9, VAR_8.icmpInStats.rgdwTypeCount[VAR_9], VAR_8.icmpOutStats.rgdwTypeCount[VAR_9] );
    }

    VAR_7 = FUNC_2(&VAR_8, VAR_2);
    FUNC_1(VAR_7 == VAR_5 || FUNC_0(VAR_7 == VAR_4),
       "GetIcmpStatisticsEx returned %d, expected NO_ERROR\n", VAR_7);
    if (VAR_7 == VAR_5 && VAR_6 > 1)
    {
        INT VAR_10;
        FUNC_3( "ICMP IPv6 Ex stats:           %8s %8s\n", "in", "out" );
        FUNC_3( "    dwMsgs:              %8u %8u\n", VAR_8.icmpInStats.dwMsgs, VAR_8.icmpOutStats.dwMsgs );
        FUNC_3( "    dwErrors:            %8u %8u\n", VAR_8.icmpInStats.dwErrors, VAR_8.icmpOutStats.dwErrors );
        for (VAR_10 = 0; VAR_10 < 256; VAR_10++)
            FUNC_3( "    rgdwTypeCount[%3i]: %8u %8u\n", VAR_10, VAR_8.icmpInStats.rgdwTypeCount[VAR_10], VAR_8.icmpOutStats.rgdwTypeCount[VAR_10] );
    }
}
