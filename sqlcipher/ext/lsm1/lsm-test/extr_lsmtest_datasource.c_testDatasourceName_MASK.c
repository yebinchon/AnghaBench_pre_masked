
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ eType; int nMaxVal; int nMinVal; int nMaxKey; int nMinKey; } ;
typedef TYPE_1__ DatasourceDefn ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,char*,int ,int ,int ,int ) ;

char *FUNC_1(const DatasourceDefn *VAR_1){
  char *VAR_2;
  VAR_2 = FUNC_0("%s.(%d-%d).(%d-%d)",
      (VAR_1->eType==VAR_0 ? "seq" : "rnd"),
      VAR_1->nMinKey, VAR_1->nMaxKey,
      VAR_1->nMinVal, VAR_1->nMaxVal
  );
  return VAR_2;
}
