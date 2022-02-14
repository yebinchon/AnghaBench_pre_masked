
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
struct module {int vsymt; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

struct symt* FUNC_2(struct module* VAR_0, DWORD VAR_1)
{

    if (!VAR_1-- || VAR_1 >= FUNC_1(&VAR_0->vsymt)) return ((void*)0);
    return *(struct symt**)FUNC_0(&VAR_0->vsymt, VAR_1);



}
