
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; int * p; } ;


 int FUNC_0 (char*) ;

void FUNC_1(struct mg_str *VAR_0) {
  char *VAR_1 = (char *) VAR_0->p;
  VAR_0->p = ((void*)0);
  VAR_0->len = 0;
  if (VAR_1 != ((void*)0)) FUNC_0(VAR_1);
}
