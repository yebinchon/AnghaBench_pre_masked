
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_stmt ;
struct TYPE_9__ {int errMask; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*,int,int ,int *,int **,char const**) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(
  sqlite3 *VAR_4,
  const char *VAR_5,
  int VAR_6,
  u32 VAR_7,
  Vdbe *VAR_8,
  sqlite3_stmt **VAR_9,
  const char **VAR_10
){
  int VAR_11;
  int VAR_12 = 0;




  *VAR_9 = 0;
  if( !FUNC_6(VAR_4)||VAR_5==0 ){
    return VAR_1;
  }
  FUNC_7(VAR_4->mutex);
  FUNC_2(VAR_4);
  do{



    VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_0( VAR_11==VAR_2 || *VAR_9==0 );
  }while( VAR_11==VAR_0
       || (VAR_11==VAR_3 && (FUNC_5(VAR_4,-1), VAR_12++)==0) );
  FUNC_3(VAR_4);
  VAR_11 = FUNC_1(VAR_4, VAR_11);
  FUNC_0( (VAR_11&VAR_4->errMask)==VAR_11 );
  FUNC_8(VAR_4->mutex);
  return VAR_11;
}
