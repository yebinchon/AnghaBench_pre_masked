
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_circular_queue {int mutex; int cond; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ff_circular_queue *VAR_0)
{
 FUNC_0(&VAR_0->cond, &VAR_0->mutex);
}
