
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (size_t) ;
 int VAR_0 ;

void* FUNC_5(uint64_t VAR_1, size_t VAR_2) {
  void* VAR_3;
  FUNC_2(&VAR_0);
  if (!FUNC_1(VAR_1, VAR_2)) return ((void*)0);
  FUNC_3(VAR_1 * VAR_2 > 0);
  VAR_3 = FUNC_4((size_t)(VAR_1 * VAR_2));
  FUNC_0(VAR_3, (size_t)(VAR_1 * VAR_2));
  return VAR_3;
}
