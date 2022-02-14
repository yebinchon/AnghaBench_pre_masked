
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int fixup_assert_init; scalar_t__ (* is_static_object ) (void*) ;} ;
struct debug_obj {void* object; struct debug_obj_descr* descr; int state; } ;
struct debug_bucket {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (void*,struct debug_obj_descr*) ;
 int VAR_1 ;
 int FUNC_2 (struct debug_obj*,char*) ;
 struct debug_bucket* FUNC_3 (unsigned long) ;
 struct debug_obj* FUNC_4 (void*,struct debug_bucket*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (void*) ;

void FUNC_8(void *VAR_2, struct debug_obj_descr *VAR_3)
{
 struct debug_bucket *VAR_4;
 struct debug_obj *VAR_5;
 unsigned long VAR_6;

 if (!VAR_1)
  return;

 VAR_4 = FUNC_3((unsigned long) VAR_2);

 FUNC_5(&VAR_4->lock, VAR_6);

 VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (!VAR_5) {
  struct debug_obj VAR_7 = { .object = VAR_2,
           .state = VAR_0,
           .descr = VAR_3 };

  FUNC_6(&VAR_4->lock, VAR_6);





  if (VAR_3->is_static_object && VAR_3->is_static_object(VAR_2)) {

   FUNC_1(VAR_2, VAR_3);
  } else {
   FUNC_2(&VAR_7, "assert_init");
   FUNC_0(VAR_3->fixup_assert_init, VAR_2,
        VAR_0);
  }
  return;
 }

 FUNC_6(&VAR_4->lock, VAR_6);
}
