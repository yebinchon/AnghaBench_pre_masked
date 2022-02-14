
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;
 char* FUNC_5 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,char*,char const*,...) ;

__attribute__((used)) static DWORD FUNC_7(const char *VAR_6, const char **VAR_7)
{
    HANDLE VAR_8, VAR_9;
    DWORD VAR_10;

    VAR_8 = FUNC_1(VAR_6, VAR_2, 0, ((void*)0), VAR_4, VAR_0, ((void*)0));
    FUNC_6(VAR_8 != VAR_3, "CreateFile failed: %08x\n", FUNC_4());
    if(VAR_8 == VAR_3)
        return 0;

    VAR_10 = FUNC_3(VAR_8, ((void*)0));

    VAR_9 = FUNC_2(VAR_8, ((void*)0), VAR_5, 0, 0, ((void*)0));
    FUNC_0(VAR_8);
    FUNC_6(VAR_9 != ((void*)0), "CreateFileMappingA(%s) failed: %u\n", VAR_6, FUNC_4());
    if(!VAR_9)
        return 0;

    *VAR_7 = FUNC_5(VAR_9, VAR_1, 0, 0, 0);
    FUNC_6(*VAR_7 != ((void*)0), "MapViewOfFile failed: %u\n", FUNC_4());
    FUNC_0(VAR_9);
    if(!*VAR_7)
        return 0;

    return VAR_10;
}
