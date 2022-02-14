
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nn_sock**,int) ;
 int FUNC_2 (struct nn_sock*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nn_sock*,int,int,void*,size_t*) ;

int FUNC_5 (int VAR_2, int VAR_3, int VAR_4, void *VAR_5,
    size_t *VAR_6)
{
    int VAR_7;
    struct nn_sock *VAR_8;

    VAR_7 = FUNC_1 (&VAR_8, VAR_2);
    if (FUNC_3 (VAR_7 < 0)) {
        VAR_1 = -VAR_7;
        return -1;
    }

    if (FUNC_3 (!VAR_5 && VAR_6)) {
        VAR_7 = -VAR_0;
        goto fail;
    }

    VAR_7 = FUNC_4 (VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
    if (FUNC_3 (VAR_7 < 0))
        goto fail;
    FUNC_0 (VAR_7 == 0, -VAR_7);
    FUNC_2 (VAR_8);
    return 0;

fail:
    FUNC_2 (VAR_8);
    VAR_1 = -VAR_7;
    return -1;
}
