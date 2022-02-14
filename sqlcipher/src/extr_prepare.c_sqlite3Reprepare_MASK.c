
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_stmt ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,int,int ,int *,int **,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (int *) ;

int FUNC_11(Vdbe *VAR_2){
  int VAR_3;
  sqlite3_stmt *VAR_4;
  const char *VAR_5;
  sqlite3 *VAR_6;
  u8 VAR_7;

  FUNC_0( FUNC_9(FUNC_4(VAR_2)->mutex) );
  VAR_5 = FUNC_10((sqlite3_stmt *)VAR_2);
  FUNC_0( VAR_5!=0 );
  VAR_6 = FUNC_4(VAR_2);
  FUNC_0( FUNC_9(VAR_6->mutex) );
  VAR_7 = FUNC_6(VAR_2);
  VAR_3 = FUNC_1(VAR_6, VAR_5, -1, VAR_7, VAR_2, &VAR_4, 0);
  if( VAR_3 ){
    if( VAR_3==VAR_0 ){
      FUNC_2(VAR_6);
    }
    FUNC_0( VAR_4==0 );
    return VAR_3;
  }else{
    FUNC_0( VAR_4!=0 );
  }
  FUNC_8((Vdbe*)VAR_4, VAR_2);
  FUNC_3(VAR_4, (sqlite3_stmt*)VAR_2);
  FUNC_7((Vdbe*)VAR_4);
  FUNC_5((Vdbe*)VAR_4);
  return VAR_1;
}
