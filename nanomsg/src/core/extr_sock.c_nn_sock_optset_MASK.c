
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_transport {struct nn_optset* (* optset ) () ;} ;
struct nn_sock {struct nn_optset** optsets; } ;
struct nn_optset {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct nn_transport* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 struct nn_optset* FUNC_3 () ;

__attribute__((used)) static struct nn_optset *FUNC_4 (struct nn_sock *VAR_1, int VAR_2)
{
    int VAR_3;
    const struct nn_transport *VAR_4;


    VAR_3 = (-VAR_2) - 1;


    if (FUNC_2 (VAR_3 < 0 || VAR_3 >= VAR_0))
        return ((void*)0);


    if (FUNC_0 (VAR_1->optsets [VAR_3] != ((void*)0)))
        return VAR_1->optsets [VAR_3];


    VAR_4 = FUNC_1 (VAR_2);
    if (FUNC_2 (!VAR_4))
        return ((void*)0);
    if (FUNC_2 (!VAR_4->optset))
        return ((void*)0);
    VAR_1->optsets [VAR_3] = VAR_4->optset ();

    return VAR_1->optsets [VAR_3];
}
