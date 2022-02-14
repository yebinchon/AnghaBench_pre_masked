
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwRtoAlgorithm; } ;
struct TYPE_5__ {int dwNumConns; int dwOutRsts; int dwInErrs; int dwRetransSegs; int dwOutSegs; int dwInSegs; int dwCurrEstab; int dwEstabResets; int dwAttemptFails; int dwPassiveOpens; int dwActiveOpens; int dwMaxConn; int dwRtoMax; int dwRtoMin; } ;
typedef TYPE_1__ MIB_TCPSTATS ;
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
    MIB_TCPSTATS VAR_5;

    VAR_4 = FUNC_2(((void*)0));
    if (VAR_4 == VAR_1) {
      FUNC_3("GetTcpStatistics is not supported\n");
      return;
    }
    FUNC_1(VAR_4 == VAR_0,
     "GetTcpStatistics(NULL) returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_4);
    VAR_4 = FUNC_2(&VAR_5);
    FUNC_1(VAR_4 == VAR_2,
      "GetTcpStatistics returned %d, expected NO_ERROR\n", VAR_4);
    if (VAR_4 == VAR_2 && VAR_3 > 1)
    {
        FUNC_4( "TCP stats:\n" );
        FUNC_4( "    dwRtoAlgorithm: %u\n", FUNC_0(VAR_5).dwRtoAlgorithm );
        FUNC_4( "    dwRtoMin:       %u\n", VAR_5.dwRtoMin );
        FUNC_4( "    dwRtoMax:       %u\n", VAR_5.dwRtoMax );
        FUNC_4( "    dwMaxConn:      %u\n", VAR_5.dwMaxConn );
        FUNC_4( "    dwActiveOpens:  %u\n", VAR_5.dwActiveOpens );
        FUNC_4( "    dwPassiveOpens: %u\n", VAR_5.dwPassiveOpens );
        FUNC_4( "    dwAttemptFails: %u\n", VAR_5.dwAttemptFails );
        FUNC_4( "    dwEstabResets:  %u\n", VAR_5.dwEstabResets );
        FUNC_4( "    dwCurrEstab:    %u\n", VAR_5.dwCurrEstab );
        FUNC_4( "    dwInSegs:       %u\n", VAR_5.dwInSegs );
        FUNC_4( "    dwOutSegs:      %u\n", VAR_5.dwOutSegs );
        FUNC_4( "    dwRetransSegs:  %u\n", VAR_5.dwRetransSegs );
        FUNC_4( "    dwInErrs:       %u\n", VAR_5.dwInErrs );
        FUNC_4( "    dwOutRsts:      %u\n", VAR_5.dwOutRsts );
        FUNC_4( "    dwNumConns:     %u\n", VAR_5.dwNumConns );
    }
  }
}
