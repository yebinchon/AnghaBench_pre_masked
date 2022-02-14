
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chunk; } ;
struct TYPE_3__ {scalar_t__ chunk; } ;
struct nn_msgqueue {scalar_t__ cache; TYPE_2__ in; TYPE_1__ out; } ;
struct nn_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nn_msg*) ;
 int FUNC_4 (struct nn_msgqueue*,struct nn_msg*) ;

void FUNC_5 (struct nn_msgqueue *VAR_1)
{
    int VAR_2;
    struct nn_msg VAR_3;


    while (1) {
        VAR_2 = FUNC_4 (VAR_1, &VAR_3);
        if (VAR_2 == -VAR_0)
            break;
        FUNC_0 (VAR_2 >= 0, -VAR_2);
        FUNC_3 (&VAR_3);
    }



    FUNC_1 (VAR_1->in.chunk == VAR_1->out.chunk);
    FUNC_2 (VAR_1->in.chunk);


    if (VAR_1->cache)
        FUNC_2 (VAR_1->cache);
}
