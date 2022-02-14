
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_3__ {int isFound; int member_1; int member_0; } ;
typedef int PVOID ;
typedef int PKIWI_BUFFER ;
typedef int NTSTATUS ;
typedef TYPE_1__ KKLL_M_MODULE_FROM_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;

NTSTATUS FUNC_3(PKIWI_BUFFER VAR_2, PVOID VAR_3)
{
 KKLL_M_MODULE_FROM_ADDR VAR_4 = {VAR_0, (ULONG_PTR) VAR_3};
 NTSTATUS VAR_5 = FUNC_1(0, ((void*)0), VAR_2, VAR_1, &VAR_4);

 if(FUNC_0(VAR_5) && !VAR_4.isFound)
  VAR_5 = FUNC_2(VAR_2, L"0x%p [ ? ]\n", VAR_3);

 return VAR_5;
}
