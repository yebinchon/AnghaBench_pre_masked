
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_value ;
typedef int Vdbe ;
struct TYPE_4__ {int nCol; TYPE_2__* aCol; int zName; int pSelect; } ;
typedef TYPE_1__ Table ;
struct TYPE_5__ {scalar_t__ affinity; int pDflt; int zName; } ;
typedef TYPE_2__ Column ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int **) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(Vdbe *VAR_3, Table *VAR_4, int VAR_5, int VAR_6){
  FUNC_2( VAR_4!=0 );
  if( !VAR_4->pSelect ){
    sqlite3_value *VAR_7 = 0;
    u8 VAR_8 = FUNC_0(FUNC_6(VAR_3));
    Column *VAR_9 = &VAR_4->aCol[VAR_5];
    FUNC_1((VAR_3, "%s.%s", VAR_4->zName, VAR_9->zName));
    FUNC_2( VAR_5<VAR_4->nCol );
    FUNC_3(FUNC_6(VAR_3), VAR_9->pDflt, VAR_8,
                         VAR_9->affinity, &VAR_7);
    if( VAR_7 ){
      FUNC_5(VAR_3, VAR_7, VAR_1);
    }
  }

  if( VAR_4->aCol[VAR_5].affinity==VAR_2 ){
    FUNC_4(VAR_3, VAR_0, VAR_6);
  }

}
