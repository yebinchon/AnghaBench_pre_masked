
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_14__ {TYPE_6__* pIdx; } ;
struct TYPE_15__ {int nEq; int wsFlags; TYPE_1__ u; } ;
typedef TYPE_2__ WherePlan ;
struct TYPE_16__ {TYPE_2__ plan; } ;
typedef TYPE_3__ WhereLevel ;
struct TYPE_17__ {TYPE_7__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_20__ {char* zName; } ;
struct TYPE_19__ {int* aiColumn; int nColumn; } ;
struct TYPE_18__ {int * db; } ;
typedef TYPE_5__ StrAccum ;
typedef TYPE_6__ Index ;
typedef TYPE_7__ Column ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int,char*,char*) ;
 int FUNC_1 (TYPE_5__*,char*,int) ;
 char* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_4(sqlite3 *VAR_3, WhereLevel *VAR_4, Table *VAR_5){
  WherePlan *VAR_6 = &VAR_4->plan;
  Index *VAR_7 = VAR_6->u.pIdx;
  int VAR_8 = VAR_6->nEq;
  int VAR_9, VAR_10;
  Column *VAR_11 = VAR_5->aCol;
  int *VAR_12 = VAR_7->aiColumn;
  StrAccum VAR_13;

  if( VAR_8==0 && (VAR_6->wsFlags & (VAR_1|VAR_2))==0 ){
    return 0;
  }
  FUNC_3(&VAR_13, 0, 0, VAR_0);
  VAR_13.db = VAR_3;
  FUNC_1(&VAR_13, " (", 2);
  for(VAR_9=0; VAR_9<VAR_8; VAR_9++){
    FUNC_0(&VAR_13, VAR_9, VAR_11[VAR_12[VAR_9]].zName, "=");
  }

  VAR_10 = VAR_9;
  if( VAR_6->wsFlags&VAR_1 ){
    char *VAR_14 = (VAR_10==VAR_7->nColumn ) ? "rowid" : VAR_11[VAR_12[VAR_10]].zName;
    FUNC_0(&VAR_13, VAR_9++, VAR_14, ">");
  }
  if( VAR_6->wsFlags&VAR_2 ){
    char *VAR_15 = (VAR_10==VAR_7->nColumn ) ? "rowid" : VAR_11[VAR_12[VAR_10]].zName;
    FUNC_0(&VAR_13, VAR_9, VAR_15, "<");
  }
  FUNC_1(&VAR_13, ")", 1);
  return FUNC_2(&VAR_13);
}
