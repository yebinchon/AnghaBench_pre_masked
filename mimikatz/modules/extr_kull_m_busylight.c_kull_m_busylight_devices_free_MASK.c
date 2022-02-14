
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ DevicePath; int * hWorkerThread; scalar_t__ dWorkerThread; int * hKeepAliveThread; scalar_t__ dKeepAliveThread; int * hBusy; } ;
typedef TYPE_1__* PBUSYLIGHT_DEVICE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void FUNC_5(PBUSYLIGHT_DEVICE VAR_3, BOOL VAR_4)
{
 PBUSYLIGHT_DEVICE VAR_5;
 while(VAR_3)
 {
  if(VAR_3->hBusy)
  {
   if(VAR_4 && (VAR_3->hBusy != VAR_2))
    FUNC_4(VAR_3, VAR_1);
   FUNC_0(VAR_3->hBusy);
   VAR_3->hBusy = ((void*)0);
  }
  VAR_3->dKeepAliveThread = 0;
  if(VAR_3->hKeepAliveThread)
  {
   FUNC_2(VAR_3->hKeepAliveThread, VAR_0);
   VAR_3->hKeepAliveThread = ((void*)0);
  }
  VAR_3->dWorkerThread = 0;
  if(VAR_3->hWorkerThread)
  {
   FUNC_2(VAR_3->hWorkerThread, VAR_0);
   VAR_3->hWorkerThread = ((void*)0);
  }
  if(VAR_3->DevicePath)
   FUNC_3(VAR_3->DevicePath);
  VAR_5 = VAR_3->next;
  FUNC_1(VAR_3);
  VAR_3 = VAR_5;
 }
}
