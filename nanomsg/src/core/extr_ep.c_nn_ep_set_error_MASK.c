
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep {int last_errno; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nn_ep*,int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct nn_ep *VAR_1, int VAR_2)
{
    if (VAR_1->last_errno == VAR_2)

        return;
    if (VAR_1->last_errno == 0)
        FUNC_1 (VAR_1->sock, VAR_0, 1);
    VAR_1->last_errno = VAR_2;
    FUNC_0 (VAR_1->sock, VAR_1, VAR_2);
}
