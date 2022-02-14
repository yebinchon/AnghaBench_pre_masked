
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sockbase {int dummy; } ;
struct nn_xrespondent {struct nn_sockbase sockbase; } ;


 int FUNC_0 (struct nn_xrespondent*) ;
 struct nn_xrespondent* FUNC_1 (int,char*) ;
 int FUNC_2 (struct nn_xrespondent*,int *,void*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3 (void *VAR_1, struct nn_sockbase **VAR_2)
{
    struct nn_xrespondent *VAR_3;

    VAR_3 = FUNC_1 (sizeof (struct nn_xrespondent), "socket (xrespondent)");
    FUNC_0 (VAR_3);
    FUNC_2 (VAR_3, &VAR_0, VAR_1);
    *VAR_2 = &VAR_3->sockbase;

    return 0;
}
