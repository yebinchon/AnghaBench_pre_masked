
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,int *,void* (*) (void*),void*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(pthread_t *VAR_1, void *(*VAR_2) (void *), void *VAR_3) {
 if (FUNC_2(VAR_1,((void*)0), VAR_2, VAR_3)) {
  FUNC_1(VAR_0, "Create thread failed");
  FUNC_0(1);
 }
}
