
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_4__ {int iCol; void* szPg; scalar_t__ zErr; void* iRoot; } ;
typedef TYPE_1__ GState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,...) ;
 int FUNC_8 (char const*,int **) ;
 int FUNC_9 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char const*,char const*,scalar_t__) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(
  GState *VAR_1,
  const char *VAR_2,
  const char *VAR_3,
  const char *VAR_4
){
  sqlite3 *VAR_5 = 0;
  sqlite3_stmt *VAR_6 = 0;
  char *VAR_7 = 0;
  int VAR_8;
  if( VAR_1->zErr ) return;
  VAR_8 = FUNC_8(VAR_2, &VAR_5);
  if( VAR_8 ){
    FUNC_0(VAR_1, "cannot open database file \"%s\"", VAR_2);
    goto rootAndColumn_exit;
  }
  VAR_7 = FUNC_7("SELECT rootpage FROM sqlite_master WHERE name=%Q",
                         VAR_3);
  VAR_8 = FUNC_9(VAR_5, VAR_7, -1, &VAR_6, 0);
  if( VAR_8 ) FUNC_0(VAR_1, "%s: [%s]", FUNC_4(VAR_5), VAR_7);
  FUNC_6(VAR_7);
  if( VAR_1->zErr ) goto rootAndColumn_exit;
  if( FUNC_10(VAR_6)!=VAR_0 ){
    FUNC_0(VAR_1, "cannot find table [%s]\n", VAR_3);
    FUNC_5(VAR_6);
    goto rootAndColumn_exit;
  }
  VAR_1->iRoot = FUNC_2(VAR_6 , 0);
  FUNC_5(VAR_6);

  VAR_1->iCol = -1;
  VAR_7 = FUNC_7("PRAGMA table_info(%Q)", VAR_3);
  VAR_8 = FUNC_9(VAR_5, VAR_7, -1, &VAR_6, 0);
  if( VAR_8 ) FUNC_0(VAR_1, "%s: [%s}", FUNC_4(VAR_5), VAR_7);
  FUNC_6(VAR_7);
  if( VAR_1->zErr ) goto rootAndColumn_exit;
  while( FUNC_10(VAR_6)==VAR_0 ){
    const char *VAR_9 = FUNC_3(VAR_6, 1);
    if( FUNC_12(VAR_9)==FUNC_12(VAR_4)
     && FUNC_11(VAR_9, VAR_4, FUNC_12(VAR_9))==0
    ){
      VAR_1->iCol = FUNC_2(VAR_6, 0);
      break;
    }
  }
  FUNC_5(VAR_6);
  if( VAR_1->iCol<0 ){
    FUNC_0(VAR_1, "no such column: %s.%s", VAR_3, VAR_4);
    goto rootAndColumn_exit;
  }

  VAR_7 = FUNC_7("PRAGMA page_size");
  VAR_8 = FUNC_9(VAR_5, VAR_7, -1, &VAR_6, 0);
  if( VAR_8 ) FUNC_0(VAR_1, "%s: [%s]", FUNC_4(VAR_5), VAR_7);
  FUNC_6(VAR_7);
  if( VAR_1->zErr ) goto rootAndColumn_exit;
  if( FUNC_10(VAR_6)!=VAR_0 ){
    FUNC_0(VAR_1, "cannot find page size");
  }else{
    VAR_1->szPg = FUNC_2(VAR_6, 0);
  }
  FUNC_5(VAR_6);

rootAndColumn_exit:
  FUNC_1(VAR_5);
  return;
}
