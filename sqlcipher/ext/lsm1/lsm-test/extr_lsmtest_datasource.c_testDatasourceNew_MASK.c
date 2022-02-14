
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eType; int nMinKey; int nMinVal; int nMaxKey; int nMaxVal; char* aKey; char* aVal; } ;
struct TYPE_5__ {scalar_t__ eType; int nMaxVal; int nMinVal; int nMaxKey; int nMinKey; } ;
typedef TYPE_1__ DatasourceDefn ;
typedef TYPE_2__ Datasource ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

Datasource *FUNC_2(const DatasourceDefn *VAR_1){
  Datasource *VAR_2;
  int VAR_3;
  int VAR_4;
  int VAR_5;
  int VAR_6;

  if( VAR_1->eType==VAR_0 ){
    VAR_3 = 128;
    VAR_4 = 128;
  }else{
    VAR_3 = FUNC_0(0, VAR_1->nMinKey);
    VAR_4 = FUNC_0(VAR_3, VAR_1->nMaxKey);
  }
  VAR_5 = FUNC_0(0, VAR_1->nMinVal);
  VAR_6 = FUNC_0(VAR_5, VAR_1->nMaxVal);

  VAR_2 = (Datasource *)FUNC_1(sizeof(Datasource) + VAR_4 + VAR_6 + 1);
  VAR_2->eType = VAR_1->eType;
  VAR_2->nMinKey = VAR_3;
  VAR_2->nMinVal = VAR_5;
  VAR_2->nMaxKey = VAR_4;
  VAR_2->nMaxVal = VAR_6;

  VAR_2->aKey = (char *)&VAR_2[1];
  VAR_2->aVal = &VAR_2->aKey[VAR_4];
  return VAR_2;
}
