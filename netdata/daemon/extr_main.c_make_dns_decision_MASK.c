
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIMPLE_PATTERN ;


 char* FUNC_0 (char const*,char const*,char const*) ;
 int FUNC_1 (char*,char*,char const*,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;

int FUNC_4(const char *VAR_0, const char *VAR_1, const char *VAR_2, SIMPLE_PATTERN *VAR_3)
{
    char *VAR_4 = FUNC_0(VAR_0,VAR_1,VAR_2);
    if(!FUNC_3("yes",VAR_4))
        return 1;
    if(!FUNC_3("no",VAR_4))
        return 0;
    if(FUNC_3("heuristic",VAR_4))
        FUNC_1("Invalid configuration option '%s' for '%s'/'%s'. Valid options are 'yes', 'no' and 'heuristic'. Proceeding with 'heuristic'",
              VAR_4, VAR_0, VAR_1);
    return FUNC_2(VAR_3);
}
