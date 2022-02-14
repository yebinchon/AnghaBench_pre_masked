
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {void* Blink; } ;
struct TYPE_15__ {size_t MasterKeyCount; size_t CredentialCount; size_t DomainKeyCount; TYPE_4__** DomainKeys; TYPE_2__** Credentials; TYPE_1__** MasterKeys; int member_0; } ;
struct TYPE_12__ {TYPE_9__* Flink; void* Blink; } ;
struct TYPE_11__ {int flags; int sid; int guid; } ;
struct TYPE_14__ {TYPE_3__ navigator; TYPE_2__ data; } ;
struct TYPE_13__ {int isNewKey; int keyLen; int key; int guid; } ;
struct TYPE_10__ {int keyHash; int guid; } ;
typedef void* PLIST_ENTRY ;
typedef TYPE_5__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef int PBYTE ;
typedef int LPCWSTR ;
typedef int KUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef TYPE_6__ KUHL_M_DPAPI_ENTRIES ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 TYPE_9__ VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int ,size_t,TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (int ,int *,size_t*) ;

BOOL FUNC_11(LPCWSTR VAR_4)
{
 BOOL VAR_5 = VAR_0;
 PBYTE VAR_6;
 DWORD VAR_7, VAR_8, VAR_9;
 KUHL_M_DPAPI_ENTRIES VAR_10 = {0};
 PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_11;

 FUNC_4(L"Read file \'%s\': ", VAR_4);
 if(FUNC_10(VAR_4, &VAR_6, &VAR_9))
 {
  FUNC_4(L"OK\n");
  if(FUNC_8(VAR_6, VAR_9, &VAR_10))
  {
   for(VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_10.MasterKeyCount; VAR_7++)
    if(FUNC_7(&VAR_10.MasterKeys[VAR_7]->guid, VAR_10.MasterKeys[VAR_7]->keyHash, sizeof(VAR_10.MasterKeys[VAR_7]->keyHash)))
     VAR_8++;
   FUNC_4(L" * %3u/%3u MasterKey(s) imported\n", VAR_8, VAR_10.MasterKeyCount);

   for(VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_10.CredentialCount; VAR_7++)
   {
    if(!FUNC_5(VAR_10.Credentials[VAR_7]->sid, (VAR_10.Credentials[VAR_7]->flags & VAR_1) ? &VAR_10.Credentials[VAR_7]->guid : ((void*)0)))
    {
     if((VAR_11 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) FUNC_0(VAR_2, sizeof(KUHL_M_DPAPI_OE_CREDENTIAL_ENTRY))))
     {
      VAR_11->data = *VAR_10.Credentials[VAR_7];
      VAR_11->data.sid = FUNC_3(VAR_10.Credentials[VAR_7]->sid);
      VAR_11->navigator.Blink = VAR_3.Blink;
      VAR_11->navigator.Flink = &VAR_3;
      ((PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_3.Blink)->navigator.Flink = (PLIST_ENTRY) VAR_11;
      VAR_3.Blink= (PLIST_ENTRY) VAR_11;
      VAR_8++;
     }
    }
   }
   FUNC_4(L" * %3u/%3u Credential(s) imported\n", VAR_8, VAR_10.CredentialCount);

   for(VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_10.DomainKeyCount; VAR_7++)
    if(FUNC_6(&VAR_10.DomainKeys[VAR_7]->guid, VAR_10.DomainKeys[VAR_7]->key, VAR_10.DomainKeys[VAR_7]->keyLen, VAR_10.DomainKeys[VAR_7]->isNewKey))
     VAR_8++;
   FUNC_4(L" * %3u/%3u DomainKey(s) imported\n", VAR_8, VAR_10.DomainKeyCount);
   FUNC_9(&VAR_10);
  }
  FUNC_1(VAR_6);
 }
 else FUNC_2(L"kull_m_file_readData");

 return VAR_5;
}
