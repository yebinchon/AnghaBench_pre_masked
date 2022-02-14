
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int interp; } ;
typedef TYPE_1__ tclvar_vtab ;
struct sqlite3_index_constraint_usage {int argvIndex; int omit; } ;
struct sqlite3_index_constraint {scalar_t__ op; int iColumn; scalar_t__ usable; } ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nConstraint; char* idxStr; int needToFreeIdxStr; struct sqlite3_index_constraint_usage* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_12, sqlite3_index_info *VAR_13){
  tclvar_vtab *VAR_14 = (tclvar_vtab*)VAR_12;
  int VAR_15;
  char *VAR_16 = FUNC_0(32);
  int VAR_17 = 0;

  if( VAR_16==0 ) return VAR_5;
  VAR_16[0] = '\0';

  for(VAR_15=0; VAR_15<VAR_13->nConstraint; VAR_15++){
    struct sqlite3_index_constraint const *VAR_18 = &VAR_13->aConstraint[VAR_15];
    struct sqlite3_index_constraint_usage *VAR_19;

    VAR_19 = &VAR_13->aConstraintUsage[VAR_15];
    if( VAR_18->usable ){

      if( VAR_18->op==VAR_0 && VAR_18->iColumn==0 ){
        if( 0==FUNC_1(VAR_16, VAR_7) ){
          VAR_19->argvIndex = ++VAR_17;
          VAR_19->omit = 0;
        }
      }


      if( VAR_18->op==VAR_3 && VAR_18->iColumn==0 ){
        if( 0==FUNC_1(VAR_16, VAR_8) ){
          VAR_19->argvIndex = ++VAR_17;
          VAR_19->omit = 1;
        }
      }


      if( VAR_18->op==VAR_1 && VAR_18->iColumn==2 ){
        if( 0==FUNC_1(VAR_16, VAR_9) ){
          VAR_19->argvIndex = ++VAR_17;
          VAR_19->omit = FUNC_2(VAR_14->interp);
        }
      }


      if( VAR_18->op==VAR_4 && VAR_18->iColumn==2 ){
        if( 0==FUNC_1(VAR_16, VAR_11) ){
          VAR_19->argvIndex = ++VAR_17;
          VAR_19->omit = FUNC_2(VAR_14->interp);
        }
      }


      if( VAR_18->op==VAR_2 && VAR_18->iColumn==2 ){
        if( 0==FUNC_1(VAR_16, VAR_10) ){
          VAR_19->argvIndex = ++VAR_17;
          VAR_19->omit = FUNC_2(VAR_14->interp);
        }
      }
    }
  }
  VAR_13->idxStr = VAR_16;
  VAR_13->needToFreeIdxStr = 1;

  return VAR_6;
}
