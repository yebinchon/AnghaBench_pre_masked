
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_9__ {int mutex; int mallocFailed; int pErr; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {int doingRerun; int pc; scalar_t__ expired; int rc; int zErrMsg; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

int FUNC_11(sqlite3_stmt *VAR_5){
  int VAR_6 = VAR_3;
  int VAR_7 = VAR_3;
  Vdbe *VAR_8 = (Vdbe*)VAR_5;
  int VAR_9 = 0;
  sqlite3 *VAR_10;

  if( FUNC_10(VAR_8) ){
    return VAR_1;
  }
  VAR_10 = VAR_8->db;
  FUNC_6(VAR_10->mutex);
  VAR_8->doingRerun = 0;
  while( (VAR_6 = FUNC_5(VAR_8))==VAR_4
         && VAR_9++ < VAR_0 ){
    int VAR_11 = VAR_8->pc;
    VAR_7 = VAR_6 = FUNC_4(VAR_8);
    if( VAR_6!=VAR_3) break;
    FUNC_8(VAR_5);
    if( VAR_11>=0 ) VAR_8->doingRerun = 1;
    FUNC_0( VAR_8->expired==0 );
  }
  if( VAR_7!=VAR_3 ){
    const char *VAR_12 = (const char *)FUNC_9(VAR_10->pErr);
    FUNC_2(VAR_10, VAR_8->zErrMsg);
    if( !VAR_10->mallocFailed ){
      VAR_8->zErrMsg = FUNC_3(VAR_10, VAR_12);
      VAR_8->rc = VAR_7;
    } else {
      VAR_8->zErrMsg = 0;
      VAR_8->rc = VAR_6 = VAR_2;
    }
  }
  VAR_6 = FUNC_1(VAR_10, VAR_6);
  FUNC_7(VAR_10->mutex);
  return VAR_6;
}
