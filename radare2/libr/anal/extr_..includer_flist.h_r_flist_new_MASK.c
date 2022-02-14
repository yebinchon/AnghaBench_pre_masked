
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 void** FUNC_1 (void**,int) ;

__attribute__((used)) static inline void **FUNC_2(int VAR_0) {
 void **VAR_1;
 if (((VAR_0 + 2) * sizeof(void*)) < sizeof(void*)) return ((void*)0);
 if (!(VAR_1 = (void **)FUNC_0 ((VAR_0 + 2), sizeof (void*)))) {
  return ((void*)0);
 }
 return FUNC_1 (VAR_1, VAR_0);
}
