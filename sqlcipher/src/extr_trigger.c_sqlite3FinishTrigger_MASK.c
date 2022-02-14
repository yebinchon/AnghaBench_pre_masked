
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_12__ ;


struct TYPE_36__ {scalar_t__ busy; } ;
struct TYPE_39__ {TYPE_3__* aDb; TYPE_1__ init; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_40__ {struct TYPE_40__* pNext; TYPE_6__* pTrig; } ;
typedef TYPE_5__ TriggerStep ;
struct TYPE_41__ {char* zName; struct TYPE_41__* pNext; int table; TYPE_12__* pTabSchema; TYPE_12__* pSchema; int pWhen; TYPE_5__* step_list; } ;
typedef TYPE_6__ Trigger ;
struct TYPE_42__ {int n; scalar_t__ z; } ;
typedef TYPE_7__ Token ;
struct TYPE_43__ {TYPE_6__* pTrigger; } ;
typedef TYPE_8__ Table ;
struct TYPE_44__ {TYPE_6__* pNewTrigger; TYPE_4__* db; int nErr; } ;
struct TYPE_38__ {TYPE_2__* pSchema; int zDbSName; } ;
struct TYPE_37__ {int trigHash; } ;
struct TYPE_35__ {int tblHash; } ;
typedef TYPE_9__ Parse ;
typedef int Hash ;
typedef int DbFixer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_9__*,int ,int) ;
 int FUNC_3 (TYPE_9__*,int) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 char* FUNC_5 (TYPE_4__*,char*,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,TYPE_9__*,int,char*,TYPE_7__*) ;
 scalar_t__ FUNC_10 (int *,TYPE_5__*) ;
 int * FUNC_11 (TYPE_9__*) ;
 TYPE_8__* FUNC_12 (int *,int ) ;
 TYPE_6__* FUNC_13 (int *,char*,TYPE_6__*) ;
 int FUNC_14 (TYPE_4__*,char*,char*) ;
 int FUNC_15 (TYPE_9__*,char*,int ,int ,char*,int ,char*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int,int ) ;
 int FUNC_18 (TYPE_4__*,TYPE_12__*) ;
 int FUNC_19 (TYPE_7__*,char*) ;
 int FUNC_20 (int *,int,int ) ;
 int FUNC_21 (int) ;

void FUNC_22(
  Parse *VAR_2,
  TriggerStep *VAR_3,
  Token *VAR_4
){
  Trigger *VAR_5 = VAR_2->pNewTrigger;
  char *VAR_6;
  sqlite3 *VAR_7 = VAR_2->db;
  DbFixer VAR_8;
  int VAR_9;
  Token VAR_10;

  VAR_2->pNewTrigger = 0;
  if( FUNC_0(VAR_2->nErr) || !VAR_5 ) goto triggerfinish_cleanup;
  VAR_6 = VAR_5->zName;
  VAR_9 = FUNC_18(VAR_2->db, VAR_5->pSchema);
  VAR_5->step_list = VAR_3;
  while( VAR_3 ){
    VAR_3->pTrig = VAR_5;
    VAR_3 = VAR_3->pNext;
  }
  FUNC_19(&VAR_10, VAR_5->zName);
  FUNC_9(&VAR_8, VAR_2, VAR_9, "trigger", &VAR_10);
  if( FUNC_10(&VAR_8, VAR_5->step_list)
   || FUNC_8(&VAR_8, VAR_5->pWhen)
  ){
    goto triggerfinish_cleanup;
  }


  if( VAR_0 ){
    FUNC_1( !VAR_7->init.busy );
    VAR_2->pNewTrigger = VAR_5;
    VAR_5 = 0;
  }else





  if( !VAR_7->init.busy ){
    Vdbe *VAR_11;
    char *VAR_12;


    VAR_11 = FUNC_11(VAR_2);
    if( VAR_11==0 ) goto triggerfinish_cleanup;
    FUNC_2(VAR_2, 0, VAR_9);
    VAR_12 = FUNC_5(VAR_7, (char*)VAR_4->z, VAR_4->n);
    FUNC_21( VAR_12==0 );
    FUNC_15(VAR_2,
       "INSERT INTO %Q.%s VALUES('trigger',%Q,%Q,0,'CREATE TRIGGER %q')",
       VAR_7->aDb[VAR_9].zDbSName, VAR_1, VAR_6,
       VAR_5->table, VAR_12);
    FUNC_4(VAR_7, VAR_12);
    FUNC_3(VAR_2, VAR_9);
    FUNC_20(VAR_11, VAR_9,
        FUNC_14(VAR_7, "type='trigger' AND name='%q'", VAR_6));
  }

  if( VAR_7->init.busy ){
    Trigger *VAR_13 = VAR_5;
    Hash *VAR_14 = &VAR_7->aDb[VAR_9].pSchema->trigHash;
    FUNC_1( FUNC_17(VAR_7, VAR_9, 0) );
    VAR_5 = FUNC_13(VAR_14, VAR_6, VAR_5);
    if( VAR_5 ){
      FUNC_16(VAR_7);
    }else if( VAR_13->pSchema==VAR_13->pTabSchema ){
      Table *VAR_15;
      VAR_15 = FUNC_12(&VAR_13->pTabSchema->tblHash, VAR_13->table);
      FUNC_1( VAR_15!=0 );
      VAR_13->pNext = VAR_15->pTrigger;
      VAR_15->pTrigger = VAR_13;
    }
  }

triggerfinish_cleanup:
  FUNC_6(VAR_7, VAR_5);
  FUNC_1( VAR_0 || !VAR_2->pNewTrigger );
  FUNC_7(VAR_7, VAR_3);
}
