
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* zName; TYPE_1__* aCol; } ;
typedef TYPE_2__ Table ;
struct TYPE_14__ {int * aLimit; } ;
struct TYPE_13__ {int nKeyCol; size_t* aiColumn; int zName; scalar_t__ aColExpr; TYPE_2__* pTable; } ;
struct TYPE_12__ {TYPE_7__* db; } ;
struct TYPE_10__ {char* zName; } ;
typedef int StrAccum ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Index ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int,char*,int ,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_7__*,int ,int ,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ) ;

void FUNC_8(
  Parse *VAR_5,
  int VAR_6,
  Index *VAR_7
){
  char *VAR_8;
  int VAR_9;
  StrAccum VAR_10;
  Table *VAR_11 = VAR_7->pTable;

  FUNC_4(&VAR_10, VAR_5->db, 0, 0,
                      VAR_5->db->aLimit[VAR_4]);
  if( VAR_7->aColExpr ){
    FUNC_7(&VAR_10, "index '%q'", VAR_7->zName);
  }else{
    for(VAR_9=0; VAR_9<VAR_7->nKeyCol; VAR_9++){
      char *VAR_12;
      FUNC_1( VAR_7->aiColumn[VAR_9]>=0 );
      VAR_12 = VAR_11->aCol[VAR_7->aiColumn[VAR_9]].zName;
      if( VAR_9 ) FUNC_5(&VAR_10, ", ", 2);
      FUNC_6(&VAR_10, VAR_11->zName);
      FUNC_5(&VAR_10, ".", 1);
      FUNC_6(&VAR_10, VAR_12);
    }
  }
  VAR_8 = FUNC_3(&VAR_10);
  FUNC_2(VAR_5,
    FUNC_0(VAR_7) ? VAR_2
                            : VAR_3,
    VAR_6, VAR_8, VAR_0, VAR_1);
}
