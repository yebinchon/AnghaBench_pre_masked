
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_pass_data {char const* prompt_info; void* data; int const* ui_method; } ;
typedef int UI_METHOD ;



__attribute__((used)) static int FUNC_0(struct pem_pass_data *VAR_0,
                                   const char *VAR_1,
                                   const UI_METHOD *VAR_2, void *VAR_3)
{
    if (VAR_0 == ((void*)0))
        return 0;
    VAR_0->ui_method = VAR_2;
    VAR_0->data = VAR_3;
    VAR_0->prompt_info = VAR_1;
    return 1;
}
