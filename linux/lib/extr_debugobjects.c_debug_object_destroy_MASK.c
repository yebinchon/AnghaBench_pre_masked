
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int fixup_destroy; } ;
struct debug_obj {int state; } ;
struct debug_bucket {int lock; } ;
typedef enum debug_obj_state { ____Placeholder_debug_obj_state } debug_obj_state ;







 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct debug_obj*,char*) ;
 struct debug_bucket* FUNC_2 (unsigned long) ;
 struct debug_obj* FUNC_3 (void*,struct debug_bucket*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(void *VAR_1, struct debug_obj_descr *VAR_2)
{
 enum debug_obj_state VAR_3;
 struct debug_bucket *VAR_4;
 struct debug_obj *VAR_5;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 if (!VAR_0)
  return;

 VAR_4 = FUNC_2((unsigned long) VAR_1);

 FUNC_4(&VAR_4->lock, VAR_6);

 VAR_5 = FUNC_3(VAR_1, VAR_4);
 if (!VAR_5)
  goto out_unlock;

 switch (VAR_5->state) {
 case 128:
 case 129:
 case 130:
  VAR_5->state = 131;
  break;
 case 132:
  VAR_3 = VAR_5->state;
  FUNC_5(&VAR_4->lock, VAR_6);
  FUNC_1(VAR_5, "destroy");
  FUNC_0(VAR_2->fixup_destroy, VAR_1, VAR_3);
  return;

 case 131:
  VAR_7 = 1;
  break;
 default:
  break;
 }
out_unlock:
 FUNC_5(&VAR_4->lock, VAR_6);
 if (VAR_7)
  FUNC_1(VAR_5, "destroy");
}
