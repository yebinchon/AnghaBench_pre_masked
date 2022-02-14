
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IBackgroundCopyJob ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int const*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int ,int *,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_5(IBackgroundCopyJob* VAR_4,
        const WCHAR *VAR_5, const WCHAR *VAR_6)
{
    DWORD VAR_7;

    FUNC_0(VAR_0, VAR_2);
    FUNC_2(VAR_2, VAR_5);
    FUNC_0(VAR_0, VAR_3);
    FUNC_2(VAR_3, VAR_6);
    VAR_7 = VAR_0;
    FUNC_3(VAR_3, VAR_3, &VAR_7, 0);
    FUNC_4(VAR_3, ((void*)0), &VAR_7, VAR_1);

    return FUNC_1(VAR_4, VAR_3, VAR_2);
}
