
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 (size_t) ;
 void* FUNC_4 (size_t) ;

void *
FUNC_5(void *VAR_1, size_t VAR_2) {
 if (VAR_1 == ((void*)0)) return FUNC_4(VAR_2);

 void* VAR_3 = FUNC_0(VAR_1);
 void *VAR_4 = FUNC_2(VAR_3, VAR_2+VAR_0);
 if(!VAR_4) FUNC_3(VAR_2);
 return FUNC_1(VAR_4);
}
