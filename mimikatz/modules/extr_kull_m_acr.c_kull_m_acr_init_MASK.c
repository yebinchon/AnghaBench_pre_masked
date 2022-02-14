
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hCard; void* descr; int suppdata; void* withoutCard; } ;
typedef int SCARDCONTEXT ;
typedef TYPE_1__* PKULL_M_ACR_COMM ;
typedef int LPVOID ;
typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int DWORD ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,scalar_t__*,int *) ;

BOOL FUNC_2(SCARDCONTEXT VAR_6, LPCWSTR VAR_7, BOOL VAR_8, LPVOID VAR_9, BOOL VAR_10, PKULL_M_ACR_COMM VAR_11)
{
 BOOL VAR_12 = VAR_0;
 DWORD VAR_13;
 LONG VAR_14;
 VAR_11->hCard = 0;
 VAR_11->withoutCard = VAR_8;
 VAR_11->suppdata = VAR_9;
 VAR_11->descr = VAR_10;
 VAR_14 = FUNC_1(VAR_6, VAR_7, VAR_8 ? VAR_3 : VAR_4, VAR_8 ? VAR_2 : VAR_1, &VAR_11->hCard, &VAR_13);
 if(!(VAR_12 = (VAR_14 == VAR_5)))
  FUNC_0(L"SCardConnect: 0x%08x\n", VAR_14);
 return VAR_12;
}
