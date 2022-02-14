
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_name ;
typedef int STDAPI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int,char*,int ) ;
 int VAR_5 ;

STDAPI
FUNC_3(void)
{
 char VAR_6[400];






 FUNC_2(VAR_6, sizeof(VAR_6),
     "SYSTEM\\CurrentControlSet\\Services\\EventLog\\Application\\%s",
     VAR_5);
 if (FUNC_1(VAR_0, VAR_6))
 {
  FUNC_0(((void*)0), "Could not delete the registry key.", "PostgreSQL error", VAR_2 | VAR_1);
  return VAR_3;
 }
 return VAR_4;
}
