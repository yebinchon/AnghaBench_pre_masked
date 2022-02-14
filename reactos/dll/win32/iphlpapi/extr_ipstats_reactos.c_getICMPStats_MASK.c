
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hdr ;
typedef int buf ;
struct TYPE_8__ {void* dwAddrMaskReps; void* dwAddrMasks; void* dwTimestampReps; void* dwTimestamps; void* dwEchoReps; void* dwRedirects; void* dwSrcQuenchs; void* dwParmProbs; void* dwTimeExcds; void* dwDestUnreachs; void* dwErrors; void* dwMsgs; } ;
struct TYPE_7__ {void* dwAddrMaskReps; void* dwAddrMasks; void* dwTimestampReps; void* dwTimestamps; void* dwEchoReps; void* dwRedirects; void* dwSrcQuenchs; void* dwParmProbs; void* dwTimeExcds; void* dwDestUnreachs; void* dwErrors; void* dwMsgs; } ;
struct TYPE_9__ {TYPE_2__ icmpOutStats; TYPE_1__ icmpInStats; } ;
struct TYPE_10__ {TYPE_3__ stats; } ;
typedef TYPE_4__ MIB_ICMP ;
typedef int FILE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;
 void* FUNC_5 (char*,char**,int) ;

DWORD FUNC_6(MIB_ICMP *VAR_2)
{
  FILE *VAR_3;

  if (!VAR_2)
    return VAR_0;

  FUNC_3(VAR_2, 0, sizeof(MIB_ICMP));

  VAR_3 = FUNC_2("/proc/net/snmp", "r");
  if (VAR_3) {
    const char VAR_4[] = "Icmp:";
    char VAR_5[512] = { 0 }, *VAR_6;

    do {
      VAR_6 = FUNC_1(VAR_5, sizeof(VAR_5), VAR_3);
    } while (VAR_6 && FUNC_4(VAR_5, VAR_4, sizeof(VAR_4) - 1));
    if (VAR_6) {

      VAR_6 = FUNC_1(VAR_5, sizeof(VAR_5), VAR_3);
      if (VAR_6 && FUNC_4(VAR_5, VAR_4, sizeof(VAR_4) - 1) == 0) {
        char *VAR_7;

        VAR_6 += sizeof(VAR_4);
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwMsgs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwErrors = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwDestUnreachs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwTimeExcds = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwParmProbs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwSrcQuenchs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwRedirects = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwEchoReps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwTimestamps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwTimestampReps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwAddrMasks = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpInStats.dwAddrMaskReps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwMsgs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwErrors = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwDestUnreachs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwTimeExcds = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwParmProbs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwSrcQuenchs = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwRedirects = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwEchoReps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwTimestamps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwTimestampReps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwAddrMasks = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
        if (VAR_6 && *VAR_6) {
          VAR_2->stats.icmpOutStats.dwAddrMaskReps = FUNC_5(VAR_6, &VAR_7, 10);
          VAR_6 = VAR_7;
        }
      }
    }
    FUNC_0(VAR_3);
  }
  return VAR_1;
}
