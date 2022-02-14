
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,void*,int,int *,int *) ;

__attribute__((used)) static void FUNC_3(const char* VAR_3, void* VAR_4, int VAR_5)
{
    HANDLE VAR_6;
    DWORD VAR_7;

    VAR_6=FUNC_1(VAR_3, VAR_1, 0, ((void*)0), VAR_0, 0, 0);
    if (VAR_6 == VAR_2)
        return;
    FUNC_2(VAR_6, VAR_4, VAR_5, &VAR_7, ((void*)0));
    FUNC_0(VAR_6);
}
