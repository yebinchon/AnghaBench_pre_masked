
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_8__ {scalar_t__ Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef scalar_t__ PWSTR ;
typedef scalar_t__ PBYTE ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int ATTRBLOCK ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *,TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ,scalar_t__*,scalar_t__*) ;
 int VAR_2 ;

void FUNC_7(SCHEMA_PREFIX_TABLE *VAR_3, ATTRBLOCK *VAR_4, LPCWSTR VAR_5)
{
 PBYTE VAR_6;
 DWORD VAR_7;
 UNICODE_STRING VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_4(L"** TRUSTED DOMAIN - Antisocial **\n\n");

 if(FUNC_6(VAR_3, VAR_4, VAR_2, &VAR_6, &VAR_7))
 {
  VAR_8.Length = VAR_8.MaximumLength = (USHORT) VAR_7;
  VAR_8.Buffer = (PWSTR) VAR_6;
  FUNC_4(L"Partner              : %wZ\n", &VAR_8);
  if(FUNC_0(FUNC_3(&VAR_10, &VAR_8, VAR_1)))
  {
   FUNC_2(&VAR_9, VAR_5);
   if(FUNC_0(FUNC_3(&VAR_11, &VAR_9, VAR_1)))
   {
    FUNC_5(VAR_3, VAR_4, &VAR_11, &VAR_10, VAR_1);
    FUNC_5(VAR_3, VAR_4, &VAR_11, &VAR_10, VAR_0);
    FUNC_1(&VAR_11);
   }
   FUNC_1(&VAR_10);
  }
 }
}
