
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,void const*,int ,int *,int *) ;
 int FUNC_4 (int,char*,int ) ;

__attribute__((used)) static BOOL FUNC_5(const void *VAR_5, DWORD VAR_6)
{
    HANDLE VAR_7;
    BOOL VAR_8;
    DWORD VAR_9;

    VAR_7 = FUNC_1("test.reg", VAR_3, 0, ((void*)0), VAR_0,
                       VAR_2, ((void*)0));
    FUNC_4(VAR_7 != VAR_4, "CreateFile failed: %u\n", FUNC_2());
    if (VAR_7 == VAR_4)
        return VAR_1;

    VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_6, &VAR_9, ((void*)0));
    FUNC_4(VAR_8, "WriteFile failed: %u\n", FUNC_2());
    FUNC_0(VAR_7);

    return VAR_8;
}
