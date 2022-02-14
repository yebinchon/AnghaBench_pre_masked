
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockref {int count; int lock; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct lockref *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->count = -128;
}
