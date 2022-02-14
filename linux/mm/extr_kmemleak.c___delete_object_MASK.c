
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int flags; int lock; int use_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kmemleak_object*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct kmemleak_object *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(!(VAR_1->flags & VAR_0));
 FUNC_0(FUNC_1(&VAR_1->use_count) < 1);





 FUNC_3(&VAR_1->lock, VAR_2);
 VAR_1->flags &= ~VAR_0;
 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_1);
}
