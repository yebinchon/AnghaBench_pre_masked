
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef size_t ULONG ;
struct TYPE_10__ {size_t fCapabilities; int Name; int wVersion; int wRPCID; int cbMaxToken; int Comment; } ;
struct TYPE_9__ {TYPE_3__* pvBuffer; int cbBuffer; int * member_2; int member_1; int member_0; } ;
struct TYPE_8__ {int member_1; TYPE_2__* member_2; int member_0; } ;
typedef TYPE_1__ SecBufferDesc ;
typedef TYPE_2__ SecBuffer ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_3__* PSecPkgInfo ;
typedef int NTSTATUS ;
typedef int CtxtHandle ;
typedef int CredHandle ;


 size_t FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t*,TYPE_3__**) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *,int *,int *,int ,int ,int ,int *,int ,int *,TYPE_1__*,size_t*,int *) ;
 char** VAR_1 ;
 int FUNC_7 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

NTSTATUS FUNC_10(int VAR_13, wchar_t * VAR_14[])
{
 SECURITY_STATUS VAR_15;
 ULONG VAR_16, VAR_17, VAR_18;
 PSecPkgInfo VAR_19;
 CredHandle VAR_20;
 CtxtHandle VAR_21;
 SecBuffer VAR_22 = {0, VAR_2, ((void*)0)};
 SecBufferDesc VAR_23 = {VAR_3, 1, &VAR_22};
 ULONG VAR_24;

 VAR_15 = FUNC_3(&VAR_16, &VAR_19);
 if(VAR_15 == VAR_7)
 {
  for(VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
  {
   FUNC_8(L"Name        : %s\nDescription : %s\nCapabilities: %08x ( ", VAR_19[VAR_17].Name, VAR_19[VAR_17].Comment, VAR_19[VAR_17].fCapabilities);
   for(VAR_18 = 0; VAR_18 < sizeof(ULONG) * 8; VAR_18++)
    if((VAR_19[VAR_17].fCapabilities >> VAR_18) & 1)
     FUNC_8(L"%s ; ", (VAR_18 < FUNC_0(VAR_1)) ? VAR_1[VAR_18] : L"?");
   FUNC_8(L")\nMaxToken    : %u\nRPCID       : 0x%04x (%hu)\nVersion     : %hu\n", VAR_19[VAR_17].cbMaxToken, VAR_19[VAR_17].wRPCID, VAR_19[VAR_17].wRPCID, VAR_19[VAR_17].wVersion);

   if(VAR_13)
   {
    VAR_15 = FUNC_1(((void*)0), VAR_19[VAR_17].Name, VAR_4, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_20, ((void*)0));
    if(VAR_15 == VAR_7)
    {
     VAR_15 = FUNC_6(&VAR_20, ((void*)0), VAR_14[0], VAR_0, 0, VAR_5, ((void*)0), 0, &VAR_21, &VAR_23, &VAR_24, ((void*)0));
     if((VAR_15 == VAR_7) || (VAR_15 == VAR_8) || (VAR_15 == VAR_9) || (VAR_15 == VAR_10) || (VAR_15 == VAR_11) || (VAR_15 == VAR_6))
     {
      FUNC_9(VAR_22.pvBuffer, VAR_22.cbBuffer, 1 | (16 << 16));
      FUNC_8(L"\n");
      if(VAR_22.pvBuffer)
       FUNC_4(VAR_22.pvBuffer);
      FUNC_2(&VAR_21);
     }
     else FUNC_7(L"InitializeSecurityContext: 0x%08x\n", VAR_15);
     FUNC_5(&VAR_20);
    }
    else FUNC_7(L"AcquireCredentialsHandle: 0x%08x\n", VAR_15);
   }
   FUNC_8(L"\n");
  }
  FUNC_4(VAR_19);
 }
 else FUNC_7(L"EnumerateSecurityPackages: 0x%08x\n", VAR_15);
 return VAR_12;
}
