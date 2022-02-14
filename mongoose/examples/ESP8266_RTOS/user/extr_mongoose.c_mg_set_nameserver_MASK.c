
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int * nameserver; } ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*) ;

void FUNC_2(struct mg_mgr *VAR_0, const char *VAR_1) {
  FUNC_0((char *) VAR_0->nameserver);
  VAR_0->nameserver = ((void*)0);
  if (VAR_1 != ((void*)0)) {
    VAR_0->nameserver = FUNC_1(VAR_1);
  }
}
