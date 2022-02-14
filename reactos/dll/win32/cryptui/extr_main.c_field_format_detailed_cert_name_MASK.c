
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PCERT_NAME_BLOB ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *,int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static WCHAR *FUNC_3(PCERT_NAME_BLOB VAR_3)
{
    WCHAR *VAR_4 = ((void*)0);
    DWORD VAR_5 = FUNC_0(VAR_2, VAR_3,
     VAR_1 | VAR_0, ((void*)0), 0);

    if (VAR_5)
    {
        VAR_4 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(WCHAR));
        if (VAR_4)
            FUNC_0(VAR_2, VAR_3,
             VAR_1 | VAR_0, VAR_4, VAR_5);
    }
    return VAR_4;
}
