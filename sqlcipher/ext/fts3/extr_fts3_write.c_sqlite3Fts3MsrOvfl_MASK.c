
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_11__ {scalar_t__ pVtab; } ;
struct TYPE_15__ {TYPE_1__ base; } ;
struct TYPE_14__ {int nSegment; TYPE_3__** apSegment; } ;
struct TYPE_13__ {scalar_t__ iStartBlock; scalar_t__ iLeafEndBlock; } ;
struct TYPE_12__ {int nPgsz; int bFts4; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3SegReader ;
typedef TYPE_4__ Fts3MultiSegReader ;
typedef TYPE_5__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int ,int*,int ) ;

int FUNC_4(
  Fts3Cursor *VAR_1,
  Fts3MultiSegReader *VAR_2,
  int *VAR_3
){
  Fts3Table *VAR_4 = (Fts3Table*)VAR_1->base.pVtab;
  int VAR_5 = 0;
  int VAR_6;
  int VAR_7 = VAR_0;
  int VAR_8 = VAR_4->nPgsz;

  FUNC_0( VAR_4->bFts4 );
  FUNC_0( VAR_8>0 );

  for(VAR_6=0; VAR_7==VAR_0 && VAR_6<VAR_2->nSegment; VAR_6++){
    Fts3SegReader *VAR_9 = VAR_2->apSegment[VAR_6];
    if( !FUNC_1(VAR_9)
     && !FUNC_2(VAR_9)
    ){
      sqlite3_int64 VAR_10;
      for(VAR_10=VAR_9->iStartBlock; VAR_10<=VAR_9->iLeafEndBlock; VAR_10++){
        int VAR_11;
        VAR_7 = FUNC_3(VAR_4, VAR_10, 0, &VAR_11, 0);
        if( VAR_7!=VAR_0 ) break;
        if( (VAR_11+35)>VAR_8 ){
          VAR_5 += (VAR_11 + 34)/VAR_8;
        }
      }
    }
  }
  *VAR_3 = VAR_5;
  return VAR_7;
}
