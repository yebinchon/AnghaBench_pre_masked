
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* USHORT ;
typedef int UNICODE_STRING ;
struct TYPE_3__ {int * Names; void* NameType; void* NameCount; } ;
typedef int * PUNICODE_STRING ;
typedef TYPE_1__* PKERB_EXTERNAL_NAME ;
typedef int * PDWORD ;
typedef scalar_t__ PBYTE ;
typedef int KERB_EXTERNAL_NAME ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int *) ;

BOOL FUNC_3(PBYTE *VAR_2, PKERB_EXTERNAL_NAME * VAR_3, PUNICODE_STRING VAR_4)
{
 BOOL VAR_5 = VAR_0;
 DWORD VAR_6, VAR_7 = FUNC_1(*(PDWORD) (*VAR_2 + sizeof(DWORD)));
 *VAR_3 = ((void*)0);
 if(VAR_7)
 {
  if((*VAR_3 = (PKERB_EXTERNAL_NAME) FUNC_0(VAR_1, sizeof(KERB_EXTERNAL_NAME) + ((VAR_7 - 1) * sizeof(UNICODE_STRING)))))
  {
   (*VAR_3)->NameCount = (USHORT) VAR_7;
   (*VAR_3)->NameType = (USHORT) FUNC_1(*(PDWORD) *VAR_2);
   *VAR_2 += 2 * sizeof(DWORD);

   VAR_5 = FUNC_2(VAR_2, VAR_4);
   for(VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    VAR_5 &= FUNC_2(VAR_2, &(*VAR_3)->Names[VAR_6]);
  }
 }
 return VAR_5;
}
