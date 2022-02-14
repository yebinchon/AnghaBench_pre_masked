
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* dwMsgs; char* dwErrors; char* dwDestUnreachs; char* dwTimeExcds; char* dwParmProbs; char* dwSrcQuenchs; char* dwRedirects; char* dwEchos; char* dwEchoReps; char* dwTimestamps; char* dwTimestampReps; char* dwAddrMasks; char* dwAddrMaskReps; } ;
struct TYPE_6__ {char* dwMsgs; char* dwErrors; char* dwDestUnreachs; char* dwTimeExcds; char* dwParmProbs; char* dwSrcQuenchs; char* dwRedirects; char* dwEchos; char* dwEchoReps; char* dwTimestamps; char* dwTimestampReps; char* dwAddrMasks; char* dwAddrMaskReps; } ;
struct TYPE_8__ {TYPE_2__ icmpOutStats; TYPE_1__ icmpInStats; } ;
struct TYPE_9__ {TYPE_3__ stats; } ;
typedef TYPE_4__ MIB_ICMP ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
  if (&FUNC_1) {
    DWORD VAR_4;
    MIB_ICMP VAR_5;


    if (0) {
      VAR_4 = FUNC_1(((void*)0));
      if (VAR_4 == VAR_1)
        return;
      FUNC_0(VAR_4 == VAR_0,
       "GetIcmpStatistics(NULL) returned %d, expected ERROR_INVALID_PARAMETER\n",
       VAR_4);
    }

    VAR_4 = FUNC_1(&VAR_5);
    if (VAR_4 == VAR_1)
    {
      FUNC_2("GetIcmpStatistics is not supported\n");
      return;
    }
    FUNC_0(VAR_4 == VAR_2,
     "GetIcmpStatistics returned %d, expected NO_ERROR\n", VAR_4);
    if (VAR_4 == VAR_2 && VAR_3 > 1)
    {
        FUNC_3( "ICMP stats:          %8s %8s\n", "in", "out" );
        FUNC_3( "    dwMsgs:          %8u %8u\n", VAR_5.stats.icmpInStats.dwMsgs, VAR_5.stats.icmpOutStats.dwMsgs );
        FUNC_3( "    dwErrors:        %8u %8u\n", VAR_5.stats.icmpInStats.dwErrors, VAR_5.stats.icmpOutStats.dwErrors );
        FUNC_3( "    dwDestUnreachs:  %8u %8u\n", VAR_5.stats.icmpInStats.dwDestUnreachs, VAR_5.stats.icmpOutStats.dwDestUnreachs );
        FUNC_3( "    dwTimeExcds:     %8u %8u\n", VAR_5.stats.icmpInStats.dwTimeExcds, VAR_5.stats.icmpOutStats.dwTimeExcds );
        FUNC_3( "    dwParmProbs:     %8u %8u\n", VAR_5.stats.icmpInStats.dwParmProbs, VAR_5.stats.icmpOutStats.dwParmProbs );
        FUNC_3( "    dwSrcQuenchs:    %8u %8u\n", VAR_5.stats.icmpInStats.dwSrcQuenchs, VAR_5.stats.icmpOutStats.dwSrcQuenchs );
        FUNC_3( "    dwRedirects:     %8u %8u\n", VAR_5.stats.icmpInStats.dwRedirects, VAR_5.stats.icmpOutStats.dwRedirects );
        FUNC_3( "    dwEchos:         %8u %8u\n", VAR_5.stats.icmpInStats.dwEchos, VAR_5.stats.icmpOutStats.dwEchos );
        FUNC_3( "    dwEchoReps:      %8u %8u\n", VAR_5.stats.icmpInStats.dwEchoReps, VAR_5.stats.icmpOutStats.dwEchoReps );
        FUNC_3( "    dwTimestamps:    %8u %8u\n", VAR_5.stats.icmpInStats.dwTimestamps, VAR_5.stats.icmpOutStats.dwTimestamps );
        FUNC_3( "    dwTimestampReps: %8u %8u\n", VAR_5.stats.icmpInStats.dwTimestampReps, VAR_5.stats.icmpOutStats.dwTimestampReps );
        FUNC_3( "    dwAddrMasks:     %8u %8u\n", VAR_5.stats.icmpInStats.dwAddrMasks, VAR_5.stats.icmpOutStats.dwAddrMasks );
        FUNC_3( "    dwAddrMaskReps:  %8u %8u\n", VAR_5.stats.icmpInStats.dwAddrMaskReps, VAR_5.stats.icmpOutStats.dwAddrMaskReps );
    }
  }
}
