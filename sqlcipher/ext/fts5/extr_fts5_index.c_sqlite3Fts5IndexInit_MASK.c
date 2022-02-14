
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int ,void*,int ,int ,int ) ;

int FUNC_1(sqlite3 *VAR_4){
  int VAR_5 = FUNC_0(
      VAR_4, "fts5_decode", 2, VAR_1, 0, VAR_2, 0, 0
  );

  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_0(
        VAR_4, "fts5_decode_none", 2,
        VAR_1, (void*)VAR_4, VAR_2, 0, 0
    );
  }

  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_0(
        VAR_4, "fts5_rowid", -1, VAR_1, 0, VAR_3, 0, 0
    );
  }
  return VAR_5;
}
