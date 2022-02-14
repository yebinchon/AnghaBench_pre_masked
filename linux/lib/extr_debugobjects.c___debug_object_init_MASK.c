
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int fixup_init; } ;
struct debug_obj {int state; } ;
struct debug_bucket {int lock; } ;
typedef enum debug_obj_state { ____Placeholder_debug_obj_state } debug_obj_state ;







 struct debug_obj* FUNC_0 (void*,struct debug_bucket*,struct debug_obj_descr*) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (void*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (struct debug_obj*,char*) ;
 int FUNC_5 () ;
 struct debug_bucket* FUNC_6 (unsigned long) ;
 struct debug_obj* FUNC_7 (void*,struct debug_bucket*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_10(void *VAR_1, struct debug_obj_descr *VAR_2, int VAR_3)
{
 enum debug_obj_state VAR_4;
 bool VAR_5 = 0;
 struct debug_bucket *VAR_6;
 struct debug_obj *VAR_7;
 unsigned long VAR_8;

 FUNC_5();

 VAR_6 = FUNC_6((unsigned long) VAR_1);

 FUNC_8(&VAR_6->lock, VAR_8);

 VAR_7 = FUNC_7(VAR_1, VAR_6);
 if (!VAR_7) {
  VAR_7 = FUNC_0(VAR_1, VAR_6, VAR_2);
  if (!VAR_7) {
   VAR_0 = 0;
   FUNC_9(&VAR_6->lock, VAR_8);
   FUNC_3();
   return;
  }
  VAR_5 = 1;
 }

 switch (VAR_7->state) {
 case 128:
 case 129:
 case 130:
  VAR_7->state = 129;
  break;

 case 132:
  VAR_4 = VAR_7->state;
  FUNC_9(&VAR_6->lock, VAR_8);
  FUNC_4(VAR_7, "init");
  FUNC_1(VAR_2->fixup_init, VAR_1, VAR_4);
  return;

 case 131:
  FUNC_9(&VAR_6->lock, VAR_8);
  FUNC_4(VAR_7, "init");
  return;
 default:
  break;
 }

 FUNC_9(&VAR_6->lock, VAR_8);
 if (VAR_5)
  FUNC_2(VAR_1, VAR_3);
}
