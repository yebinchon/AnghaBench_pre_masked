
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sock {int ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nn_sock*,int,int,void const*,size_t) ;

int FUNC_3 (struct nn_sock *VAR_0, int VAR_1, int VAR_2,
    const void *VAR_3, size_t VAR_4)
{
    int VAR_5;

    FUNC_0 (&VAR_0->ctx);
    VAR_5 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    FUNC_1 (&VAR_0->ctx);

    return VAR_5;
}
