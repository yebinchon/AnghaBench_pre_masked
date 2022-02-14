
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_3__ {int * type; int member_4; int member_3; int member_2; int member_1; int * member_0; } ;
typedef int PVOID ;
typedef int PKULL_M_HANDLE_ENUM_CALLBACK ;
typedef int NTSTATUS ;
typedef int LPCTSTR ;
typedef TYPE_1__ HANDLE_ENUM_DATA ;
typedef int DWORD ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;

NTSTATUS FUNC_2(PKULL_M_HANDLE_ENUM_CALLBACK VAR_1, LPCTSTR VAR_2, DWORD VAR_3, DWORD VAR_4, PVOID VAR_5)
{
 UNICODE_STRING VAR_6;
 HANDLE_ENUM_DATA VAR_7 = {((void*)0), VAR_3, VAR_4, VAR_1, VAR_5};
 if(VAR_2)
 {
  FUNC_0(&VAR_6, VAR_2);
  VAR_7.type = &VAR_6;
 }
 return FUNC_1(VAR_0, &VAR_7);
}
