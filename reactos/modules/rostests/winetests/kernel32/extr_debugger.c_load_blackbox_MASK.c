
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,void*,int,int*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,char const*,...) ;

__attribute__((used)) static int FUNC_6(const char* VAR_3, void* VAR_4, int VAR_5)
{
    HANDLE VAR_6;
    DWORD VAR_7;
    BOOL VAR_8;

    VAR_6=FUNC_1(VAR_3, VAR_0, 0, ((void*)0), VAR_2, 0, 0);
    if (VAR_6 == VAR_1)
    {
        FUNC_5(0, "unable to open '%s'\n", VAR_3);
        return 0;
    }
    FUNC_4(0xdeadbeef);
    VAR_8=FUNC_3(VAR_6, VAR_4, VAR_5, &VAR_7, ((void*)0));
    FUNC_5(VAR_8, "ReadFile failed: %d\n", FUNC_2());
    FUNC_5(VAR_7 == VAR_5, "wrong size for '%s': read=%d\n", VAR_3, VAR_7);
    FUNC_0(VAR_6);
    return 1;
}
