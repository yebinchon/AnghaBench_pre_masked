
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_10__ {int length; int elements; } ;
struct TYPE_9__ {void** value; scalar_t__ length; } ;
struct TYPE_8__ {size_t PrefixCount; TYPE_1__* pPrefixEntry; } ;
struct TYPE_7__ {scalar_t__ ndx; TYPE_4__ prefix; } ;
typedef TYPE_2__ SCHEMA_PREFIX_TABLE ;
typedef void** PBYTE ;
typedef TYPE_3__ OssEncodedOID ;
typedef TYPE_4__ OID_t ;
typedef int * LPSTR ;
typedef size_t DWORD ;
typedef void* BYTE ;
typedef int ATTRTYP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,int ,int) ;
 int FUNC_3 (TYPE_3__*,int **) ;

LPSTR FUNC_4(SCHEMA_PREFIX_TABLE *VAR_1, ATTRTYP VAR_2)
{
 LPSTR VAR_3 = ((void*)0);
 DWORD VAR_4;
 USHORT VAR_5 = (USHORT) VAR_2, VAR_6 = (USHORT) (VAR_2 >> 16);
 OID_t *VAR_7 = ((void*)0);
 OssEncodedOID VAR_8;

 for(VAR_4 = 0; VAR_4 < VAR_1->PrefixCount; VAR_4++)
 {
  if(VAR_1->pPrefixEntry[VAR_4].ndx == VAR_6)
  {
   VAR_7 = &VAR_1->pPrefixEntry[VAR_4].prefix;
   break;
  }
 }
 if(VAR_7)
 {
  VAR_8.length = (USHORT) (VAR_7->length + ((VAR_5 < 0x80) ? 1 : 2));
  if((VAR_8.value = (PBYTE) FUNC_0(VAR_0, VAR_8.length)))
  {
   FUNC_2(VAR_8.value, VAR_7->elements, VAR_7->length);
   if(VAR_5 < 0x80)
    VAR_8.value[VAR_7->length] = (BYTE) VAR_5;
   else
   {
    if(VAR_5 >= 0x8000)
     VAR_5 -= 0x8000;
    VAR_8.value[VAR_7->length] = (BYTE) (((VAR_5 / 0x80) % 0x80) + 0x80);
    VAR_8.value[VAR_7->length + 1] = (BYTE) (VAR_5 % 0x80);
   }
   if(!FUNC_3(&VAR_8, &VAR_3))
    VAR_3 = ((void*)0);
   FUNC_1(VAR_8.value);
  }
 }
 return VAR_3;
}
