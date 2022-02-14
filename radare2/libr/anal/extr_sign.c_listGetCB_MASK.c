
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctxGetListCB {int list; int anal; } ;
typedef int RSignItem ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,char const*,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 struct ctxGetListCB *VAR_3 = VAR_0;
 RSignItem *VAR_4 = FUNC_3 ();
 if (!VAR_4) {
  return 0;
 }
 if (!FUNC_1 (VAR_3->anal, VAR_4, VAR_1, VAR_2)) {
  FUNC_2 (VAR_4);
  return 0;
 }
 FUNC_0 (VAR_3->list, VAR_4);

 return 1;
}
