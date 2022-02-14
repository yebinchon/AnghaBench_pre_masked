
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int flags; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_15__ {scalar_t__ pSelect; TYPE_4__* pFKey; } ;
typedef TYPE_2__ Table ;
struct TYPE_17__ {scalar_t__ isDeferred; struct TYPE_17__* pNextFrom; } ;
struct TYPE_16__ {int disableTriggers; TYPE_1__* db; } ;
typedef int SrcList ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ FKey ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;

void FUNC_13(Parse *VAR_7, SrcList *VAR_8, Table *VAR_9){
  sqlite3 *VAR_10 = VAR_7->db;
  if( (VAR_10->flags&VAR_6) && !FUNC_0(VAR_9) ){
    int VAR_11 = 0;
    Vdbe *VAR_12 = FUNC_5(VAR_7);

    FUNC_2( *VAR_12 );
    FUNC_2( VAR_9->pSelect==0 );
    if( FUNC_4(VAR_9)==0 ){





      FKey *VAR_13;
      for(VAR_13=VAR_9->pFKey; VAR_13; VAR_13=VAR_13->pNextFrom){
        if( VAR_13->isDeferred || (VAR_10->flags & VAR_5) ) break;
      }
      if( !VAR_13 ) return;
      VAR_11 = FUNC_10(VAR_7);
      FUNC_8(VAR_12, VAR_1, 1, VAR_11); FUNC_1(VAR_12);
    }

    VAR_7->disableTriggers = 1;
    FUNC_3(VAR_7, FUNC_7(VAR_10, VAR_8, 0), 0, 0, 0);
    VAR_7->disableTriggers = 0;
    if( (VAR_10->flags & VAR_5)==0 ){
      FUNC_12(VAR_12, VAR_0);
      FUNC_8(VAR_12, VAR_1, 0, FUNC_9(VAR_12)+2);
      FUNC_1(VAR_12);
      FUNC_6(VAR_7, VAR_4,
          VAR_0, 0, VAR_2, VAR_3);
    }

    if( VAR_11 ){
      FUNC_11(VAR_12, VAR_11);
    }
  }
}
