
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*,size_t,int ,int*) ;

void *
FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3, bool *VAR_4,
    bool *VAR_5) {
 void *VAR_6 = FUNC_2(VAR_1, VAR_2, FUNC_0(VAR_3,
     VAR_0), VAR_5);
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_1(VAR_6 != ((void*)0));
 if (*VAR_5) {
  *VAR_4 = 1;
 }
 return VAR_6;
}
