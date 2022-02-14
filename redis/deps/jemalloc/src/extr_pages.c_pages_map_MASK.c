
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,size_t) ;
 scalar_t__ FUNC_1 (void*,size_t) ;
 size_t VAR_0 ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 void* FUNC_4 (void*,size_t,int ,int*) ;
 int FUNC_5 (void*,size_t) ;
 void* FUNC_6 (size_t,size_t,int*) ;

void *
FUNC_7(void *VAR_2, size_t VAR_3, size_t VAR_4, bool *VAR_5) {
 FUNC_3(VAR_4 >= VAR_0);
 FUNC_3(FUNC_0(VAR_2, VAR_4) == VAR_2);
 void *VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_1, VAR_5);
 if (VAR_6 == ((void*)0) || VAR_6 == VAR_2) {
  return VAR_6;
 }
 FUNC_3(VAR_2 == ((void*)0));
 if (FUNC_1(VAR_6, VAR_4) != 0) {
  FUNC_5(VAR_6, VAR_3);
  return FUNC_6(VAR_3, VAR_4, VAR_5);
 }

 FUNC_3(FUNC_2(VAR_6) == VAR_6);
 return VAR_6;
}
