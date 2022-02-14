
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HANDLE ;


 int FUNC_0 (int *,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static
HANDLE
FUNC_2(WCHAR VAR_5)
{
    WCHAR VAR_6[255];


    FUNC_1(VAR_6, L"\\\\.\\%c:", VAR_5);


    return FUNC_0(VAR_6, VAR_3, VAR_1 | VAR_2,
                      ((void*)0), VAR_4, VAR_0, ((void*)0));
}
