
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwProcessId; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int PKULL_M_MEMORY_HANDLE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (char*,TYPE_1__*) ;

BOOL FUNC_5(PKULL_M_MEMORY_HANDLE * VAR_2, DWORD VAR_3)
{
 BOOL VAR_4 = VAR_0;
 SERVICE_STATUS_PROCESS VAR_5;
 HANDLE VAR_6;

 if(FUNC_4(L"SamSs", &VAR_5))
 {
  if((VAR_6 = FUNC_1(VAR_3, VAR_0, VAR_5.dwProcessId)))
  {
   if(!(VAR_4 = FUNC_3(VAR_1, VAR_6, VAR_2)))
    FUNC_0(VAR_6);
  }
  else FUNC_2(L"OpenProcess");
 }
 else FUNC_2(L"kull_m_service_getUniqueForName");
 return VAR_4;
}
