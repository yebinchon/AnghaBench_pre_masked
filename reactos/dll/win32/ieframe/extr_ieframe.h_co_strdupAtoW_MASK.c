
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCSTR ;
typedef int INT ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int *,int) ;

__attribute__((used)) static inline LPWSTR FUNC_2(LPCSTR VAR_1)
{
    INT VAR_2;
    WCHAR *VAR_3;
    VAR_2 = FUNC_1(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
    VAR_3 = FUNC_0(VAR_2*sizeof(WCHAR));
    if (VAR_3)
        FUNC_1(VAR_0, 0, VAR_1, -1, VAR_3, VAR_2);
    return VAR_3;
}
