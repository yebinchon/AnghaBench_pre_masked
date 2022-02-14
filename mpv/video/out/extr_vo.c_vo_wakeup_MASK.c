
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int lock; } ;
struct vo {struct vo_internal* in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vo*) ;

void FUNC_3(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;

    FUNC_0(&VAR_1->lock);
    FUNC_2(VAR_0);
    FUNC_1(&VAR_1->lock);
}
