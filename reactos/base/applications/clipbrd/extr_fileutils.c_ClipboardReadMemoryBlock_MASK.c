
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int * HGLOBAL ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int ) ;

__attribute__((used)) static HGLOBAL FUNC_6(HANDLE VAR_3, DWORD VAR_4, DWORD VAR_5)
{
    HGLOBAL VAR_6;
    LPVOID VAR_7;
    DWORD VAR_8;

    VAR_6 = FUNC_0(VAR_1, VAR_5);
    if (!VAR_6)
        return ((void*)0);

    VAR_7 = FUNC_2(VAR_6);
    if (!VAR_7)
    {
        FUNC_1(VAR_6);
        return ((void*)0);
    }

    if (FUNC_5(VAR_3, VAR_4, ((void*)0), VAR_0) == VAR_2)
    {
        FUNC_3(VAR_6);
        FUNC_1(VAR_6);
        return ((void*)0);
    }

    if (!FUNC_4(VAR_3, VAR_7, VAR_5, &VAR_8, ((void*)0)))
    {
        FUNC_3(VAR_6);
        FUNC_1(VAR_6);
        return ((void*)0);
    }

    FUNC_3(VAR_6);

    return VAR_6;
}
