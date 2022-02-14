
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (char*,int ) ;

BOOL FUNC_3(void)
{
 HRESULT VAR_6;

 VAR_6 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (LPVOID)&VAR_5);
 if (FUNC_1(VAR_6)) {
  FUNC_2("CoCreateInstance for TaskbarList failed: error %X\n", VAR_6);
  VAR_5 = ((void*)0);
  return VAR_2;
 }
 return VAR_4;
}
