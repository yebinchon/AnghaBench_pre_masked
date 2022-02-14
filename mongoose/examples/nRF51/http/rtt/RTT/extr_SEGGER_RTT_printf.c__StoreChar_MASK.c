
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Cnt; int BufferSize; char* pBuffer; int ReturnValue; int RTTBufferIndex; } ;
typedef TYPE_1__ SEGGER_RTT_PRINTF_DESC ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(SEGGER_RTT_PRINTF_DESC * VAR_0, char VAR_1) {
  int VAR_2;

  VAR_2 = VAR_0->Cnt;
  if ((VAR_2 + 1) <= VAR_0->BufferSize) {
    *(VAR_0->pBuffer + VAR_2) = VAR_1;
    VAR_0->Cnt = VAR_2 + 1;
    VAR_0->ReturnValue++;
  }



  if (VAR_0->Cnt == VAR_0->BufferSize) {
    if (FUNC_0(VAR_0->RTTBufferIndex, VAR_0->pBuffer, VAR_0->Cnt) != VAR_0->Cnt) {
      VAR_0->ReturnValue = -1;
    } else {
      VAR_0->Cnt = 0;
    }
  }
}
