
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *,int ,int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

BOOL FUNC_3(HANDLE VAR_1)
{
 BOOL VAR_2;
 DWORD VAR_3;


 VAR_2 = FUNC_0(VAR_1, VAR_0, ((void*)0), 0, ((void*)0), 0, &VAR_3, ((void*)0) );
 if (!VAR_2)
  FUNC_2("Could not refresh drive layout: %s", FUNC_1());
 return VAR_2;
}
