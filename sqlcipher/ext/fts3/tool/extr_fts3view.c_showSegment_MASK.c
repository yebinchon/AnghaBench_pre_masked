
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (unsigned char const*,int) ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int * FUNC_2 (int *,char const*,char*) ;
 int FUNC_3 (unsigned char const*,int) ;
 int FUNC_4 (char*,char*,int) ;
 unsigned char* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sqlite3 *VAR_2, const char *VAR_3){
  const unsigned char *VAR_4;
  int VAR_5;
  sqlite3_stmt *VAR_6;

  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_1[0]);
  if( FUNC_8(VAR_6)!=VAR_0 ){
    FUNC_7(VAR_6);
    return;
  }
  VAR_5 = FUNC_6(VAR_6, 0);
  VAR_4 = FUNC_5(VAR_6, 0);
  FUNC_4("Segment %s of size %d bytes:\n", VAR_1[0], VAR_5);
  if( FUNC_1("raw", 0, 0)!=0 ){
    FUNC_3(VAR_4, VAR_5);
  }else{
    FUNC_0(VAR_4, VAR_5);
  }
  FUNC_7(VAR_6);
}
