
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int lock; int flags; } ;


 int VAR_0 ;
 struct kmemleak_object* FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct kmemleak_object*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct kmemleak_object *VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0);
 if (!VAR_3) {
  FUNC_1("Not scanning unknown object at 0x%08lx\n", VAR_1);
  return;
 }

 FUNC_3(&VAR_3->lock, VAR_2);
 VAR_3->flags |= VAR_0;
 FUNC_4(&VAR_3->lock, VAR_2);
 FUNC_2(VAR_3);
}
