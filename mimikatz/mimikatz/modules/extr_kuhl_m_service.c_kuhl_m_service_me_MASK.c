
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int * member_1; int * member_0; } ;
typedef TYPE_1__ SERVICE_TABLE_ENTRY ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

NTSTATUS FUNC_3(int VAR_6, wchar_t * VAR_7[])
{
 const SERVICE_TABLE_ENTRY VAR_8[]= {{VAR_1, VAR_5}, {((void*)0), ((void*)0)}};
 if((VAR_4 = FUNC_1(((void*)0), VAR_3, VAR_0, ((void*)0))))
 {
  FUNC_2(VAR_8);
  FUNC_0(VAR_4);
 }
 return VAR_2;
}
