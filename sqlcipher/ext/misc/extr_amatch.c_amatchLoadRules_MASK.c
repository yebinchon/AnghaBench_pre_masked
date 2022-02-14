
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_8__ {TYPE_2__* pRule; int zCostTab; int zClassName; int zDb; } ;
typedef TYPE_1__ amatch_vtab ;
struct TYPE_9__ {struct TYPE_9__* pNext; } ;
typedef TYPE_2__ amatch_rule ;
typedef int a ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,TYPE_2__**,char**) ;
 void* FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,int ,int ,...) ;
 int FUNC_8 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(
  sqlite3 *VAR_4,
  amatch_vtab *VAR_5,
  char **VAR_6
){
  int VAR_7 = VAR_2;
  char *VAR_8;
  amatch_rule *VAR_9 = 0;

  VAR_8 = FUNC_7("SELECT * FROM %Q.%Q", VAR_5->zDb, VAR_5->zCostTab);
  if( VAR_8==0 ){
    VAR_7 = VAR_1;
  }else{
    int VAR_10;
    sqlite3_stmt *VAR_11 = 0;
    VAR_7 = FUNC_8(VAR_4, VAR_8, -1, &VAR_11, 0);
    if( VAR_7!=VAR_2 ){
      *VAR_6 = FUNC_7("%s: %s", VAR_5->zClassName, FUNC_4(VAR_4));
    }else if( FUNC_3(VAR_11)!=4 ){
      *VAR_6 = FUNC_7("%s: %s has %d columns, expected 4",
          VAR_5->zClassName, VAR_5->zCostTab, FUNC_3(VAR_11)
      );
      VAR_7 = VAR_0;
    }else{
      while( VAR_7==VAR_2 && VAR_3==FUNC_9(VAR_11) ){
        amatch_rule *VAR_12 = 0;
        VAR_7 = FUNC_0(VAR_5, VAR_11, &VAR_12, VAR_6);
        if( VAR_12 ){
          VAR_12->pNext = VAR_9;
          VAR_9 = VAR_12;
        }
      }
    }
    VAR_10 = FUNC_5(VAR_11);
    if( VAR_7==VAR_2 ) VAR_7 = VAR_10;
  }
  FUNC_6(VAR_8);





  if( VAR_7==VAR_2 ){
    unsigned int VAR_13;
    amatch_rule *VAR_14;
    amatch_rule *VAR_15[15];
    for(VAR_13=0; VAR_13<sizeof(VAR_15)/sizeof(VAR_15[0]); VAR_13++) VAR_15[VAR_13] = 0;
    while( (VAR_14 = VAR_9)!=0 ){
      VAR_9 = VAR_14->pNext;
      VAR_14->pNext = 0;
      for(VAR_13=0; VAR_15[VAR_13] && VAR_13<sizeof(VAR_15)/sizeof(VAR_15[0])-1; VAR_13++){
        VAR_14 = FUNC_1(VAR_15[VAR_13], VAR_14);
        VAR_15[VAR_13] = 0;
      }
      VAR_15[VAR_13] = FUNC_1(VAR_15[VAR_13], VAR_14);
    }
    for(VAR_14=VAR_15[0], VAR_13=1; VAR_13<sizeof(VAR_15)/sizeof(VAR_15[0]); VAR_13++){
      VAR_14 = FUNC_1(VAR_15[VAR_13], VAR_14);
    }
    VAR_5->pRule = FUNC_1(VAR_5->pRule, VAR_14);
  }else{



    FUNC_2( VAR_5->pRule==0 );
    VAR_5->pRule = VAR_9;
  }

  return VAR_7;
}
