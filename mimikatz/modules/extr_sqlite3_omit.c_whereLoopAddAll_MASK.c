
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_17__ {int jointype; } ;
struct SrcList_item {int iCursor; TYPE_2__ fg; int pTab; } ;
struct TYPE_19__ {scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_20__ {TYPE_3__* pWC; int iPlanLimit; TYPE_6__* pNew; TYPE_7__* pWInfo; } ;
typedef TYPE_5__ WhereLoopBuilder ;
struct TYPE_21__ {int iTab; int maskSelf; } ;
typedef TYPE_6__ WhereLoop ;
struct TYPE_22__ {size_t nLevel; int sMaskSet; TYPE_1__* pParse; TYPE_8__* pTabList; } ;
typedef TYPE_7__ WhereInfo ;
struct TYPE_23__ {struct SrcList_item* a; } ;
struct TYPE_18__ {scalar_t__ hasOr; } ;
struct TYPE_16__ {TYPE_4__* db; } ;
typedef TYPE_8__ SrcList ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(WhereLoopBuilder *VAR_7){
  WhereInfo *VAR_8 = VAR_7->pWInfo;
  Bitmask VAR_9 = 0;
  Bitmask VAR_10 = 0;
  int VAR_11;
  SrcList *VAR_12 = VAR_8->pTabList;
  struct SrcList_item *VAR_13;
  struct SrcList_item *VAR_14 = &VAR_12->a[VAR_8->nLevel];
  sqlite3 *VAR_15 = VAR_8->pParse->db;
  int VAR_16 = VAR_3;
  WhereLoop *VAR_17;
  u8 VAR_18 = 0;


  VAR_17 = VAR_7->pNew;
  FUNC_7(VAR_17);
  VAR_7->iPlanLimit = VAR_4;
  for(VAR_11=0, VAR_13=VAR_12->a; VAR_13<VAR_14; VAR_11++, VAR_13++){
    Bitmask VAR_19 = 0;
    VAR_17->iTab = VAR_11;
    VAR_7->iPlanLimit += VAR_5;
    VAR_17->maskSelf = FUNC_1(&VAR_8->sMaskSet, VAR_13->iCursor);
    if( ((VAR_13->fg.jointype|VAR_18) & (VAR_1|VAR_0))!=0 ){


      VAR_9 = VAR_10;
    }
    VAR_18 = VAR_13->fg.jointype;

    if( FUNC_0(VAR_13->pTab) ){
      struct SrcList_item *VAR_20;
      for(VAR_20=&VAR_13[1]; VAR_20<VAR_14; VAR_20++){
        if( VAR_19 || (VAR_20->fg.jointype & (VAR_1|VAR_0)) ){
          VAR_19 |= FUNC_1(&VAR_8->sMaskSet, VAR_20->iCursor);
        }
      }
      VAR_16 = FUNC_5(VAR_7, VAR_9, VAR_19);
    }else

    {
      VAR_16 = FUNC_3(VAR_7, VAR_9);
    }
    if( VAR_16==VAR_3 && VAR_7->pWC->hasOr ){
      VAR_16 = FUNC_4(VAR_7, VAR_9, VAR_19);
    }
    VAR_10 |= VAR_17->maskSelf;
    if( VAR_16 || VAR_15->mallocFailed ){
      if( VAR_16==VAR_2 ){

        FUNC_2(VAR_6, "abbreviated query algorithm search");
        VAR_16 = VAR_3;
      }else{
        break;
      }
    }
  }

  FUNC_6(VAR_15, VAR_17);
  return VAR_16;
}
