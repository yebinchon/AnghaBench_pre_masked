
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t) ;

void *
FUNC_3(size_t VAR_1, size_t VAR_2) {
 void* VAR_3 = FUNC_1(VAR_1, VAR_2 + (size_t)((VAR_0 + VAR_1 -1) & ~(VAR_1-1)));
 if(!VAR_3) FUNC_2(VAR_2);
 return FUNC_0(VAR_3);
}
