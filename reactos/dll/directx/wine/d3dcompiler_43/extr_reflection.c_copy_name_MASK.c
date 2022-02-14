
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,size_t) ;
 int VAR_1 ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static BOOL FUNC_5(const char *VAR_2, char **VAR_3)
{
    size_t VAR_4;

    if (!VAR_2) return VAR_1;

    VAR_4 = FUNC_4(VAR_2) + 1;
    if (VAR_4 == 1)
    {
        return VAR_1;
    }

    *VAR_3 = FUNC_2(FUNC_1(), 0, VAR_4);
    if (!*VAR_3)
    {
        FUNC_0("Failed to allocate name memory.\n");
        return VAR_0;
    }

    FUNC_3(*VAR_3, VAR_2, VAR_4);

    return VAR_1;
}
