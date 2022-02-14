
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWCHAR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int,int,int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

BOOL FUNC_2(LPCWCHAR VAR_7, HANDLE *VAR_8)
{
 BOOL VAR_9 = VAR_0;
 *VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_5 | VAR_4 | VAR_6, 1, 0, 0, VAR_2, ((void*)0));
 if(!(VAR_9 = (*VAR_8 && (*VAR_8 != VAR_1))))
  FUNC_1(L"CreateNamedPipe");
 return VAR_9;
}
