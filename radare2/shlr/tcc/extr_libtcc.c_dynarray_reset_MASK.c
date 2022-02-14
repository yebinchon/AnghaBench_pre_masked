
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;

void FUNC_1(void *VAR_0, int *VAR_1)
{
 void **VAR_2;
 for (VAR_2 = *(void ***) VAR_0; *VAR_1; ++VAR_2, --*VAR_1) {
  if (*VAR_2) {
   FUNC_0 (*VAR_2);
  }
 }
 FUNC_0 (*(void **) VAR_0);
 *(void **) VAR_0 = ((void*)0);
}
