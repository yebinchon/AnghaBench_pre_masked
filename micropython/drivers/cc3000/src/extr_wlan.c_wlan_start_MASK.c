
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
struct TYPE_2__ {scalar_t__ (* ReadWlanInterruptPin ) () ;int * pucTxCommandBuffer; int (* WriteWlanPin ) (int ) ;scalar_t__ pucReceivedData; scalar_t__ usEventOrDataReceived; scalar_t__ slTransmitDataError; scalar_t__ usRxDataPending; scalar_t__ usBufferSize; scalar_t__ usSlBufferLength; scalar_t__ usNumberOfFreeBuffers; scalar_t__ usRxEventOpcode; scalar_t__ NumberOfReleasedPackets; scalar_t__ NumberOfSentPackets; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_9(UINT16 VAR_6)
{

 UINT32 VAR_7;
 UINT32 VAR_8;

 VAR_4.NumberOfSentPackets = 0;
 VAR_4.NumberOfReleasedPackets = 0;
 VAR_4.usRxEventOpcode = 0;
 VAR_4.usNumberOfFreeBuffers = 0;
 VAR_4.usSlBufferLength = 0;
 VAR_4.usBufferSize = 0;
 VAR_4.usRxDataPending = 0;
 VAR_4.slTransmitDataError = 0;
 VAR_4.usEventOrDataReceived = 0;
 VAR_4.pucReceivedData = 0;


 VAR_4.pucTxCommandBuffer = (UINT8 *)VAR_5;


 FUNC_2(VAR_1);


 VAR_7 = VAR_4.ReadWlanInterruptPin();


 VAR_4.WriteWlanPin( VAR_3 );

    VAR_8 = VAR_2;
 if (VAR_7) {

  while(VAR_4.ReadWlanInterruptPin() != 0 && --VAR_8)
  {
  }
 }
 else
 {

  while(VAR_4.ReadWlanInterruptPin() == 0 && --VAR_8)
  {
  }

        if (VAR_8 == 0) {
            return -1;
        }

        VAR_8 = VAR_2;
  while(VAR_4.ReadWlanInterruptPin() != 0 && --VAR_8)
  {
  }
 }

    if (VAR_8 ==0) {
        return -1;
    }

 FUNC_1(VAR_6);


 FUNC_3(VAR_0, VAR_4.pucTxCommandBuffer, 0);
 FUNC_0(VAR_0, 0);

    return 0;
}
