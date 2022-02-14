
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwNumAddrs; int dwOutDatagrams; int dwInErrors; int dwNoPorts; int dwInDatagrams; } ;
typedef TYPE_1__ MIB_UDPSTATS ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
  if (&FUNC_1) {
    DWORD VAR_4;
    MIB_UDPSTATS VAR_5;

    VAR_4 = FUNC_1(((void*)0));
    if (VAR_4 == VAR_1) {
      FUNC_2("GetUdpStatistics is not supported\n");
      return;
    }
    FUNC_0(VAR_4 == VAR_0,
     "GetUdpStatistics(NULL) returned %d, expected ERROR_INVALID_PARAMETER\n",
     VAR_4);
    VAR_4 = FUNC_1(&VAR_5);
    FUNC_0(VAR_4 == VAR_2,
     "GetUdpStatistics returned %d, expected NO_ERROR\n", VAR_4);
    if (VAR_4 == VAR_2 && VAR_3 > 1)
    {
        FUNC_3( "UDP stats:\n" );
        FUNC_3( "    dwInDatagrams:  %u\n", VAR_5.dwInDatagrams );
        FUNC_3( "    dwNoPorts:      %u\n", VAR_5.dwNoPorts );
        FUNC_3( "    dwInErrors:     %u\n", VAR_5.dwInErrors );
        FUNC_3( "    dwOutDatagrams: %u\n", VAR_5.dwOutDatagrams );
        FUNC_3( "    dwNumAddrs:     %u\n", VAR_5.dwNumAddrs );
    }
  }
}
