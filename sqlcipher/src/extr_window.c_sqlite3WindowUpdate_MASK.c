
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct WindowUpdate TYPE_16__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int sqlite3 ;
struct TYPE_18__ {scalar_t__ eFrmType; int eStart; int eEnd; TYPE_3__* pFunc; void* pStart; scalar_t__ eExclude; void* pEnd; scalar_t__ pFilter; TYPE_14__* pOrderBy; TYPE_14__* pPartition; scalar_t__ zName; } ;
typedef TYPE_1__ Window ;
struct TYPE_20__ {int funcFlags; char const* zName; } ;
struct TYPE_19__ {int * db; } ;
struct WindowUpdate {char const* zFunc; int eFrmType; int eStart; int eEnd; } ;
struct TYPE_17__ {int nExpr; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ FuncDef ;


 int FUNC_0 (TYPE_16__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 void* FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,void*) ;
 void* FUNC_4 (int *,void*,int ) ;
 void* FUNC_5 (int *,TYPE_14__*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,TYPE_1__*,scalar_t__) ;

void FUNC_8(
  Parse *VAR_16,
  Window *VAR_17,
  Window *VAR_18,
  FuncDef *VAR_19
){
  if( VAR_18->zName && VAR_18->eFrmType==0 ){
    Window *VAR_20 = FUNC_7(VAR_16, VAR_17, VAR_18->zName);
    if( VAR_20==0 ) return;
    VAR_18->pPartition = FUNC_5(VAR_16->db, VAR_20->pPartition, 0);
    VAR_18->pOrderBy = FUNC_5(VAR_16->db, VAR_20->pOrderBy, 0);
    VAR_18->pStart = FUNC_4(VAR_16->db, VAR_20->pStart, 0);
    VAR_18->pEnd = FUNC_4(VAR_16->db, VAR_20->pEnd, 0);
    VAR_18->eStart = VAR_20->eStart;
    VAR_18->eEnd = VAR_20->eEnd;
    VAR_18->eFrmType = VAR_20->eFrmType;
    VAR_18->eExclude = VAR_20->eExclude;
  }else{
    FUNC_6(VAR_16, VAR_18, VAR_17);
  }
  if( (VAR_18->eFrmType==VAR_5)
   && (VAR_18->pStart || VAR_18->pEnd)
   && (VAR_18->pOrderBy==0 || VAR_18->pOrderBy->nExpr!=1)
  ){
    FUNC_1(VAR_16,
      "RANGE with offset PRECEDING/FOLLOWING requires one ORDER BY expression"
    );
  }else
  if( VAR_19->funcFlags & VAR_0 ){
    sqlite3 *VAR_21 = VAR_16->db;
    if( VAR_18->pFilter ){
      FUNC_1(VAR_16,
          "FILTER clause may only be used with aggregate window functions"
      );
    }else{
      struct WindowUpdate {
        const char *zFunc;
        int eFrmType;
        int eStart;
        int eEnd;
      } VAR_22[] = {
        { VAR_15, VAR_6, VAR_7, VAR_1 },
        { VAR_9, VAR_5, VAR_7, VAR_1 },
        { VAR_14, VAR_5, VAR_7, VAR_1 },
        { VAR_13, VAR_3, VAR_1, VAR_7 },
        { VAR_8, VAR_3, VAR_2, VAR_7 },
        { VAR_12, VAR_6, VAR_1, VAR_7 },
        { VAR_11, VAR_6, VAR_7, VAR_7 },
        { VAR_10, VAR_6, VAR_7, VAR_1 },
      };
      int VAR_23;
      for(VAR_23=0; VAR_23<FUNC_0(VAR_22); VAR_23++){
        if( VAR_19->zName==VAR_22[VAR_23].zFunc ){
          FUNC_3(VAR_21, VAR_18->pStart);
          FUNC_3(VAR_21, VAR_18->pEnd);
          VAR_18->pEnd = VAR_18->pStart = 0;
          VAR_18->eFrmType = VAR_22[VAR_23].eFrmType;
          VAR_18->eStart = VAR_22[VAR_23].eStart;
          VAR_18->eEnd = VAR_22[VAR_23].eEnd;
          VAR_18->eExclude = 0;
          if( VAR_18->eStart==VAR_2 ){
            VAR_18->pStart = FUNC_2(VAR_21, VAR_4, "1");
          }
          break;
        }
      }
    }
  }
  VAR_18->pFunc = VAR_19;
}
