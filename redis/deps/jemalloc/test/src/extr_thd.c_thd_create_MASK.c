
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thd_t ;


 scalar_t__ FUNC_0 (int *,int *,void* (*) (void*),void*) ;
 int FUNC_1 (char*) ;

void
FUNC_2(thd_t *VAR_0, void *(*VAR_1)(void *), void *VAR_2) {
 if (FUNC_0(VAR_0, ((void*)0), VAR_1, VAR_2) != 0) {
  FUNC_1("Error in pthread_create()\n");
 }
}
