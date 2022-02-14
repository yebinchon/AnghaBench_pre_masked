
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static HRESULT FUNC_6(char **VAR_2, const char *VAR_3)
{
    FUNC_3(FUNC_1(), 0, *VAR_2);
    *VAR_2 = FUNC_2(FUNC_1(), 0, FUNC_5(VAR_3) + 1);
    if (!*VAR_2)
    {
        FUNC_0("Out of memory.\n");
        return VAR_1;
    }
    FUNC_4(*VAR_2, VAR_3);
    return VAR_0;
}
