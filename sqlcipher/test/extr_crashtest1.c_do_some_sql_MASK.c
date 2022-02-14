
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*,int ,int ,char**,int ,int ,char*) ;
 int * FUNC_7 (char*,int ,char**) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(int VAR_3){
  char *VAR_4;
  int VAR_5 = VAR_2;
  sqlite *VAR_6;
  int VAR_7 = 0;
  static char VAR_8[] =
    "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

  if( FUNC_0("./test.db-journal",0)==0 ){
                                                                                    FUNC_11("test.db-saved");
    FUNC_10("cp test.db test.db-saved");
    FUNC_11("test.db-journal-saved");
    FUNC_10("cp test.db-journal test.db-journal-saved");
  }
  VAR_6 = FUNC_7("./test.db", 0, &VAR_4);
  if( VAR_6==0 ){
    FUNC_4("ERROR: %s\n", VAR_4);
    if( FUNC_9(VAR_4,"database disk image is malformed")==0 ){
      FUNC_3(VAR_3, VAR_0);
    }
    FUNC_1(1);
  }
  FUNC_8(FUNC_2());
  while( VAR_5==VAR_2 ){
    VAR_7++;
    VAR_5 = FUNC_6(VAR_6,
       "INSERT INTO t1 VALUES(%d,'%d%s')", 0, 0, &VAR_4,
       FUNC_5(), FUNC_5(), VAR_8);
  }
  if( VAR_5!=VAR_2 ){
    FUNC_4("ERROR #%d: %s\n", VAR_5, VAR_4);
    if( VAR_5==VAR_1 ){
      FUNC_3(VAR_3, VAR_0);
    }
  }
  FUNC_4("pid %d: cnt=%d\n", FUNC_2(), VAR_7);
}
