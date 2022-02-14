
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {unsigned long excess_ref; int lock; } ;


 struct kmemleak_object* FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct kmemleak_object*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct kmemleak_object *VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0);
 if (!VAR_3) {
  FUNC_1("Setting excess_ref on unknown object at 0x%08lx\n",
         VAR_0);
  return;
 }

 FUNC_3(&VAR_3->lock, VAR_2);
 VAR_3->excess_ref = VAR_1;
 FUNC_4(&VAR_3->lock, VAR_2);
 FUNC_2(VAR_3);
}
