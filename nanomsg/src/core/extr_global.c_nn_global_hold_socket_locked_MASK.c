
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_sock {int dummy; } ;
struct TYPE_2__ {struct nn_sock** socks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nn_sock*) ;
 TYPE_1__ VAR_2 ;

int FUNC_2(struct nn_sock **VAR_3, int VAR_4)
{
    struct nn_sock *VAR_5;

    if (FUNC_0 (VAR_4 < 0 || VAR_4 >= VAR_1 || VAR_2.socks == ((void*)0)))
        return -VAR_0;

    VAR_5 = VAR_2.socks[VAR_4];
    if (FUNC_0 (VAR_5 == ((void*)0))) {
        return -VAR_0;
    }

    if (FUNC_0 (FUNC_1 (VAR_5) != 0)) {
        return -VAR_0;
    }
    *VAR_3 = VAR_5;
    return 0;
}
