
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_3__ {int* Buffer; } ;
typedef int* PWSTR ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int* PULONG ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

NTSTATUS FUNC_4(
  PUNICODE_STRING VAR_3,
  PULONG VAR_4)
{
  UNICODE_STRING VAR_5;
  NTSTATUS VAR_6;
  ULONG VAR_7;
  PWSTR VAR_8;

  FUNC_3(VAR_0, ("Called. FileName (%wZ).\n", VAR_3));

  VAR_8 = VAR_3->Buffer;

  if (*VAR_8++ != (WCHAR)L'\\')
    return VAR_2;

  if (*VAR_8 == L'\0')
    return VAR_2;

  FUNC_1(&VAR_5, VAR_8);

  VAR_6 = FUNC_2(&VAR_5, 10, &VAR_7);
  if (!FUNC_0(VAR_6) || ((VAR_7 > 255)))
    return VAR_2;

  *VAR_4 = VAR_7;

  return VAR_1;
}
