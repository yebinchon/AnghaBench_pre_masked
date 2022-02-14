
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_sock {int dummy; } ;
struct TYPE_2__ {int* unused; size_t nsocks; int lock; int ** socks; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nn_sock*) ;
 int FUNC_1 (struct nn_sock**,int) ;
 int FUNC_2 (struct nn_sock*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct nn_sock*) ;
 int FUNC_8 (struct nn_sock*) ;
 int FUNC_9 (struct nn_sock*) ;
 TYPE_1__ VAR_3 ;

int FUNC_10 (int VAR_4)
{
    int VAR_5;
    struct nn_sock *VAR_6;

    FUNC_4 (&VAR_3.lock);
    VAR_5 = FUNC_1 (&VAR_6, VAR_4);
    if (FUNC_6 (VAR_5 < 0)) {
        FUNC_5 (&VAR_3.lock);
        VAR_2 = -VAR_5;
        return -1;
    }





    FUNC_8 (VAR_6);



    FUNC_7 (VAR_6);
    FUNC_7 (VAR_6);
    FUNC_5 (&VAR_3.lock);




    VAR_5 = FUNC_9 (VAR_6);
    if (FUNC_6 (VAR_5 == -VAR_0)) {
        FUNC_2 (VAR_6);
        VAR_2 = VAR_0;
        return -1;
    }



    FUNC_4 (&VAR_3.lock);
    VAR_3.socks [VAR_4] = ((void*)0);
    VAR_3.unused [VAR_1 - VAR_3.nsocks] = VAR_4;
    --VAR_3.nsocks;
    FUNC_0 (VAR_6);


    FUNC_3 ();

    FUNC_5 (&VAR_3.lock);

    return 0;
}
