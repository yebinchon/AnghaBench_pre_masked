
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep {scalar_t__ last_errno; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nn_ep*,int ) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2 (struct nn_ep *VAR_1)
{
    if (VAR_1->last_errno == 0)

        return;
    FUNC_1 (VAR_1->sock, VAR_0, -1);
    VAR_1->last_errno = 0;
    FUNC_0 (VAR_1->sock, VAR_1, 0);
}
