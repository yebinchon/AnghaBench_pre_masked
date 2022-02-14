
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int NTSTATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;

NTSTATUS FUNC_4(ULONG VAR_2)
{
 ULONG VAR_3;
 NTSTATUS VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_0, &VAR_3);
 if(FUNC_0(VAR_4))
  FUNC_3(L"Privilege \'%u\' OK\n", VAR_2);
 else FUNC_1(L"RtlAdjustPrivilege (%u) %08x\n", VAR_2, VAR_4);
 return VAR_4;
}
