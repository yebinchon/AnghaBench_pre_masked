
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum debug_obj_state { ____Placeholder_debug_obj_state } debug_obj_state ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(bool (*VAR_1)(void *VAR_2, enum debug_obj_state VAR_3),
     void * VAR_4, enum debug_obj_state VAR_5)
{
 if (VAR_1 && VAR_1(VAR_4, VAR_5)) {
  VAR_0++;
  return 1;
 }
 return 0;
}
