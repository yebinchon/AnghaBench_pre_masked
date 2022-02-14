
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRSRC ;
typedef int HRESULT ;
typedef int HMODULE ;
typedef int HGLOBAL ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;

HRESULT FUNC_5(HMODULE VAR_1, HRSRC VAR_2, void **VAR_3, DWORD *VAR_4)
{
    HGLOBAL VAR_5;

    *VAR_4 = FUNC_4(VAR_1, VAR_2);
    if(*VAR_4 == 0) return FUNC_1(FUNC_0());

    VAR_5 = FUNC_2(VAR_1, VAR_2);
    if( !VAR_5 ) return FUNC_1(FUNC_0());

    *VAR_3 = FUNC_3(VAR_5);
    if(*VAR_3 == ((void*)0)) return FUNC_1(FUNC_0());

    return VAR_0;
}
