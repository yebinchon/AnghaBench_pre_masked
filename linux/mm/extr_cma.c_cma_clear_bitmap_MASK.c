
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma {unsigned long base_pfn; unsigned long order_per_bit; int lock; int bitmap; } ;


 int FUNC_0 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (struct cma*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cma *VAR_0, unsigned long VAR_1,
        unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = (VAR_1 - VAR_0->base_pfn) >> VAR_0->order_per_bit;
 VAR_4 = FUNC_1(VAR_0, VAR_2);

 FUNC_2(&VAR_0->lock);
 FUNC_0(VAR_0->bitmap, VAR_3, VAR_4);
 FUNC_3(&VAR_0->lock);
}
