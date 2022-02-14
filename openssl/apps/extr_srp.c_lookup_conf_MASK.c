
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int FUNC_0 (int ,char*,char const*,char const*) ;
 char* FUNC_1 (int const*,char const*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_2(const CONF *VAR_1, const char *VAR_2, const char *VAR_3)
{
    char *VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
    if (VAR_4 == ((void*)0))
        FUNC_0(VAR_0, "variable lookup failed for %s::%s\n", VAR_2, VAR_3);
    return VAR_4;
}
