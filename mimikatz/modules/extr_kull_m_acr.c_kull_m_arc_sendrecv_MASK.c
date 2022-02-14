
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT16 ;
struct TYPE_3__ {scalar_t__ withoutCard; scalar_t__ descr; scalar_t__ hCard; } ;
typedef TYPE_1__* PKULL_M_ACR_COMM ;
typedef scalar_t__ LONG ;
typedef scalar_t__ DWORD ;
typedef int const BYTE ;
typedef int BOOL ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int const*,scalar_t__ const,int const*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int const*,scalar_t__ const,int *,int const*,scalar_t__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int const*,scalar_t__ const,int) ;

BOOL FUNC_5(PKULL_M_ACR_COMM VAR_4, const BYTE *VAR_5, const UINT16 VAR_6, BYTE *VAR_7, UINT16 *VAR_8)
{
 BOOL VAR_9 = VAR_1;
 LONG VAR_10;
 DWORD VAR_11 = *VAR_8;

 if(VAR_4->hCard)
 {
  if(VAR_6 <= VAR_0)
  {
   if(VAR_4->descr)
   {
    FUNC_3(L"ACR  > ");
    FUNC_4(VAR_5, VAR_6, 1);
    FUNC_3(L"\n");
   }
   VAR_10 = VAR_4->withoutCard ?
    FUNC_1(VAR_4->hCard, VAR_2, VAR_5, VAR_6, VAR_7, *VAR_8, &VAR_11) :
    FUNC_2(VAR_4->hCard, ((void*)0), VAR_5, VAR_6, ((void*)0), VAR_7, &VAR_11);

   if(VAR_10 == VAR_3)
   {
    if(VAR_4->descr)
    {
     FUNC_3(L"ACR  < ");
     FUNC_4(VAR_7, VAR_11, 1);
     FUNC_3(L"\n");
    }
    if((VAR_9 = (VAR_11 <= *VAR_8)))
     *VAR_8 = (UINT16) VAR_11;
   }
   else FUNC_0(L"%s: 0x%08x\n", VAR_4->withoutCard ? L"SCardControl" : L"SCardTransmit", VAR_10);
  }
  else FUNC_0(L"cbData = %hu / cbResult = %hu (max is %hu)\n", VAR_6, VAR_8, VAR_0);
 }
 else FUNC_0(L"No handle to Card\n");
 return VAR_9;
}
