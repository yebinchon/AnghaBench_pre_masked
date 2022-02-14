
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int malloc_zone_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 size_t FUNC_2 (int ,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(malloc_zone_t *VAR_0, void *VAR_1, size_t VAR_2) {
 size_t VAR_3;

 VAR_3 = FUNC_2(FUNC_4(), VAR_1);
 if (VAR_3 != 0) {
  FUNC_0(VAR_3 == VAR_2);
  FUNC_3(VAR_1);
  return;
 }

 FUNC_1(VAR_1);
}
