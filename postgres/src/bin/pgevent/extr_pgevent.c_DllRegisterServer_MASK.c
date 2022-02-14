
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_name ;
typedef int buffer ;
typedef int STDAPI ;
typedef int LPBYTE ;
typedef int HMODULE ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,int,char*,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (char*) ;

STDAPI
FUNC_7(void)
{
 HKEY VAR_13;
 DWORD VAR_14;
 char VAR_15[VAR_10];
 char VAR_16[400];


 if (!FUNC_0((HMODULE) VAR_12, VAR_15, sizeof(VAR_15)))
 {
  FUNC_1(((void*)0), "Could not retrieve DLL filename", "PostgreSQL error", VAR_5 | VAR_4);
  return VAR_8;
 }





 FUNC_5(VAR_16, sizeof(VAR_16),
     "SYSTEM\\CurrentControlSet\\Services\\EventLog\\Application\\%s",
     VAR_11);
 if (FUNC_3(VAR_3, VAR_16, &VAR_13))
 {
  FUNC_1(((void*)0), "Could not create the registry key.", "PostgreSQL error", VAR_5 | VAR_4);
  return VAR_8;
 }


 if (FUNC_4(VAR_13,
       "EventMessageFile",
       0,
       VAR_7,
       (LPBYTE) VAR_15,
       FUNC_6(VAR_15) + 1))
 {
  FUNC_1(((void*)0), "Could not set the event message file.", "PostgreSQL error", VAR_5 | VAR_4);
  return VAR_8;
 }


 VAR_14 = VAR_0 | VAR_2 | VAR_1;

 if (FUNC_4(VAR_13,
       "TypesSupported",
       0,
       VAR_6,
       (LPBYTE) &VAR_14,
       sizeof(DWORD)))
 {
  FUNC_1(((void*)0), "Could not set the supported types.", "PostgreSQL error", VAR_5 | VAR_4);
  return VAR_8;
 }

 FUNC_2(VAR_13);
 return VAR_9;
}
