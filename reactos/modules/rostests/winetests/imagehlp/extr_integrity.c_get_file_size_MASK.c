
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static DWORD FUNC_3(void)
{
    HANDLE VAR_6;
    DWORD VAR_7 = 0;

    VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_1, ((void*)0),
                       VAR_4, VAR_0, ((void*)0));
    if (VAR_6 == VAR_3)
        return 0;

    VAR_7 = FUNC_2(VAR_6, ((void*)0));
    FUNC_0(VAR_6);

    return VAR_7;
}
