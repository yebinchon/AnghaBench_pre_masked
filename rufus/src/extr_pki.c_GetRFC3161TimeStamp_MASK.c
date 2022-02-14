
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint64_t ;
struct TYPE_11__ {size_t cAttr; TYPE_2__* rgAttr; } ;
struct TYPE_14__ {TYPE_3__ UnauthAttrs; } ;
struct TYPE_12__ {size_t cbData; int * pbData; } ;
struct TYPE_13__ {TYPE_4__ Content; } ;
struct TYPE_10__ {TYPE_1__* rgValue; int pszObjId; } ;
struct TYPE_9__ {int cbData; int pbData; } ;
typedef int PVOID ;
typedef TYPE_5__* PCRYPT_CONTENT_INFO ;
typedef TYPE_6__* PCMSG_SIGNER_INFO ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *,int ,size_t*) ;
 int FUNC_1 (char*,size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 void* FUNC_4 (int *,size_t,int *,int,size_t*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 unsigned long long FUNC_6 (char*,int *,int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static uint64_t FUNC_8(PCMSG_SIGNER_INFO VAR_7)
{
 BOOL VAR_8, VAR_9 = VAR_1;
 DWORD VAR_10, VAR_11 = 0;
 PCRYPT_CONTENT_INFO VAR_12 = ((void*)0);
 uint64_t VAR_13 = 0ULL;
 uint8_t *VAR_14;
 size_t VAR_15;
 char* VAR_16;
 size_t VAR_17;


 for (VAR_10 = 0; VAR_10 < VAR_7->UnauthAttrs.cAttr; VAR_10++) {
  if (FUNC_5(VAR_7->UnauthAttrs.rgAttr[VAR_10].pszObjId, VAR_5) == 0) {



   if (VAR_9) {
    FUNC_7("PKI: Multiple RFC 3161 countersigners found. This could indicate something very nasty...");
    return 0ULL;
   }
   VAR_9 = VAR_4;


   VAR_8 = FUNC_0(VAR_2, VAR_3,
    VAR_7->UnauthAttrs.rgAttr[VAR_10].rgValue[0].pbData,
    VAR_7->UnauthAttrs.rgAttr[VAR_10].rgValue[0].cbData,
    VAR_0, ((void*)0), (PVOID)&VAR_12, &VAR_11);
   if (!VAR_8) {
    FUNC_7("PKI: Could not retrieve RFC 3161 countersigner data: %s", FUNC_3());
    continue;
   }


   VAR_14 = FUNC_4(VAR_12->Content.pbData,
    VAR_12->Content.cbData, VAR_6,

    0x04, &VAR_15);
   if (VAR_14) {
    VAR_16 = FUNC_4(VAR_14, VAR_15, ((void*)0),

     0x18, &VAR_17);
    if (VAR_16) {

     if ((VAR_17 < 14) || (VAR_16[VAR_17 - 1] != 'Z')) {

      FUNC_7("PKI: Not an RFC 3161 timestamp");
      FUNC_1(VAR_16, VAR_17);
     } else {
      VAR_13 = FUNC_6(VAR_16, ((void*)0), 10);
     }
    }
   }
   FUNC_2(VAR_12);
  }
 }
 return VAR_13;
}
