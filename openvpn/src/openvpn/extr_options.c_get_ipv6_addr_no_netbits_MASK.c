
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;


 char* FUNC_0 (size_t,int,struct gc_arena*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (char const*,struct gc_arena*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0, struct gc_arena *VAR_1)
{
    const char *VAR_2 = FUNC_2(VAR_0, '/');
    char *VAR_3 = ((void*)0);
    if (((void*)0) == VAR_2)
    {
        VAR_3 = FUNC_3(VAR_0, VAR_1);
    }
    else
    {
        size_t VAR_4 = VAR_2 - VAR_0;
        VAR_3 = FUNC_0(VAR_4 + 1, 1, VAR_1);
        FUNC_1(VAR_3, VAR_0, VAR_4);
    }
    return VAR_3;
}
