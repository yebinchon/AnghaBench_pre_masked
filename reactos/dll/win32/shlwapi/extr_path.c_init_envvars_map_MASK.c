
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct envvars_map {scalar_t__ len; int path; scalar_t__ var; } ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(struct envvars_map *VAR_0)
{
    while (VAR_0->var)
    {
        VAR_0->len = FUNC_0(VAR_0->var, VAR_0->path, sizeof(VAR_0->path)/sizeof(WCHAR));

        if (VAR_0->len) VAR_0->len--;
        VAR_0++;
    }
}
