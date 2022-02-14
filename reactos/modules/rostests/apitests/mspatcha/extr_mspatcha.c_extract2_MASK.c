
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__,unsigned char const*,size_t,size_t*,int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int VAR_5 ;

BOOL FUNC_7(char* VAR_6, const unsigned char* VAR_7, size_t VAR_8)
{
    HANDLE VAR_9;
    BOOL VAR_10;
    DWORD VAR_11;

    if (!FUNC_4(VAR_5, "mpa", 0, VAR_6))
    {
        FUNC_6(0, "GetTempFileNameA failed %lu\n", FUNC_3());
        return VAR_1;
    }

    VAR_9 = FUNC_1(VAR_6, VAR_3, 0, ((void*)0), VAR_0, VAR_2, ((void*)0));
    if (VAR_9 == VAR_4)
    {
        FUNC_6(0, "CreateFileA failed %lu\n", FUNC_3());
        FUNC_2(VAR_6);
        return VAR_1;
    }

    VAR_10 = FUNC_5(VAR_9, VAR_7, VAR_8, &VAR_11, ((void*)0));
    FUNC_0(VAR_9);
    VAR_10 = VAR_10 && (VAR_11 == VAR_8);

    if (!VAR_10)
    {
        FUNC_6(0, "WriteFile failed %lu\n", FUNC_3());
        FUNC_2(VAR_6);
    }

    return VAR_10;
}
