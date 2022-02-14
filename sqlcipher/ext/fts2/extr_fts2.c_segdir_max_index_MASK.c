
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_6, int VAR_7, int *VAR_8){
  sqlite3_stmt *VAR_9;
  int VAR_10 = FUNC_0(VAR_6, VAR_0, &VAR_9);
  if( VAR_10!=VAR_4 ) return VAR_10;

  VAR_10 = FUNC_1(VAR_9, 1, VAR_7);
  if( VAR_10!=VAR_4 ) return VAR_10;

  VAR_10 = FUNC_4(VAR_9);

  if( VAR_10==VAR_1 ) return VAR_1;
  if( VAR_10!=VAR_5 ) return VAR_10;


  if( VAR_3==FUNC_3(VAR_9, 0) ){
    VAR_10 = FUNC_4(VAR_9);
    if( VAR_10==VAR_5 ) return VAR_2;
    return VAR_10;
  }

  *VAR_8 = FUNC_2(VAR_9, 0);



  VAR_10 = FUNC_4(VAR_9);
  if( VAR_10==VAR_5 ) return VAR_2;
  if( VAR_10!=VAR_1 ) return VAR_10;
  return VAR_5;
}
