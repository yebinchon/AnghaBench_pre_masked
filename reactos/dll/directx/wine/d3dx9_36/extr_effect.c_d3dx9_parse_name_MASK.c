
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (char const**,int *) ;

__attribute__((used)) static HRESULT FUNC_7(char **VAR_2, const char *VAR_3)
{
    DWORD VAR_4;

    FUNC_6(&VAR_3, &VAR_4);
    FUNC_3("Name size: %#x\n", VAR_4);

    if (!VAR_4)
    {
        return VAR_0;
    }

    *VAR_2 = FUNC_2(FUNC_1(), 0, VAR_4);
    if (!*VAR_2)
    {
        FUNC_0("Failed to allocate name memory.\n");
        return VAR_1;
    }

    FUNC_3("Name: %s.\n", FUNC_4(VAR_3, VAR_4));
    FUNC_5(*VAR_2, VAR_3, VAR_4);

    return VAR_0;
}
