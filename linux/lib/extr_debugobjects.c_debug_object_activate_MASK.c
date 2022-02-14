
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int fixup_activate; scalar_t__ (* is_static_object ) (void*) ;} ;
struct debug_obj {void* object; int state; struct debug_obj_descr* descr; } ;
struct debug_bucket {int lock; } ;
typedef enum debug_obj_state { ____Placeholder_debug_obj_state } debug_obj_state ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (void*,struct debug_obj_descr*) ;
 int VAR_2 ;
 int FUNC_2 (struct debug_obj*,char*) ;
 struct debug_bucket* FUNC_3 (unsigned long) ;
 struct debug_obj* FUNC_4 (void*,struct debug_bucket*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (void*) ;

int FUNC_8(void *VAR_3, struct debug_obj_descr *VAR_4)
{
 enum debug_obj_state VAR_5;
 struct debug_bucket *VAR_6;
 struct debug_obj *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 struct debug_obj VAR_10 = { .object = VAR_3,
          .state = VAR_1,
          .descr = VAR_4 };

 if (!VAR_2)
  return 0;

 VAR_6 = FUNC_3((unsigned long) VAR_3);

 FUNC_5(&VAR_6->lock, VAR_8);

 VAR_7 = FUNC_4(VAR_3, VAR_6);
 if (VAR_7) {
  bool VAR_11 = 0;

  switch (VAR_7->state) {
  case 128:
  case 129:
   VAR_7->state = 131;
   VAR_9 = 0;
   break;

  case 131:
   VAR_5 = VAR_7->state;
   FUNC_6(&VAR_6->lock, VAR_8);
   FUNC_2(VAR_7, "activate");
   VAR_9 = FUNC_0(VAR_4->fixup_activate, VAR_3, VAR_5);
   return VAR_9 ? 0 : -VAR_0;

  case 130:
   VAR_11 = 1;
   VAR_9 = -VAR_0;
   break;
  default:
   VAR_9 = 0;
   break;
  }
  FUNC_6(&VAR_6->lock, VAR_8);
  if (VAR_11)
   FUNC_2(VAR_7, "activate");
  return VAR_9;
 }

 FUNC_6(&VAR_6->lock, VAR_8);
 if (VAR_4->is_static_object && VAR_4->is_static_object(VAR_3)) {

  FUNC_1(VAR_3, VAR_4);
  FUNC_8(VAR_3, VAR_4);
 } else {
  FUNC_2(&VAR_10, "activate");
  VAR_9 = FUNC_0(VAR_4->fixup_activate, VAR_3,
     VAR_1);
  return VAR_9 ? 0 : -VAR_0;
 }
 return 0;
}
