
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int send_reset; int lock; } ;
struct vo {struct vo_internal* in; } ;


 int FUNC_0 (struct vo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vo*) ;
 int FUNC_4 (struct vo*) ;

void FUNC_5(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;
    FUNC_1(&VAR_1->lock);
    FUNC_0(VAR_0);
    FUNC_3(VAR_0);
    VAR_1->send_reset = 1;
    FUNC_4(VAR_0);
    FUNC_2(&VAR_1->lock);
}
