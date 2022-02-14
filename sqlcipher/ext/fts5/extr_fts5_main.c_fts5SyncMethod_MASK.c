
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_8__ {int zErrMsg; } ;
struct TYPE_9__ {TYPE_1__* pConfig; TYPE_2__ base; } ;
struct TYPE_10__ {TYPE_3__ p; int pStorage; } ;
struct TYPE_7__ {int * pzErrmsg; } ;
typedef TYPE_4__ Fts5FullTable ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_1){
  int VAR_2;
  Fts5FullTable *VAR_3 = (Fts5FullTable*)VAR_1;
  FUNC_0(VAR_3, VAR_0, 0);
  VAR_3->p.pConfig->pzErrmsg = &VAR_3->p.base.zErrMsg;
  FUNC_1(VAR_3);
  VAR_2 = FUNC_2(VAR_3->pStorage);
  VAR_3->p.pConfig->pzErrmsg = 0;
  return VAR_2;
}
