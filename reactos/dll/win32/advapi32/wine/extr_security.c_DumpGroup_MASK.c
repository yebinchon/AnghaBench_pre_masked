
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;
typedef int * PSID ;
typedef int PSECURITY_DESCRIPTOR ;
typedef int BOOL ;


 int FUNC_0 (int *,char**,int *) ;
 int FUNC_1 (char const*,int,char**,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int **,int *) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_3(PSECURITY_DESCRIPTOR VAR_2, WCHAR **VAR_3, ULONG *VAR_4)
{
    static const WCHAR VAR_5[] = {'G',':',0};
    BOOL VAR_6;
    PSID VAR_7;

    if (!FUNC_2(VAR_2, &VAR_7, &VAR_6))
        return VAR_0;

    if (VAR_7 == ((void*)0))
        return VAR_1;

    FUNC_1(VAR_5, -1, VAR_3, VAR_4);
    if (!FUNC_0(VAR_7, VAR_3, VAR_4))
        return VAR_0;
    return VAR_1;
}
