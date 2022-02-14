
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,char const*,int *,int *,int **) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    HRESULT VAR_10;
    const WCHAR VAR_11[] = {'T','e','s','t','i','n','g', 0};

    VAR_10 = FUNC_0(&VAR_2, ((void*)0), VAR_0,
            &VAR_5, (void **) &VAR_9);
    if(VAR_10 != VAR_6)
        return VAR_3;
    VAR_10 = FUNC_1(VAR_9, VAR_11, &VAR_1,
            &VAR_4, (IUnknown**)&VAR_8);
    if(VAR_10 != VAR_6)
    {
        FUNC_2(VAR_9);
        return VAR_3;
    }
    return VAR_7;
}
