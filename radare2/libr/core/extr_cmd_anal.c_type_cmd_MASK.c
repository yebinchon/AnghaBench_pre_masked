
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_12__ {int esil; } ;
struct TYPE_11__ {int addr; } ;
struct TYPE_10__ {int offset; TYPE_9__* anal; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAnalFunction ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_9__*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_8(RCore *VAR_1, const char *VAR_2) {
 RAnalFunction *VAR_3 = FUNC_2 (VAR_1->anal, VAR_1->offset, -1);
 if (!VAR_3 && *VAR_2 != '?') {
  FUNC_0 ("cant find function here\n");
  return;
 }
 ut64 VAR_4;
 FUNC_4 (((void*)0), ((void*)0));
 switch (*VAR_2) {
 case '\0':
  VAR_4 = VAR_1->offset;
  FUNC_1 (VAR_1->anal->esil, VAR_3? VAR_3->addr: VAR_1->offset);
  FUNC_5 (VAR_1, VAR_3);
  FUNC_7 (VAR_1, VAR_4, 1);
  break;
 case '?':
  FUNC_6 (VAR_1, VAR_0);
  break;
 }
 FUNC_3 ();
}
