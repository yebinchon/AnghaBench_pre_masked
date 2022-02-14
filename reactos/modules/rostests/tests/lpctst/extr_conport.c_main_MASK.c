
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int * HINSTANCE ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * FUNC_2 (char*) ;
 int * VAR_3 ;
 int FUNC_3 (char*) ;
 int * VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

FUNC_6( int VAR_5, char * VAR_6[] )
{
 HINSTANCE VAR_7;

 if (VAR_5 != 2)
 {
  FUNC_5("WNT LPC Port Connector\n");
  FUNC_5("Usage: %s [port_name]\n",VAR_6[0]);
  FUNC_4(VAR_1);
 }
 FUNC_5("LoadLibrary(NTDLL)\n");
 VAR_7 = FUNC_2("NTDLL");
 if (VAR_7 == ((void*)0))
 {
  FUNC_5("Could not load NTDLL\n");
  return VAR_1;
 }
 FUNC_5("GetProcAddress(NTDLL.NtConnectPort)\n");
 VAR_0 = (VOID*) FUNC_1(
     VAR_7,
     "NtConnectPort"
     );
 if (VAR_0 == ((void*)0))
 {
  FUNC_0(VAR_7);
  FUNC_5("Could not find NTDLL.NtConnectPort\n");
  return VAR_1;
 }
 FUNC_5("GetProcAddress(NTDLL.NtQueryObject)\n");
 VAR_3 = (VOID*) FUNC_1(
     VAR_7,
     "NtQueryObject"
     );
 if (VAR_3 == ((void*)0))
 {
  FUNC_0(VAR_7);
  FUNC_5("Could not find NTDLL.NtQueryObject\n");
  return VAR_1;
 }
 FUNC_5("GetProcAddress(NTDLL.NtYieldExecution)\n");
 VAR_4 = (VOID*) FUNC_1(
     VAR_7,
     "NtYieldExecution"
     );
 if (VAR_4 == ((void*)0))
 {
  FUNC_0(VAR_7);
  FUNC_5("Could not find NTDLL.NtYieldExecution\n");
  return VAR_1;
 }
 FUNC_5("TryConnectPort(%s)\n",VAR_6[1]);
 FUNC_3(VAR_6[1]);
 FUNC_5("Done\n");
 return VAR_2;
}
