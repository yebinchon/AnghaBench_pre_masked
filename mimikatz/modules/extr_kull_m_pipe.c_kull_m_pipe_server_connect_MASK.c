
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;

BOOL FUNC_3(HANDLE VAR_2)
{
 BOOL VAR_3 = VAR_1;
 if(!(VAR_3 = (FUNC_0(VAR_2, ((void*)0)) || (FUNC_1() == VAR_0))))
  FUNC_2(L"ConnectNamedPipe");
 return VAR_3;
}
