
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* pDfltColl; } ;
typedef TYPE_2__ sqlite3 ;
typedef size_t i16 ;
struct TYPE_17__ {size_t iPKey; TYPE_6__* aCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_20__ {char* zColl; int affinity; } ;
struct TYPE_19__ {int iTable; int affinity; } ;
struct TYPE_18__ {TYPE_2__* db; } ;
struct TYPE_15__ {char* zName; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Expr ;
typedef TYPE_6__ Column ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_2__*,int ,int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,TYPE_5__*,char const*) ;

__attribute__((used)) static Expr *FUNC_2(
  Parse *VAR_2,
  Table *VAR_3,
  int VAR_4,
  i16 VAR_5
){
  Expr *VAR_6;
  Column *VAR_7;
  const char *VAR_8;
  sqlite3 *VAR_9 = VAR_2->db;

  VAR_6 = FUNC_0(VAR_9, VAR_1, 0);
  if( VAR_6 ){
    if( VAR_5>=0 && VAR_5!=VAR_3->iPKey ){
      VAR_7 = &VAR_3->aCol[VAR_5];
      VAR_6->iTable = VAR_4 + VAR_5 + 1;
      VAR_6->affinity = VAR_7->affinity;
      VAR_8 = VAR_7->zColl;
      if( VAR_8==0 ) VAR_8 = VAR_9->pDfltColl->zName;
      VAR_6 = FUNC_1(VAR_2, VAR_6, VAR_8);
    }else{
      VAR_6->iTable = VAR_4;
      VAR_6->affinity = VAR_0;
    }
  }
  return VAR_6;
}
