
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_8__ {TYPE_2__* pRule; int zClassName; } ;
typedef TYPE_1__ fuzzer_vtab ;
struct TYPE_9__ {struct TYPE_9__* pNext; } ;
typedef TYPE_2__ fuzzer_rule ;
typedef int a ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_2__**,char**) ;
 void* FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char const*,char const*,...) ;
 int FUNC_8 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(
  sqlite3 *VAR_4,
  fuzzer_vtab *VAR_5,
  const char *VAR_6,
  const char *VAR_7,
  char **VAR_8
){
  int VAR_9 = VAR_2;
  char *VAR_10;
  fuzzer_rule *VAR_11 = 0;

  VAR_10 = FUNC_7("SELECT * FROM %Q.%Q", VAR_6, VAR_7);
  if( VAR_10==0 ){
    VAR_9 = VAR_1;
  }else{
    int VAR_12;
    sqlite3_stmt *VAR_13 = 0;
    VAR_9 = FUNC_8(VAR_4, VAR_10, -1, &VAR_13, 0);
    if( VAR_9!=VAR_2 ){
      *VAR_8 = FUNC_7("%s: %s", VAR_5->zClassName, FUNC_4(VAR_4));
    }else if( FUNC_3(VAR_13)!=4 ){
      *VAR_8 = FUNC_7("%s: %s has %d columns, expected 4",
          VAR_5->zClassName, VAR_7, FUNC_3(VAR_13)
      );
      VAR_9 = VAR_0;
    }else{
      while( VAR_9==VAR_2 && VAR_3==FUNC_9(VAR_13) ){
        fuzzer_rule *VAR_14 = 0;
        VAR_9 = FUNC_1(VAR_5, VAR_13, &VAR_14, VAR_8);
        if( VAR_14 ){
          VAR_14->pNext = VAR_11;
          VAR_11 = VAR_14;
        }
      }
    }
    VAR_12 = FUNC_5(VAR_13);
    if( VAR_9==VAR_2 ) VAR_9 = VAR_12;
  }
  FUNC_6(VAR_10);





  if( VAR_9==VAR_2 ){
    unsigned int VAR_15;
    fuzzer_rule *VAR_16;
    fuzzer_rule *VAR_17[15];
    for(VAR_15=0; VAR_15<sizeof(VAR_17)/sizeof(VAR_17[0]); VAR_15++) VAR_17[VAR_15] = 0;
    while( (VAR_16 = VAR_11)!=0 ){
      VAR_11 = VAR_16->pNext;
      VAR_16->pNext = 0;
      for(VAR_15=0; VAR_17[VAR_15] && VAR_15<sizeof(VAR_17)/sizeof(VAR_17[0])-1; VAR_15++){
        VAR_16 = FUNC_2(VAR_17[VAR_15], VAR_16);
        VAR_17[VAR_15] = 0;
      }
      VAR_17[VAR_15] = FUNC_2(VAR_17[VAR_15], VAR_16);
    }
    for(VAR_16=VAR_17[0], VAR_15=1; VAR_15<sizeof(VAR_17)/sizeof(VAR_17[0]); VAR_15++){
      VAR_16 = FUNC_2(VAR_17[VAR_15], VAR_16);
    }
    VAR_5->pRule = FUNC_2(VAR_5->pRule, VAR_16);
  }else{



    FUNC_0( VAR_5->pRule==0 );
    VAR_5->pRule = VAR_11;
  }

  return VAR_9;
}
