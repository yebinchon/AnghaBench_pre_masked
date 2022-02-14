
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *,int ,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

BOOL FUNC_3(HANDLE VAR_3)
{
 DWORD VAR_4;

 if (!FUNC_0(VAR_3, VAR_1, ((void*)0), 0, ((void*)0), 0, &VAR_4, ((void*)0))) {
  FUNC_2("Could not unmount drive: %s", FUNC_1());
  return VAR_0;
 }
 return VAR_2;
}
