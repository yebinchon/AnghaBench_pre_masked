
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_10__ {int nBasis; int n; TYPE_2__* pRule; } ;
typedef TYPE_3__ fuzzer_stem ;
struct TYPE_9__ {char* zFrom; scalar_t__ nTo; scalar_t__ nFrom; scalar_t__ rCost; int pNext; } ;
struct TYPE_11__ {int rLimit; int iRowid; TYPE_2__ nullRule; TYPE_3__* pStem; TYPE_1__* pVtab; void* iRuleset; } ;
typedef TYPE_4__ fuzzer_cursor ;
typedef void* fuzzer_cost ;
struct TYPE_8__ {int pRule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,char const*,void*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vtab_cursor *VAR_3,
  int VAR_4, const char *VAR_5,
  int VAR_6, sqlite3_value **VAR_7
){
  fuzzer_cursor *VAR_8 = (fuzzer_cursor *)VAR_3;
  const char *VAR_9 = "";
  fuzzer_stem *VAR_10;
  int VAR_11;

  FUNC_1(VAR_8, 1);
  VAR_8->rLimit = 2147483647;
  VAR_11 = 0;
  if( VAR_4 & 1 ){
    VAR_9 = (const char*)FUNC_4(VAR_7[0]);
    VAR_11++;
  }
  if( VAR_4 & 2 ){
    VAR_8->rLimit = (fuzzer_cost)FUNC_3(VAR_7[VAR_11]);
    VAR_11++;
  }
  if( VAR_4 & 4 ){
    VAR_8->iRuleset = (fuzzer_cost)FUNC_3(VAR_7[VAR_11]);
    VAR_11++;
  }
  VAR_8->nullRule.pNext = VAR_8->pVtab->pRule;
  VAR_8->nullRule.rCost = 0;
  VAR_8->nullRule.nFrom = 0;
  VAR_8->nullRule.nTo = 0;
  VAR_8->nullRule.zFrom = "";
  VAR_8->iRowid = 1;
  FUNC_0( VAR_8->pStem==0 );



  if( (int)FUNC_5(VAR_9)<VAR_0 ){
    VAR_8->pStem = VAR_10 = FUNC_2(VAR_8, VAR_9, (fuzzer_cost)0);
    if( VAR_10==0 ) return VAR_1;
    VAR_10->pRule = &VAR_8->nullRule;
    VAR_10->n = VAR_10->nBasis;
  }else{
    VAR_8->rLimit = 0;
  }

  return VAR_2;
}
