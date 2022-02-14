
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
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,char const*,size_t,int *,int *) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*,char const*) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(const char *VAR_5, const char *VAR_6, size_t VAR_7, DWORD VAR_8)
{
    char VAR_9[VAR_4];
    const char *VAR_10;
    HANDLE VAR_11;
    DWORD VAR_12;
    BOOL VAR_13;

    VAR_10 = FUNC_8(VAR_5, '.');
    FUNC_5(VAR_10 != ((void*)0), "no script extension\n");
    if(!VAR_10)
      return;

    FUNC_7(VAR_9, "test%s", VAR_10);

    VAR_11 = FUNC_1(VAR_9, VAR_2, 0, ((void*)0), VAR_0,
            VAR_1, ((void*)0));
    FUNC_5(VAR_11 != VAR_3, "CreateFile failed: %u\n", FUNC_3());
    if(VAR_11 == VAR_3)
        return;

    VAR_13 = FUNC_4(VAR_11, VAR_6, VAR_7, &VAR_12, ((void*)0));
    FUNC_0(VAR_11);
    FUNC_5(VAR_13, "Could not write to file: %u\n", FUNC_3());
    if(!VAR_13)
        return;

    FUNC_6(VAR_9, VAR_8);

    FUNC_2(VAR_9);
}
