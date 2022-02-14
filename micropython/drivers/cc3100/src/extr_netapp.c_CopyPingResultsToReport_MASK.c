
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int testTime; int rttAvg; int rttMax; int rttMin; int numSuccsessPings; int numSendsPings; } ;
typedef TYPE_1__ _PingReportResponse_t ;
struct TYPE_6__ {int TestTime; int AvgRoundTime; int MaxRoundTime; int MinRoundTime; int PacketsReceived; int PacketsSent; } ;
typedef TYPE_2__ SlPingReport_t ;



void FUNC_0(_PingReportResponse_t *VAR_0,SlPingReport_t *VAR_1)
{
    VAR_1->PacketsSent = VAR_0->numSendsPings;
    VAR_1->PacketsReceived = VAR_0->numSuccsessPings;
    VAR_1->MinRoundTime = VAR_0->rttMin;
    VAR_1->MaxRoundTime = VAR_0->rttMax;
    VAR_1->AvgRoundTime = VAR_0->rttAvg;
    VAR_1->TestTime = VAR_0->testTime;
}
