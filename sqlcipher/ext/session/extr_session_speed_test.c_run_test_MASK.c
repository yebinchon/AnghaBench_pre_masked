
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_session ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,char const*,int,int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,void*,int ,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int*,void**) ;
 int FUNC_11 (int *,char*,int **) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_13(
  sqlite3 *VAR_2,
  sqlite3 *VAR_3,
  int VAR_4,
  const char *VAR_5
){
  sqlite3_session *VAR_6 = 0;
  sqlite3_stmt *VAR_7 = 0;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  void *VAR_11;


  VAR_8 = FUNC_11(VAR_2, "main", &VAR_6);
  if( VAR_8!=VAR_0 ) FUNC_0(VAR_8);


  VAR_8 = FUNC_9(VAR_6, 0);
  if( VAR_8!=VAR_0 ) FUNC_0(VAR_8);


  VAR_8 = FUNC_5(VAR_2, VAR_5, -1, &VAR_7, 0);
  if( VAR_8!=VAR_0 ) FUNC_0(VAR_8);


  FUNC_1(VAR_2, "BEGIN");


  for(VAR_9=0; VAR_9<VAR_4; VAR_9++){
    FUNC_2(VAR_7, 1, VAR_9);
    FUNC_7(VAR_7);
    VAR_8 = FUNC_6(VAR_7);
    if( VAR_8!=VAR_0 ) FUNC_0(VAR_8);
  }
  FUNC_3(VAR_7);


  VAR_8 = FUNC_10(VAR_6, &VAR_10, &VAR_11);
  if( VAR_8!=VAR_0 ) FUNC_0(VAR_8);
  FUNC_1(VAR_2, "COMMIT");


  VAR_8 = FUNC_8(VAR_3, VAR_10, VAR_11, 0, VAR_1, 0);
  if( VAR_8!=VAR_0 ) FUNC_0(VAR_8);


  FUNC_4(VAR_11);
  FUNC_12(VAR_6);
}
