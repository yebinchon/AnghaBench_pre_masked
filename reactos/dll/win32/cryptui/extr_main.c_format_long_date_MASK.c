
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SYSTEMTIME ;
typedef int FILETIME ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int ,int ,int *,int *,int *,int) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static WCHAR *FUNC_6(const FILETIME *VAR_2)
{
    WCHAR VAR_3[80];
    DWORD VAR_4;
    WCHAR *VAR_5 = ((void*)0);
    SYSTEMTIME VAR_6;


    FUNC_3(VAR_1, VAR_0, VAR_3, FUNC_0(VAR_3));
    FUNC_1(VAR_2, &VAR_6);
    VAR_4 = FUNC_2(VAR_1, 0, &VAR_6, VAR_3, ((void*)0), 0);
    if (VAR_4)
    {
        VAR_5 = FUNC_5(FUNC_4(), 0, VAR_4 * sizeof(WCHAR));
        if (VAR_5)
            FUNC_2(VAR_1, 0, &VAR_6, VAR_3, VAR_5,
             VAR_4);
    }
    return VAR_5;
}
