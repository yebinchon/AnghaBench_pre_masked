
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int aArr ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*,int *) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  int VAR_3;
  u8 VAR_4[32];
  if( VAR_1!=1 ){
    FUNC_3(VAR_0,
        "wrong number of arguments to function fts5_isalnum", -1
    );
    return;
  }
  FUNC_0(VAR_4, 0, sizeof(VAR_4));
  FUNC_1("L*", VAR_4);
  FUNC_1("N*", VAR_4);
  FUNC_1("Co", VAR_4);
  VAR_3 = FUNC_5(VAR_2[0]);
  FUNC_4(VAR_0, VAR_4[FUNC_2((u32)VAR_3)]);
}
