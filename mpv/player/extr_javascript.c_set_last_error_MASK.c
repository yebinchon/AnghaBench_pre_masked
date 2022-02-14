
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {scalar_t__* last_error_str; } ;


 scalar_t__* FUNC_0 (scalar_t__*,char const*) ;

__attribute__((used)) static void FUNC_1(struct script_ctx *VAR_0, bool VAR_1, const char *VAR_2)
{
    VAR_0->last_error_str[0] = 0;
    if (!VAR_1)
        return;
    if (!VAR_2 || !VAR_2[0])
        VAR_2 = "Error";
    VAR_0->last_error_str = FUNC_0(VAR_0->last_error_str, VAR_2);
}
