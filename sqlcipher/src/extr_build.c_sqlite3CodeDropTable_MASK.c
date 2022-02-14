
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {TYPE_5__* aDb; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_23__ {scalar_t__ pSchema; struct TYPE_23__* pNext; } ;
typedef TYPE_2__ Trigger ;
struct TYPE_24__ {scalar_t__ pSchema; int tabFlags; int zName; } ;
typedef TYPE_3__ Table ;
struct TYPE_26__ {scalar_t__ pSchema; int zDbSName; } ;
struct TYPE_25__ {TYPE_1__* db; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Db ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*) ;
 int * FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,char*,int ,int ,...) ;
 TYPE_2__* FUNC_9 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int,int ,int ,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int) ;

void FUNC_13(Parse *VAR_5, Table *VAR_6, int VAR_7, int VAR_8){
  Vdbe *VAR_9;
  sqlite3 *VAR_10 = VAR_5->db;
  Trigger *VAR_11;
  Db *VAR_12 = &VAR_10->aDb[VAR_7];

  VAR_9 = FUNC_6(VAR_5);
  FUNC_1( VAR_9!=0 );
  FUNC_3(VAR_5, 1, VAR_7);


  if( FUNC_0(VAR_6) ){
    FUNC_10(VAR_9, VAR_2);
  }






  VAR_11 = FUNC_9(VAR_5, VAR_6);
  while( VAR_11 ){
    FUNC_1( VAR_11->pSchema==VAR_6->pSchema ||
        VAR_11->pSchema==VAR_10->aDb[1].pSchema );
    FUNC_5(VAR_5, VAR_11);
    VAR_11 = VAR_11->pNext;
  }







  if( VAR_6->tabFlags & VAR_4 ){
    FUNC_8(VAR_5,
      "DELETE FROM %Q.sqlite_sequence WHERE name=%Q",
      VAR_12->zDbSName, VAR_6->zName
    );
  }
  FUNC_8(VAR_5,
      "DELETE FROM %Q.%s WHERE tbl_name=%Q and type!='trigger'",
      VAR_12->zDbSName, VAR_0, VAR_6->zName);
  if( !VAR_8 && !FUNC_0(VAR_6) ){
    FUNC_2(VAR_5, VAR_6);
  }




  if( FUNC_0(VAR_6) ){
    FUNC_11(VAR_9, VAR_3, VAR_7, 0, 0, VAR_6->zName, 0);
    FUNC_7(VAR_5);
  }
  FUNC_11(VAR_9, VAR_1, VAR_7, 0, 0, VAR_6->zName, 0);
  FUNC_4(VAR_5, VAR_7);
  FUNC_12(VAR_10, VAR_7);
}
