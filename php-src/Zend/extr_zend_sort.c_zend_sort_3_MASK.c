
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* swap_func_t ) (void*,void*) ;
typedef scalar_t__ (* compare_func_t ) (void*,void*) ;



__attribute__((used)) static inline void FUNC_0(void *VAR_0, void *VAR_1, void *VAR_2, compare_func_t VAR_3, swap_func_t VAR_4) {
 if (!(VAR_3(VAR_0, VAR_1) > 0)) {
  if (!(VAR_3(VAR_1, VAR_2) > 0)) {
   return;
  }
  VAR_4(VAR_1, VAR_2);
  if (VAR_3(VAR_0, VAR_1) > 0) {
   VAR_4(VAR_0, VAR_1);
  }
  return;
 }
 if (!(VAR_3(VAR_2, VAR_1) > 0)) {
  VAR_4(VAR_0, VAR_2);
  return;
 }
 VAR_4(VAR_0, VAR_1);
 if (VAR_3(VAR_1, VAR_2) > 0) {
  VAR_4(VAR_1, VAR_2);
 }
}
