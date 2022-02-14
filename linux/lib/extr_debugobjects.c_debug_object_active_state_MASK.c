
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int dummy; } ;
struct debug_obj {int state; unsigned int astate; void* object; struct debug_obj_descr* descr; } ;
struct debug_bucket {int lock; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct debug_obj*,char*) ;
 struct debug_bucket* FUNC_1 (unsigned long) ;
 struct debug_obj* FUNC_2 (void*,struct debug_bucket*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(void *VAR_2, struct debug_obj_descr *VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 struct debug_bucket *VAR_6;
 struct debug_obj *VAR_7;
 unsigned long VAR_8;
 bool VAR_9 = 0;

 if (!VAR_1)
  return;

 VAR_6 = FUNC_1((unsigned long) VAR_2);

 FUNC_3(&VAR_6->lock, VAR_8);

 VAR_7 = FUNC_2(VAR_2, VAR_6);
 if (VAR_7) {
  switch (VAR_7->state) {
  case 128:
   if (VAR_7->astate == VAR_4)
    VAR_7->astate = VAR_5;
   else
    VAR_9 = 1;
   break;

  default:
   VAR_9 = 1;
   break;
  }
 }

 FUNC_4(&VAR_6->lock, VAR_8);
 if (!VAR_7) {
  struct debug_obj VAR_10 = { .object = VAR_2,
           .state = VAR_0,
           .descr = VAR_3 };

  FUNC_0(&VAR_10, "active_state");
 } else if (VAR_9) {
  FUNC_0(VAR_7, "active_state");
 }
}
