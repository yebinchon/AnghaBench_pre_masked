
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,char const*,int,int *,int) ;
 int VAR_7 ;
 int FUNC_6 (scalar_t__,char const*,int,int *,int *) ;
 int VAR_8 ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static BOOL FUNC_9(const char *VAR_9, const char *VAR_10)
{
    int VAR_11;
    DWORD VAR_12;
    HANDLE VAR_13;
    WCHAR VAR_14[VAR_6];

    FUNC_5( VAR_0, 0, VAR_9, -1, VAR_14, VAR_6 );
    FUNC_3(VAR_14, FUNC_0(VAR_8), VAR_8, ((void*)0));

    VAR_11 = FUNC_8(VAR_10);
    VAR_13 = FUNC_2(VAR_14, VAR_4, 0, ((void*)0), VAR_1,
                       VAR_3, ((void*)0));
    FUNC_7(VAR_13 != VAR_5, "CreateFile failed: %u\n", FUNC_4());
    if(VAR_13 == VAR_5)
        return VAR_2;
    FUNC_6(VAR_13, VAR_10, VAR_11, &VAR_12, ((void*)0));
    FUNC_1(VAR_13);

    return VAR_7;
}
