
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char** VAR_1 ;
 int FUNC_2 (unsigned char const*,int) ;
 scalar_t__ FUNC_3 (char*,int ,int ) ;
 int * FUNC_4 (int *,char const*,char*) ;
 int FUNC_5 (unsigned char const*,int) ;
 int FUNC_6 (char*,char*,int,int) ;
 unsigned char* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(sqlite3 *VAR_2, const char *VAR_3){
  const unsigned char *VAR_4;
  sqlite3_int64 VAR_5;
  int VAR_6;
  sqlite3_stmt *VAR_7;

  VAR_5 = FUNC_1(VAR_1[1]);
  VAR_6 = FUNC_0(VAR_1[2]);
  VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_1[0]);
  if( FUNC_9(VAR_7)!=VAR_0 ){
    FUNC_8(VAR_7);
    return;
  }
  VAR_4 = FUNC_7(VAR_7, 0);
  FUNC_6("Doclist at %s offset %lld of size %d bytes:\n",
         VAR_1[0], VAR_5, VAR_6);
  if( FUNC_3("raw", 0, 0)!=0 ){
    FUNC_5(VAR_4+VAR_5, VAR_6);
  }else{
    FUNC_2(VAR_4+VAR_5, VAR_6);
  }
  FUNC_8(VAR_7);
}
