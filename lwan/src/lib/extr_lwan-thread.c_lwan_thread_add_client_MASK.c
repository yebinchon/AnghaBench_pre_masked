
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_thread {int pending_fds; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct lwan_thread*) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(struct lwan_thread *VAR_0, int VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < 10; VAR_2++) {
        bool VAR_3 = FUNC_4(&VAR_0->pending_fds, VAR_1);

        if (FUNC_0(VAR_3))
            return;


        FUNC_3(VAR_0);
    }

    FUNC_2("Dropping connection %d", VAR_1);

    FUNC_1(VAR_1);
}
