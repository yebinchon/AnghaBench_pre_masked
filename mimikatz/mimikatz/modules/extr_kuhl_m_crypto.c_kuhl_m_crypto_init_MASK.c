
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCP_EXPORTKEY ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS FUNC_2()
{
 NTSTATUS VAR_4 = VAR_1;
 if((VAR_3 = FUNC_1(L"rsaenh")))
  if((VAR_0 = (PCP_EXPORTKEY) FUNC_0(VAR_3, "CPExportKey")))
   VAR_4 = VAR_2;
 return VAR_4;
}
