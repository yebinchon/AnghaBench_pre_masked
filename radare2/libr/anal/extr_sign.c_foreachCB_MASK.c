
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ctxForeachCB {int user; int (* cb ) (TYPE_1__*,int ) ;TYPE_2__* anal; } ;
struct TYPE_9__ {int zign_spaces; } ;
struct TYPE_8__ {int * space; } ;
typedef int RSpace ;
typedef TYPE_1__ RSignItem ;
typedef TYPE_2__ RAnal ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 struct ctxForeachCB *VAR_3 = (struct ctxForeachCB *) VAR_0;
 RSignItem *VAR_4 = FUNC_3 ();
 RAnal *VAR_5 = VAR_3->anal;
 int VAR_6 = 1;

 if (FUNC_1 (VAR_5, VAR_4, VAR_1, VAR_2)) {
  RSpace *VAR_7 = FUNC_4 (&VAR_5->zign_spaces);
  if (VAR_3->cb && VAR_7 == VAR_4->space) {
   VAR_3->cb (VAR_4, VAR_3->user);
  }
 } else {
  FUNC_0 ("error: cannot deserialize zign\n");
 }
 FUNC_2 (VAR_4);
 return VAR_6;
}
