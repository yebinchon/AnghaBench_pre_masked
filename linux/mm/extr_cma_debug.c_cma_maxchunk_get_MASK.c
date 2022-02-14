
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cma {int order_per_bit; int lock; int bitmap; } ;


 unsigned long FUNC_0 (struct cma*) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int ,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, u64 *VAR_1)
{
 struct cma *VAR_2 = VAR_0;
 unsigned long VAR_3 = 0;
 unsigned long VAR_4, VAR_5 = 0;
 unsigned long VAR_6 = FUNC_0(VAR_2);

 FUNC_4(&VAR_2->lock);
 for (;;) {
  VAR_4 = FUNC_2(VAR_2->bitmap, VAR_6, VAR_5);
  if (VAR_4 >= VAR_6)
   break;
  VAR_5 = FUNC_1(VAR_2->bitmap, VAR_6, VAR_4);
  VAR_3 = FUNC_3(VAR_5 - VAR_4, VAR_3);
 }
 FUNC_5(&VAR_2->lock);
 *VAR_1 = (u64)VAR_3 << VAR_2->order_per_bit;

 return 0;
}
