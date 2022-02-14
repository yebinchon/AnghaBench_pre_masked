
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ctxUnsetForCB {TYPE_2__* anal; int * space; } ;
struct TYPE_9__ {int * sdb_zigns; } ;
struct TYPE_8__ {int * space; } ;
typedef int Sdb ;
typedef TYPE_1__ RSignItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *,char*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,char*,char*) ;

__attribute__((used)) static int FUNC_7(void *VAR_2, const char *VAR_3, const char *VAR_4) {
 struct ctxUnsetForCB *VAR_5 = (struct ctxUnsetForCB *) VAR_2;
 char VAR_6[VAR_0], VAR_7[VAR_1];
 RSignItem *VAR_8 = FUNC_3 ();
 Sdb *VAR_9 = VAR_5->anal->sdb_zigns;

 if (FUNC_1 (VAR_5->anal, VAR_8, VAR_3, VAR_4)) {
  if (VAR_8->space && VAR_8->space == VAR_5->space) {
   VAR_8->space = ((void*)0);
   FUNC_6 (VAR_5->anal, VAR_8, VAR_6, VAR_7);
   FUNC_4 (VAR_9, VAR_3, 0);
   FUNC_5 (VAR_9, VAR_6, VAR_7, 0);
  }
 } else {
  FUNC_0 ("error: cannot deserialize zign\n");
 }
 FUNC_2 (VAR_8);

 return 1;
}
