
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int jointype; } ;
struct SrcList_item {scalar_t__ pTab; TYPE_7__* pUsing; scalar_t__ pOn; int iCursor; TYPE_1__ fg; } ;
struct TYPE_15__ {int nCol; TYPE_2__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_18__ {int nId; TYPE_3__* a; } ;
struct TYPE_17__ {int pWhere; TYPE_5__* pSrc; } ;
struct TYPE_16__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_14__ {char* zName; } ;
struct TYPE_13__ {char* zName; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Select ;
typedef int Parse ;
typedef TYPE_7__ IdList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_5__*,int,int,int,int,int,int *) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int,char*,int*,int*) ;

__attribute__((used)) static int FUNC_7(Parse *VAR_2, Select *VAR_3){
  SrcList *VAR_4;
  int VAR_5, VAR_6;
  struct SrcList_item *VAR_7;
  struct SrcList_item *VAR_8;

  VAR_4 = VAR_3->pSrc;
  VAR_7 = &VAR_4->a[0];
  VAR_8 = &VAR_7[1];
  for(VAR_5=0; VAR_5<VAR_4->nSrc-1; VAR_5++, VAR_8++, VAR_7++){
    Table *VAR_9 = VAR_8->pTab;
    int VAR_10;

    if( FUNC_0(VAR_7->pTab==0 || VAR_9==0) ) continue;
    VAR_10 = (VAR_8->fg.jointype & VAR_1)!=0;




    if( VAR_8->fg.jointype & VAR_0 ){
      if( VAR_8->pOn || VAR_8->pUsing ){
        FUNC_4(VAR_2, "a NATURAL join may not have "
           "an ON or USING clause", 0);
        return 1;
      }
      for(VAR_6=0; VAR_6<VAR_9->nCol; VAR_6++){
        char *VAR_11;
        int VAR_12;
        int VAR_13;

        VAR_11 = VAR_9->aCol[VAR_6].zName;
        if( FUNC_6(VAR_4, VAR_5+1, VAR_11, &VAR_12, &VAR_13) ){
          FUNC_1(VAR_2, VAR_4, VAR_12, VAR_13, VAR_5+1, VAR_6,
                       VAR_10, &VAR_3->pWhere);
        }
      }
    }



    if( VAR_8->pOn && VAR_8->pUsing ){
      FUNC_4(VAR_2, "cannot have both ON and USING "
        "clauses in the same join");
      return 1;
    }




    if( VAR_8->pOn ){
      if( VAR_10 ) FUNC_3(VAR_8->pOn, VAR_8->iCursor);
      VAR_3->pWhere = FUNC_5(VAR_2, VAR_3->pWhere, VAR_8->pOn);
      VAR_8->pOn = 0;
    }
    if( VAR_8->pUsing ){
      IdList *VAR_14 = VAR_8->pUsing;
      for(VAR_6=0; VAR_6<VAR_14->nId; VAR_6++){
        char *VAR_15;
        int VAR_16;
        int VAR_17;
        int VAR_18;

        VAR_15 = VAR_14->a[VAR_6].zName;
        VAR_18 = FUNC_2(VAR_9, VAR_15);
        if( VAR_18<0
         || !FUNC_6(VAR_4, VAR_5+1, VAR_15, &VAR_16, &VAR_17)
        ){
          FUNC_4(VAR_2, "cannot join using column %s - column "
            "not present in both tables", VAR_15);
          return 1;
        }
        FUNC_1(VAR_2, VAR_4, VAR_16, VAR_17, VAR_5+1, VAR_18,
                     VAR_10, &VAR_3->pWhere);
      }
    }
  }
  return 0;
}
