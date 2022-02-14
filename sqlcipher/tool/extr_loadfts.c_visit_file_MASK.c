
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nRowPerTrans; int db; int pInsert; } ;
typedef TYPE_1__ VisitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char const*,int,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

void FUNC_6(void *VAR_2, const char *VAR_3){
  int VAR_4;
  VisitContext *VAR_5 = (VisitContext*)VAR_2;

  FUNC_0(VAR_5->pInsert, 1, VAR_3, -1, VAR_1);
  FUNC_4(VAR_5->pInsert);
  VAR_4 = FUNC_3(VAR_5->pInsert);
  if( VAR_4!=VAR_0 ){
    FUNC_5("insert", VAR_5->db);
  }else if( VAR_5->nRowPerTrans>0
         && (FUNC_2(VAR_5->db) % VAR_5->nRowPerTrans)==0
  ){
    FUNC_1(VAR_5->db, "COMMIT ; BEGIN", 0, 0, 0);
  }
}
