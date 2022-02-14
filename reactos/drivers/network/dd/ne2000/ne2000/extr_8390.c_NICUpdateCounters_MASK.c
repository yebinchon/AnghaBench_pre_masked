
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UCHAR ;
struct TYPE_3__ {int MissedPackets; scalar_t__ IOBase; int CrcErrors; int FrameAlignmentErrors; } ;
typedef TYPE_1__* PNIC_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

VOID FUNC_2(
    PNIC_ADAPTER VAR_4)





{
    UCHAR VAR_5;

    FUNC_0(VAR_0, ("Called.\n"));

    FUNC_1(VAR_4->IOBase + VAR_1, &VAR_5);
    VAR_4->FrameAlignmentErrors += VAR_5;

    FUNC_1(VAR_4->IOBase + VAR_2, &VAR_5);
    VAR_4->CrcErrors += VAR_5;

    FUNC_1(VAR_4->IOBase + VAR_3, &VAR_5);
    VAR_4->MissedPackets += VAR_5;
}
