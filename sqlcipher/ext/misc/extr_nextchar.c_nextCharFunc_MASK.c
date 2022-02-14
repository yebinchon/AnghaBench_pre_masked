
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {int nUsed; char* aResult; int pStmt; scalar_t__ mallocFailed; int db; void* zPrefix; int nPrefix; } ;
typedef TYPE_1__ nextCharContext ;
typedef int c ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 unsigned char* FUNC_6 (int) ;
 char* FUNC_7 (char*,unsigned char const*,...) ;
 int FUNC_8 (int ,char*,int,int *,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char const*,int,int (*) (char*)) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (unsigned char*,char) ;

__attribute__((used)) static void FUNC_15(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  nextCharContext VAR_3;
  const unsigned char *VAR_4 = FUNC_13(VAR_2[1]);
  const unsigned char *VAR_5 = FUNC_13(VAR_2[2]);
  const unsigned char *VAR_6;
  const unsigned char *VAR_7;
  char *VAR_8 = 0;
  char *VAR_9 = 0;
  char *VAR_10;
  int VAR_11;

  FUNC_1(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.db = FUNC_2(VAR_0);
  VAR_3.zPrefix = FUNC_13(VAR_2[0]);
  VAR_3.nPrefix = FUNC_12(VAR_2[0]);
  if( VAR_4==0 || VAR_5==0 || VAR_3.zPrefix==0 ) return;
  if( VAR_1>=4
   && (VAR_6 = FUNC_13(VAR_2[3]))!=0
   && VAR_6[0]!=0
  ){
    VAR_8 = FUNC_7("AND (%s)", VAR_6);
    if( VAR_8==0 ){
      FUNC_10(VAR_0);
      return;
    }
  }else{
    VAR_8 = "";
  }
  if( VAR_1>=5
   && (VAR_7 = FUNC_13(VAR_2[4]))!=0
   && VAR_7[0]!=0
  ){
    VAR_9 = FUNC_7("collate \"%w\"", VAR_7);
    if( VAR_9==0 ){
      FUNC_10(VAR_0);
      if( VAR_8[0] ) FUNC_5(VAR_8);
      return;
    }
  }else{
    VAR_9 = "";
  }
  VAR_10 = FUNC_7(
    "SELECT %s FROM %s"
    " WHERE %s>=(?1 || ?2) %s"
    "   AND %s<=(?1 || char(1114111)) %s"
    "   %s"
    " ORDER BY 1 %s ASC LIMIT 1",
    VAR_5, VAR_4, VAR_5, VAR_9, VAR_5, VAR_9, VAR_8, VAR_9
  );
  if( VAR_8[0] ) FUNC_5(VAR_8);
  if( VAR_9[0] ) FUNC_5(VAR_9);
  if( VAR_10==0 ){
    FUNC_10(VAR_0);
    return;
  }

  VAR_11 = FUNC_8(VAR_3.db, VAR_10, -1, &VAR_3.pStmt, 0);
  FUNC_5(VAR_10);
  if( VAR_11 ){
    FUNC_9(VAR_0, FUNC_3(VAR_3.db), -1);
    return;
  }
  FUNC_0(&VAR_3);
  if( VAR_3.mallocFailed ){
    FUNC_10(VAR_0);
  }else{
    unsigned char *VAR_12;
    VAR_12 = FUNC_6( VAR_3.nUsed*4 + 1 );
    if( VAR_12==0 ){
      FUNC_10(VAR_0);
    }else{
      int VAR_13;
      int VAR_14 = 0;
      for(VAR_13=0; VAR_13<VAR_3.nUsed; VAR_13++){
        VAR_14 += FUNC_14(VAR_12+VAR_14, VAR_3.aResult[VAR_13]);
      }
      VAR_12[VAR_14] = 0;
      FUNC_11(VAR_0, (const char*)VAR_12, VAR_14, FUNC_5);
    }
  }
  FUNC_4(VAR_3.pStmt);
  FUNC_5(VAR_3.aResult);
}
