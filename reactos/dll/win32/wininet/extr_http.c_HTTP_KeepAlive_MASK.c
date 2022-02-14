
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szVersion ;
typedef int szConnectionResponse ;
typedef int http_request_t ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_2(http_request_t *VAR_8)
{
    WCHAR VAR_9[10];
    WCHAR VAR_10[20];
    DWORD VAR_11 = sizeof(VAR_9);
    BOOL VAR_12 = VAR_1;



    if (FUNC_0(VAR_8, VAR_4, VAR_9, &VAR_11, ((void*)0)) == VAR_0
        && !FUNC_1(VAR_9, VAR_6))
    {
        VAR_12 = VAR_5;
    }

    VAR_11 = sizeof(VAR_10);
    if (FUNC_0(VAR_8, VAR_3, VAR_10, &VAR_11, ((void*)0)) == VAR_0
        || FUNC_0(VAR_8, VAR_2, VAR_10, &VAR_11, ((void*)0)) == VAR_0)
    {
        VAR_12 = !FUNC_1(VAR_10, VAR_7);
    }

    return VAR_12;
}
