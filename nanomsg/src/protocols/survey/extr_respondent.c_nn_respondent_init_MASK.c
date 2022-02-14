
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sockbase_vfptr {int dummy; } ;
struct nn_respondent {scalar_t__ flags; int xrespondent; } ;


 int FUNC_0 (int *,struct nn_sockbase_vfptr const*,void*) ;

__attribute__((used)) static void FUNC_1 (struct nn_respondent *VAR_0,
    const struct nn_sockbase_vfptr *VAR_1, void *VAR_2)
{
    FUNC_0 (&VAR_0->xrespondent, VAR_1, VAR_2);
    VAR_0->flags = 0;
}
