
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t dwNextLen; } ;
struct TYPE_11__ {int __dwCount; TYPE_3__** entries; TYPE_1__ current; } ;
struct TYPE_9__ {size_t dwNextLen; } ;
struct TYPE_10__ {TYPE_2__ header; } ;
typedef TYPE_3__* PKULL_M_DPAPI_CREDHIST_ENTRY ;
typedef TYPE_4__* PKULL_M_DPAPI_CREDHIST ;
typedef size_t PBYTE ;
typedef scalar_t__ LPCVOID ;
typedef int KULL_M_DPAPI_CREDHIST_HEADER ;
typedef int KULL_M_DPAPI_CREDHIST ;
typedef size_t DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*,size_t,int) ;
 TYPE_3__* FUNC_2 (size_t,size_t) ;

PKULL_M_DPAPI_CREDHIST FUNC_3(LPCVOID VAR_1, DWORD VAR_2)
{
 PKULL_M_DPAPI_CREDHIST VAR_3 = ((void*)0);
 DWORD VAR_4, VAR_5, VAR_6;
 if(VAR_1 && (VAR_3 = (PKULL_M_DPAPI_CREDHIST) FUNC_0(VAR_0, sizeof(KULL_M_DPAPI_CREDHIST))))
 {
  FUNC_1(VAR_3, (PBYTE) VAR_1 + VAR_2 - sizeof(KULL_M_DPAPI_CREDHIST_HEADER), sizeof(KULL_M_DPAPI_CREDHIST_HEADER));

  for(
   VAR_5 = sizeof(KULL_M_DPAPI_CREDHIST_HEADER), VAR_4 = VAR_3->current.dwNextLen;
   (VAR_5 < VAR_2) && VAR_4;
  VAR_4 = ((PKULL_M_DPAPI_CREDHIST_ENTRY) ((PBYTE) VAR_1 + VAR_2 - (VAR_5 + VAR_4)))->header.dwNextLen, VAR_5 += VAR_4, VAR_3->__dwCount++
   );

  if((VAR_3->entries = (PKULL_M_DPAPI_CREDHIST_ENTRY *) FUNC_0(VAR_0, VAR_3->__dwCount * sizeof(PKULL_M_DPAPI_CREDHIST_ENTRY))))
   for(
    VAR_6 = 0, VAR_5 = sizeof(KULL_M_DPAPI_CREDHIST_HEADER), VAR_4 = VAR_3->current.dwNextLen;
    (VAR_5 < VAR_2) && VAR_4;
  VAR_4 = ((PKULL_M_DPAPI_CREDHIST_ENTRY) ((PBYTE) VAR_1 + VAR_2 - (VAR_5 + VAR_4)))->header.dwNextLen, VAR_5 += VAR_4, VAR_6++
   )
   VAR_3->entries[VAR_6] = FUNC_2(((PBYTE) VAR_1 + VAR_2 - (VAR_5 + VAR_4)), VAR_4);
 }
 return VAR_3;
}
