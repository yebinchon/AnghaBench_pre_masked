
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_3__ {int depth; int szPage; int hasRowid; int nPage; int nEntry; } ;
typedef TYPE_1__ BinfoCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(sqlite3 *VAR_5, int VAR_6, BinfoCursor *VAR_7){
  sqlite3_int64 VAR_8 = 1;
  int VAR_9 = 1;
  unsigned char *VAR_10;
  sqlite3_stmt *VAR_11 = 0;
  int VAR_12 = VAR_3;
  int VAR_13 = 0;
  int VAR_14;
  int VAR_15;

  VAR_12 = FUNC_6(VAR_5,
           "SELECT data FROM sqlite_dbpage('main') WHERE pgno=?1", -1,
           &VAR_11, 0);
  if( VAR_12 ) return VAR_12;
  VAR_7->depth = 1;
  while(1){
    FUNC_2(VAR_11, 1, VAR_6);
    VAR_12 = FUNC_8(VAR_11);
    if( VAR_12!=VAR_4 ){
      VAR_12 = VAR_1;
      break;
    }
    VAR_7->szPage = VAR_13 = FUNC_4(VAR_11, 0);
    VAR_10 = (unsigned char*)FUNC_3(VAR_11, 0);
    if( VAR_10==0 ){
      VAR_12 = VAR_2;
      break;
    }
    if( VAR_6==1 ){
      VAR_10 += 100;
      VAR_13 -= 100;
    }
    VAR_7->hasRowid = VAR_10[0]!=2 && VAR_10[0]!=10;
    VAR_14 = FUNC_0(VAR_10+3);
    VAR_8 *= (VAR_14+1);
    if( VAR_10[0]==10 || VAR_10[0]==13 ) break;
    VAR_9 *= (VAR_14+1);
    if( VAR_14<=1 ){
      VAR_6 = FUNC_1(VAR_10+8);
    }else{
      VAR_15 = FUNC_0(VAR_10+12+2*(VAR_14/2));
      if( VAR_6==1 ) VAR_15 -= 100;
      if( VAR_15<=12 || VAR_15>=VAR_13-4 ){
        VAR_12 = VAR_0;
        break;
      }
      VAR_6 = FUNC_1(VAR_10+VAR_15);
    }
    VAR_7->depth++;
    FUNC_7(VAR_11);
  }
  FUNC_5(VAR_11);
  VAR_7->nPage = VAR_9;
  VAR_7->nEntry = VAR_8;
  if( VAR_12==VAR_4 ) VAR_12 = VAR_3;
  return VAR_12;
}
