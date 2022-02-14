
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int TCHAR ;
typedef int HANDLE ;


 int FUNC_0 (int *,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;

HANDLE
FUNC_3(WCHAR VAR_5)
{
    TCHAR VAR_6[255];


    FUNC_2(VAR_6, FUNC_1("\\\\.\\%c:"), VAR_5);


    return FUNC_0(VAR_6, VAR_3, VAR_1 | VAR_2,
                      ((void*)0), VAR_4, VAR_0, ((void*)0));
}
