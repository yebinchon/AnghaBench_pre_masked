
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct SrcList_item {int jointype; TYPE_7__* pUsing; scalar_t__ pOn; int iCursor; TYPE_3__* pTab; } ;
struct TYPE_17__ {int nCol; TYPE_1__* aCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_21__ {int nId; TYPE_2__* a; } ;
struct TYPE_20__ {int db; } ;
struct TYPE_19__ {int pWhere; TYPE_4__* pSrc; } ;
struct TYPE_18__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_16__ {char* zName; } ;
struct TYPE_15__ {char* zName; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ IdList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*,int,int,int,int,int,int *) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_6__*,char*,...) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int,char*,int*,int*) ;

__attribute__((used)) static int FUNC_7(Parse *VAR_2, Select *VAR_3){
  SrcList *VAR_4;
  int VAR_5, VAR_6;
  struct SrcList_item *VAR_7;
  struct SrcList_item *VAR_8;

  VAR_4 = VAR_3->pSrc;
  VAR_7 = &VAR_4->a[0];
  VAR_8 = &VAR_7[1];
  for(VAR_5=0; VAR_5<VAR_4->nSrc-1; VAR_5++, VAR_8++, VAR_7++){
    Table *VAR_9 = VAR_7->pTab;
    Table *VAR_10 = VAR_8->pTab;
    int VAR_11;

    if( FUNC_0(VAR_9==0 || VAR_10==0) ) continue;
    VAR_11 = (VAR_8->jointype & VAR_1)!=0;




    if( VAR_8->jointype & VAR_0 ){
      if( VAR_8->pOn || VAR_8->pUsing ){
        FUNC_4(VAR_2, "a NATURAL join may not have "
           "an ON or USING clause", 0);
        return 1;
      }
      for(VAR_6=0; VAR_6<VAR_10->nCol; VAR_6++){
        char *VAR_12;
        int VAR_13;
        int VAR_14;

        VAR_12 = VAR_10->aCol[VAR_6].zName;
        if( FUNC_6(VAR_4, VAR_5+1, VAR_12, &VAR_13, &VAR_14) ){
          FUNC_1(VAR_2, VAR_4, VAR_13, VAR_14, VAR_5+1, VAR_6,
                       VAR_11, &VAR_3->pWhere);
        }
      }
    }



    if( VAR_8->pOn && VAR_8->pUsing ){
      FUNC_4(VAR_2, "cannot have both ON and USING "
        "clauses in the same join");
      return 1;
    }




    if( VAR_8->pOn ){
      if( VAR_11 ) FUNC_3(VAR_8->pOn, VAR_8->iCursor);
      VAR_3->pWhere = FUNC_5(VAR_2->db, VAR_3->pWhere, VAR_8->pOn);
      VAR_8->pOn = 0;
    }
    if( VAR_8->pUsing ){
      IdList *VAR_15 = VAR_8->pUsing;
      for(VAR_6=0; VAR_6<VAR_15->nId; VAR_6++){
        char *VAR_16;
        int VAR_17;
        int VAR_18;
        int VAR_19;

        VAR_16 = VAR_15->a[VAR_6].zName;
        VAR_19 = FUNC_2(VAR_10, VAR_16);
        if( VAR_19<0
         || !FUNC_6(VAR_4, VAR_5+1, VAR_16, &VAR_17, &VAR_18)
        ){
          FUNC_4(VAR_2, "cannot join using column %s - column "
            "not present in both tables", VAR_16);
          return 1;
        }
        FUNC_1(VAR_2, VAR_4, VAR_17, VAR_18, VAR_5+1, VAR_19,
                     VAR_11, &VAR_3->pWhere);
      }
    }
  }
  return 0;
}
