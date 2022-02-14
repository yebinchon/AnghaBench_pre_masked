
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char const*,int,int *,int) ;
 char* FUNC_3 (struct symt const*) ;

WCHAR* FUNC_4(const struct symt* VAR_1)
{
    const char* VAR_2 = FUNC_3(VAR_1);
    WCHAR* VAR_3;
    DWORD VAR_4;

    if (!VAR_2) return ((void*)0);
    VAR_4 = FUNC_2(VAR_0, 0, VAR_2, -1, ((void*)0), 0);
    if ((VAR_3 = FUNC_1(FUNC_0(), 0, VAR_4 * sizeof(WCHAR))))
        FUNC_2(VAR_0, 0, VAR_2, -1, VAR_3, VAR_4);
    return VAR_3;
}
