
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,char const*,int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_3(LPSTR VAR_5, const char *VAR_6, DWORD VAR_7)
{
    BOOL VAR_8;
    DWORD VAR_9;
    HANDLE VAR_10 = FUNC_1(VAR_5, VAR_3, 0, ((void*)0),
                            VAR_0, VAR_2, ((void*)0));
    if (VAR_10 == VAR_4) return VAR_1;
    VAR_8 = FUNC_2(VAR_10, VAR_6, VAR_7, &VAR_9, ((void*)0));
    FUNC_0(VAR_10);
    return VAR_8;
}
