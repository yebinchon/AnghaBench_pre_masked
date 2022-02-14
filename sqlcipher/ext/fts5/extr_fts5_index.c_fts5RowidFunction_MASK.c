
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const char *VAR_3;
  if( VAR_1==0 ){
    FUNC_1(VAR_0, "should be: fts5_rowid(subject, ....)", -1);
  }else{
    VAR_3 = (const char*)FUNC_5(VAR_2[0]);
    if( 0==FUNC_3(VAR_3, "segment") ){
      i64 VAR_4;
      int VAR_5, VAR_6;
      if( VAR_1!=3 ){
        FUNC_1(VAR_0,
            "should be: fts5_rowid('segment', segid, pgno))", -1
        );
      }else{
        VAR_5 = FUNC_4(VAR_2[1]);
        VAR_6 = FUNC_4(VAR_2[2]);
        VAR_4 = FUNC_0(VAR_5, VAR_6);
        FUNC_2(VAR_0, VAR_4);
      }
    }else{
      FUNC_1(VAR_0,
        "first arg to fts5_rowid() must be 'segment'" , -1
      );
    }
  }
}
