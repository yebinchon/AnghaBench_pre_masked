
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {unsigned long excess_ref; int lock; } ;


 void* VAR_0 ;
 unsigned long* FUNC_0 (void*,void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct kmemleak_object*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (void*) ;
 int VAR_2 ;
 struct kmemleak_object* FUNC_5 (unsigned long,int) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct kmemleak_object*) ;

__attribute__((used)) static void FUNC_12(void *VAR_5, void *VAR_6,
         struct kmemleak_object *VAR_7)
{
 unsigned long *VAR_8;
 unsigned long *VAR_9 = FUNC_0(VAR_5, VAR_0);
 unsigned long *VAR_10 = VAR_6 - (VAR_0 - 1);
 unsigned long VAR_11;
 unsigned long VAR_12;

 FUNC_6(&VAR_2, VAR_11);
 for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8++) {
  struct kmemleak_object *VAR_13;
  unsigned long VAR_14;
  unsigned long VAR_15;

  if (FUNC_8())
   break;

  FUNC_2();
  VAR_14 = *VAR_8;
  FUNC_3();

  VAR_12 = (unsigned long)FUNC_4((void *)VAR_14);
  if (VAR_12 < VAR_4 || VAR_12 >= VAR_3)
   continue;







  VAR_13 = FUNC_5(VAR_14, 1);
  if (!VAR_13)
   continue;
  if (VAR_13 == VAR_7)

   continue;






  FUNC_9(&VAR_13->lock, VAR_1);

  if (FUNC_1(VAR_13)) {
   VAR_15 = VAR_13->excess_ref;

  } else {
   VAR_15 = 0;
   FUNC_11(VAR_13);
  }
  FUNC_10(&VAR_13->lock);

  if (VAR_15) {
   VAR_13 = FUNC_5(VAR_15, 0);
   if (!VAR_13)
    continue;
   if (VAR_13 == VAR_7)

    continue;
   FUNC_9(&VAR_13->lock, VAR_1);
   FUNC_11(VAR_13);
   FUNC_10(&VAR_13->lock);
  }
 }
 FUNC_7(&VAR_2, VAR_11);
}
