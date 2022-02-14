
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eStage; scalar_t__ rc; scalar_t__ zErrmsg; scalar_t__ dbRbu; scalar_t__ dbMain; int objiter; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef char* LPWSTR ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (scalar_t__) ;
 char* FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char const*) ;

__attribute__((used)) static void FUNC_14(sqlite3rbu *VAR_5){
  const char *VAR_6 = FUNC_11(VAR_5->dbMain, "main");
  const char *VAR_7 = VAR_6;
  char *VAR_8;
  char *VAR_9;

  if( FUNC_3(VAR_5) ){
    VAR_7 = FUNC_11(VAR_5->dbRbu, "main");
  }
  VAR_8 = FUNC_13("%s-oal", VAR_7);
  VAR_9 = FUNC_13("%s-wal", VAR_7);

  FUNC_1( VAR_5->eStage==VAR_0 );
  FUNC_1( VAR_5->rc==VAR_4 && VAR_5->zErrmsg==0 );
  if( VAR_9==0 || VAR_8==0 ){
    VAR_5->rc = VAR_3;
  }else{







    FUNC_4(VAR_5);
    if( VAR_5->rc==VAR_4 ){
      FUNC_2(VAR_6, VAR_9);
      FUNC_2(VAR_6, VAR_8);


      FUNC_5(&VAR_5->objiter);
      FUNC_10(VAR_5->dbRbu);
      FUNC_10(VAR_5->dbMain);
      VAR_5->dbMain = 0;
      VAR_5->dbRbu = 0;
      VAR_5->rc = FUNC_9(VAR_8, VAR_9) ? VAR_1 : VAR_4;


      if( VAR_5->rc==VAR_4 ){
        FUNC_6(VAR_5, 0);
        FUNC_7(VAR_5, 0);
      }
    }
  }

  FUNC_12(VAR_9);
  FUNC_12(VAR_8);
}
