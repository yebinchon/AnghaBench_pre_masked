
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_13__ {size_t cAttr; TYPE_2__* rgAttr; } ;
struct TYPE_16__ {TYPE_3__ UnauthAttrs; } ;
struct TYPE_14__ {int cbData; int pbData; } ;
struct TYPE_15__ {TYPE_4__ Content; } ;
struct TYPE_12__ {TYPE_1__* rgValue; int pszObjId; } ;
struct TYPE_11__ {int cbData; int pbData; } ;
typedef int * PVOID ;
typedef TYPE_5__* PCRYPT_CONTENT_INFO ;
typedef TYPE_6__* PCMSG_SIGNER_INFO ;
typedef int HCRYPTPROV ;
typedef int * HCRYPTMSG ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *,int *,size_t*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,size_t*) ;
 int * FUNC_3 (int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long long FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (size_t,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_6__*) ;
 int VAR_9 ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static uint64_t FUNC_12(PCMSG_SIGNER_INFO VAR_10)
{
 BOOL VAR_11, VAR_12 = VAR_5;
 DWORD VAR_13, VAR_14 = 0;
 PCRYPT_CONTENT_INFO VAR_15 = ((void*)0);
 PCMSG_SIGNER_INFO VAR_16 = ((void*)0);
 HCRYPTMSG VAR_17 = ((void*)0);
 uint64_t VAR_18 = 0ULL;


 for (VAR_13 = 0; ; VAR_13++) {
  if (VAR_15 != ((void*)0)) {
   FUNC_6(VAR_15);
   VAR_15 = ((void*)0);
  }
  if (VAR_17 != ((void*)0)) {
   FUNC_1(VAR_17);
   VAR_17 = ((void*)0);
  }
  FUNC_10(VAR_16);
  if (VAR_13 >= VAR_10->UnauthAttrs.cAttr)
   break;
  if (FUNC_9(VAR_10->UnauthAttrs.rgAttr[VAR_13].pszObjId, VAR_9) == 0) {
   if (VAR_12) {
    FUNC_11("PKI: Multiple nested signatures found. This could indicate something very nasty...");
    return 0ULL;
   }
   VAR_12 = VAR_8;
   VAR_11 = FUNC_0(VAR_6, VAR_7,
    VAR_10->UnauthAttrs.rgAttr[VAR_13].rgValue[0].pbData,
    VAR_10->UnauthAttrs.rgAttr[VAR_13].rgValue[0].cbData,
    VAR_3, ((void*)0), (PVOID)&VAR_15, &VAR_14);
   if (!VAR_11) {
    FUNC_11("PKI: Could not retrieve nested signature data: %s", FUNC_7());
    continue;
   }

   VAR_17 = FUNC_3(VAR_4, VAR_0, VAR_1, (HCRYPTPROV)((void*)0), ((void*)0), ((void*)0));
   if (VAR_17 == ((void*)0)) {
    FUNC_11("PKI: Could not create nested signature message: %s", FUNC_7());
    continue;
   }
   VAR_11 = FUNC_4(VAR_17, VAR_15->Content.pbData, VAR_15->Content.cbData, VAR_8);
   if (!VAR_11) {
    FUNC_11("PKI: Could not update message: %s", FUNC_7());
    continue;
   }

   VAR_11 = FUNC_2(VAR_17, VAR_2, 0, ((void*)0), &VAR_14);
   if (!VAR_11) {
    FUNC_11("PKI: Failed to get nested signer size: %s", FUNC_7());
    continue;
   }
   VAR_16 = (PCMSG_SIGNER_INFO)FUNC_8(VAR_14, 1);
   if (!VAR_16) {
    FUNC_11("PKI: Could not allocate memory for nested signer");
    continue;
   }
   VAR_11 = FUNC_2(VAR_17, VAR_2, 0, (PVOID)VAR_16, &VAR_14);
   if (!VAR_11) {
    FUNC_11("PKI: Failed to get nested signer information: %s", FUNC_7());
    continue;
   }
   VAR_18 = FUNC_5(VAR_16);
  }
 }
 return VAR_18;
}
