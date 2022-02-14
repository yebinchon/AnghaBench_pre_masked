
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PDWORD ;
typedef int LPVOID ;
typedef int HGLOBAL ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_6(HANDLE VAR_4, DWORD VAR_5, DWORD VAR_6, PDWORD VAR_7)
{
    HGLOBAL VAR_8;
    LPVOID VAR_9;
    DWORD VAR_10;

    VAR_8 = FUNC_0(VAR_5);
    if (!VAR_8)
        return VAR_0;

    VAR_9 = FUNC_1(VAR_8);
    if (!VAR_9)
        return VAR_0;

    *VAR_7 = FUNC_2(VAR_8);

    if (FUNC_4(VAR_4, VAR_6, ((void*)0), VAR_1) == VAR_2)
    {
        FUNC_3(VAR_8);
        return VAR_0;
    }

    if (!FUNC_5(VAR_4, VAR_9, *VAR_7, &VAR_10, ((void*)0)))
    {
        FUNC_3(VAR_8);
        return VAR_0;
    }

    FUNC_3(VAR_8);

    return VAR_3;
}
