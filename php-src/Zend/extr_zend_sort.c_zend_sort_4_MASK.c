
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* swap_func_t ) (void*,void*) ;
typedef scalar_t__ (* compare_func_t ) (void*,void*) ;


 int FUNC_0 (void*,void*,void*,scalar_t__ (*) (void*,void*),int (*) (void*,void*)) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1, void *VAR_2, void *VAR_3, compare_func_t VAR_4, swap_func_t VAR_5) {
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
 if (VAR_4(VAR_2, VAR_3) > 0) {
  VAR_5(VAR_2, VAR_3);
  if (VAR_4(VAR_1, VAR_2) > 0) {
   VAR_5(VAR_1, VAR_2);
   if (VAR_4(VAR_0, VAR_1) > 0) {
    VAR_5(VAR_0, VAR_1);
   }
  }
 }
}
