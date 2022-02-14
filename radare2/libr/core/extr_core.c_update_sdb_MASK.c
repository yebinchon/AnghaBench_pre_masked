
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {int refs; } ;
struct TYPE_17__ {TYPE_8__* kv; } ;
struct TYPE_16__ {TYPE_4__* dbg; TYPE_3__* assembler; TYPE_10__* bin; TYPE_1__* anal; } ;
struct TYPE_15__ {TYPE_8__* sgnls; } ;
struct TYPE_14__ {TYPE_2__* syscall; } ;
struct TYPE_13__ {TYPE_8__* db; } ;
struct TYPE_12__ {TYPE_8__* sdb; } ;
struct TYPE_11__ {TYPE_8__* sdb; } ;
typedef int Sdb ;
typedef TYPE_5__ RCore ;
typedef TYPE_6__ RBinObject ;


 int * VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_10__*) ;
 int * FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,TYPE_8__*) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_1) {
 Sdb *VAR_2;
 RBinObject *VAR_3;
 if (!VAR_1) {
  return;
 }

 if (VAR_1->anal && VAR_1->anal->sdb) {
  FUNC_2 (VAR_0, "anal", VAR_1->anal->sdb);
 }

 if (VAR_1->bin && VAR_1->bin->sdb) {
  FUNC_2 (VAR_0, "bin", VAR_1->bin->sdb);
 }

 VAR_3 = FUNC_0 (VAR_1->bin);
 if (VAR_3) {
  FUNC_2 (FUNC_1 (VAR_0, "bin", 1), "info", VAR_3->kv);
 }



 if (VAR_1->assembler && VAR_1->assembler->syscall && VAR_1->assembler->syscall->db) {
  VAR_1->assembler->syscall->db->refs++;
  FUNC_2 (VAR_0, "syscall", VAR_1->assembler->syscall->db);
 }
 VAR_2 = FUNC_1 (VAR_0, "debug", 1);
 if (VAR_1->dbg->sgnls) {
  VAR_1->dbg->sgnls->refs++;
  FUNC_2 (VAR_2, "signals", VAR_1->dbg->sgnls);
 }
}
