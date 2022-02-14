
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ctxCountForCB {scalar_t__ space; int count; int anal; } ;
struct TYPE_5__ {scalar_t__ space; } ;
typedef TYPE_1__ RSignItem ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 struct ctxCountForCB *VAR_3 = (struct ctxCountForCB *) VAR_0;
 RSignItem *VAR_4 = FUNC_3 ();

 if (FUNC_1 (VAR_3->anal, VAR_4, VAR_1, VAR_2)) {
  if (VAR_4->space == VAR_3->space) {
   VAR_3->count++;
  }
 } else {
  FUNC_0 ("error: cannot deserialize zign\n");
 }
 FUNC_2 (VAR_4);

 return 1;
}
