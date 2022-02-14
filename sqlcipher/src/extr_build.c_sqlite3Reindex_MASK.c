
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_26__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_27__ {scalar_t__ z; } ;
typedef TYPE_3__ Token ;
typedef int Table ;
struct TYPE_28__ {TYPE_2__* db; } ;
struct TYPE_25__ {char* zDbSName; } ;
typedef TYPE_4__ Parse ;
typedef int Index ;
typedef int CollSeq ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 int * FUNC_8 (TYPE_2__*,int ,char*,int ) ;
 int * FUNC_9 (TYPE_2__*,char*,char const*) ;
 int * FUNC_10 (TYPE_2__*,char*,char const*) ;
 char* FUNC_11 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int *,int) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_3__**) ;

void FUNC_15(Parse *VAR_1, Token *VAR_2, Token *VAR_3){
  CollSeq *VAR_4;
  char *VAR_5;
  const char *VAR_6;
  Table *VAR_7;
  Index *VAR_8;
  int VAR_9;
  sqlite3 *VAR_10 = VAR_1->db;
  Token *VAR_11;



  if( VAR_0!=FUNC_12(VAR_1) ){
    return;
  }

  if( VAR_2==0 ){
    FUNC_3(VAR_1, 0);
    return;
  }else if( FUNC_1(VAR_3==0) || VAR_3->z==0 ){
    char *VAR_12;
    FUNC_2( VAR_2->z );
    VAR_12 = FUNC_11(VAR_1->db, VAR_2);
    if( !VAR_12 ) return;
    VAR_4 = FUNC_8(VAR_10, FUNC_0(VAR_10), VAR_12, 0);
    if( VAR_4 ){
      FUNC_3(VAR_1, VAR_12);
      FUNC_6(VAR_10, VAR_12);
      return;
    }
    FUNC_6(VAR_10, VAR_12);
  }
  VAR_9 = FUNC_14(VAR_1, VAR_2, VAR_3, &VAR_11);
  if( VAR_9<0 ) return;
  VAR_5 = FUNC_11(VAR_10, VAR_11);
  if( VAR_5==0 ) return;
  VAR_6 = VAR_10->aDb[VAR_9].zDbSName;
  VAR_7 = FUNC_10(VAR_10, VAR_5, VAR_6);
  if( VAR_7 ){
    FUNC_4(VAR_1, VAR_7, 0);
    FUNC_6(VAR_10, VAR_5);
    return;
  }
  VAR_8 = FUNC_9(VAR_10, VAR_5, VAR_6);
  FUNC_6(VAR_10, VAR_5);
  if( VAR_8 ){
    FUNC_5(VAR_1, 0, VAR_9);
    FUNC_13(VAR_1, VAR_8, -1);
    return;
  }
  FUNC_7(VAR_1, "unable to identify the object to be reindexed");
}
