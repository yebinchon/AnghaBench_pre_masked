
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_sock {TYPE_1__* socktype; } ;
struct TYPE_2__ {int protocol; int (* ispeer ) (int) ;} ;


 int FUNC_0 (int) ;

int FUNC_1 (struct nn_sock *VAR_0, int VAR_1)
{




    if ((VAR_0->socktype->protocol & 0xfff0) != (VAR_1 & 0xfff0))
        return 0;



    return VAR_0->socktype->ispeer (VAR_1);
}
