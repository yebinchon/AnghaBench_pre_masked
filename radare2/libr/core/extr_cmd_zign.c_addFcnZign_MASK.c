
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {int zign_spaces; } ;
struct TYPE_25__ {char* name; int addr; } ;
struct TYPE_24__ {TYPE_5__* anal; } ;
struct TYPE_23__ {int name; } ;
typedef TYPE_1__ RSpace ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RAnalFunction ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_5__*,char*,int ) ;
 int FUNC_9 (TYPE_5__*,char*,char*) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 char* FUNC_13 (char*,char*,char*) ;
 char* FUNC_14 (char const*) ;
 char* FUNC_15 (char*,int ) ;
 char* FUNC_16 (char*,int) ;
 char* FUNC_17 (char*,char) ;
 scalar_t__ FUNC_18 (char*,char*) ;

__attribute__((used)) static void FUNC_19(RCore *VAR_0, RAnalFunction *VAR_1, const char *VAR_2) {
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 const RSpace *VAR_6 = FUNC_10 (&VAR_0->anal->zign_spaces);
 int VAR_7 = 0;

 if (VAR_2) {
  VAR_5 = FUNC_14 (VAR_2);
 } else {


  if ((VAR_3 = FUNC_17 (VAR_1->name, ':')) != ((void*)0)) {
   VAR_7 = VAR_3 - VAR_1->name;
   VAR_4 = FUNC_16 (VAR_1->name, VAR_7);
   FUNC_12 (&VAR_0->anal->zign_spaces, VAR_4);
  } else if (VAR_6) {
   VAR_5 = FUNC_15 ("%s:", VAR_6->name);
  }
  VAR_5 = FUNC_13 (VAR_5, "%s", VAR_1->name);
 }

 FUNC_1 (VAR_0, VAR_1, VAR_5);
 FUNC_0 (VAR_0, VAR_1, VAR_5);
 FUNC_6 (VAR_0, VAR_1, VAR_5);
 FUNC_3 (VAR_0, VAR_1, VAR_5);
 FUNC_5 (VAR_0, VAR_1, VAR_5);
 FUNC_4 (VAR_0, VAR_1, VAR_5);
 FUNC_2 (VAR_0, VAR_1, VAR_5);
 if (FUNC_18 (VAR_5, VAR_1->name)) {
  FUNC_9 (VAR_0->anal, VAR_5, VAR_1->name);
 }







 FUNC_8 (VAR_0->anal, VAR_5, VAR_1->addr);

 FUNC_7 (VAR_5);
 if (VAR_4) {
  FUNC_11 (&VAR_0->anal->zign_spaces);
  FUNC_7 (VAR_4);
 }
}
