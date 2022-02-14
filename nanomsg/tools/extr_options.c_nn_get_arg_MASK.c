
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {int * arg; int data; scalar_t__ args_left; } ;



__attribute__((used)) static int FUNC_0 (struct nn_parse_context *VAR_0)
{
    if (!VAR_0->args_left)
        return 0;
    VAR_0->args_left -= 1;
    VAR_0->arg += 1;
    VAR_0->data = *VAR_0->arg;
    return 1;
}
