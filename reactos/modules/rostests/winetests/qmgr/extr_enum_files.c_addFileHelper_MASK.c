
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IBackgroundCopyJob ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int const*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int*,int ) ;
 int FUNC_4 (int *,int *,int*,int ) ;

__attribute__((used)) static HRESULT FUNC_5(IBackgroundCopyJob* VAR_2,
                             const WCHAR *VAR_3, const WCHAR *VAR_4)
{
    DWORD VAR_5;
    WCHAR VAR_6[VAR_0];
    WCHAR VAR_7[VAR_0];
    WCHAR VAR_8[VAR_0];

    FUNC_0(VAR_0, VAR_6);
    FUNC_2(VAR_6, VAR_3);
    FUNC_0(VAR_0, VAR_8);
    FUNC_2(VAR_8, VAR_4);
    VAR_5 = VAR_0;
    FUNC_3(VAR_8, VAR_7, &VAR_5, 0);
    FUNC_4(VAR_7, ((void*)0), &VAR_5, VAR_1);
    return FUNC_1(VAR_2, VAR_7, VAR_6);
}
