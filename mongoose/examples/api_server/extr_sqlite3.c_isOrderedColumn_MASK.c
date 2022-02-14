
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {TYPE_5__* pIdx; } ;
struct TYPE_8__ {int wsFlags; TYPE_1__ u; } ;
struct TYPE_9__ {int iTabCur; TYPE_2__ plan; } ;
typedef TYPE_3__ WhereLevel ;
struct TYPE_10__ {int i; TYPE_3__* aLevel; } ;
typedef TYPE_4__ WhereBestIdx ;
struct TYPE_11__ {int nColumn; int* aiColumn; int* aSortOrder; } ;
typedef TYPE_5__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  WhereBestIdx *VAR_3,
  int VAR_4,
  int VAR_5
){
  int VAR_6, VAR_7;
  WhereLevel *VAR_8 = &VAR_3->aLevel[VAR_3->i-1];
  Index *VAR_9;
  u8 VAR_10;
  for(VAR_6=VAR_3->i-1; VAR_6>=0; VAR_6--, VAR_8--){
    if( VAR_8->iTabCur!=VAR_4 ) continue;
    if( (VAR_8->plan.wsFlags & VAR_0)!=0 ){
      return 1;
    }
    FUNC_0( (VAR_8->plan.wsFlags & VAR_1)!=0 );
    if( (VAR_9 = VAR_8->plan.u.pIdx)!=0 ){
      if( VAR_5<0 ){
        VAR_10 = 0;
        FUNC_1( (VAR_8->plan.wsFlags & VAR_2)!=0 );
      }else{
        int VAR_11 = VAR_9->nColumn;
        for(VAR_7=0; VAR_7<VAR_11; VAR_7++){
          if( VAR_5==VAR_9->aiColumn[VAR_7] ) break;
        }
        if( VAR_7>=VAR_11 ) return 0;
        VAR_10 = VAR_9->aSortOrder[VAR_7];
        FUNC_1( (VAR_8->plan.wsFlags & VAR_2)!=0 );
      }
    }else{
      if( VAR_5!=(-1) ) return 0;
      VAR_10 = 0;
      FUNC_1( (VAR_8->plan.wsFlags & VAR_2)!=0 );
    }
    if( (VAR_8->plan.wsFlags & VAR_2)!=0 ){
      FUNC_0( VAR_10==0 || VAR_10==1 );
      FUNC_1( VAR_10==1 );
      VAR_10 = 1 - VAR_10;
    }
    return VAR_10+2;
  }
  return 0;
}
