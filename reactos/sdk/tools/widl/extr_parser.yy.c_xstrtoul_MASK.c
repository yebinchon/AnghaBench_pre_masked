
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static unsigned int FUNC_2(const char *VAR_3, char **VAR_4, int VAR_5)
{
    unsigned long VAR_6;

    VAR_2 = 0;
    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
    if ((VAR_6 == VAR_1 && VAR_2 == VAR_0) || ((unsigned int)VAR_6 != VAR_6))
        FUNC_0("integer constant %s is too large\n", VAR_3);
    return VAR_6;
}
