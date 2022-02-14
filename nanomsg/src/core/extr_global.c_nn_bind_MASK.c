
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_sock*,char const*,int) ;
 int FUNC_1 (struct nn_sock**,int) ;
 int FUNC_2 (struct nn_sock*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (int VAR_1, const char *VAR_2)
{
    int VAR_3;
    struct nn_sock *VAR_4;

    VAR_3 = FUNC_1 (&VAR_4, VAR_1);
    if (VAR_3 < 0) {
        VAR_0 = -VAR_3;
        return -1;
    }

    VAR_3 = FUNC_0 (VAR_4, VAR_2, 1);
    if (FUNC_3 (VAR_3 < 0)) {
        FUNC_2 (VAR_4);
        VAR_0 = -VAR_3;
        return -1;
    }

    FUNC_2 (VAR_4);
    return VAR_3;
}
