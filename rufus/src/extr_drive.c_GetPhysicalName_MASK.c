
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;

char* FUNC_3(DWORD VAR_2)
{
 BOOL VAR_3 = VAR_0;
 char VAR_4[24];

 FUNC_0(VAR_2);
 FUNC_2(VAR_4, "\\\\.\\PhysicalDrive%lu", VAR_2);
 VAR_3 = VAR_1;
out:
 return (VAR_3)?FUNC_1(VAR_4):((void*)0);
}
