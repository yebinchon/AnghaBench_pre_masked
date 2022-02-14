
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep {int sock; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int,void*,size_t*) ;

void FUNC_2 (struct nn_ep *VAR_0, int VAR_1, int VAR_2,
    void *VAR_3, size_t *VAR_4)
{
    int VAR_5;

    VAR_5 = FUNC_1 (VAR_0->sock, VAR_1, VAR_2, VAR_3, VAR_4);
    FUNC_0 (VAR_5 == 0, -VAR_5);
}
