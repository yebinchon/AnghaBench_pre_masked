
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cma {int order_per_bit; int lock; int bitmap; } ;


 unsigned long FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct cma*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, u64 *VAR_1)
{
 struct cma *VAR_2 = VAR_0;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock);

 VAR_3 = FUNC_0(VAR_2->bitmap, (int)FUNC_1(VAR_2));
 FUNC_3(&VAR_2->lock);
 *VAR_1 = (u64)VAR_3 << VAR_2->order_per_bit;

 return 0;
}
