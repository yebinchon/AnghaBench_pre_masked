
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ iSnapshotId; TYPE_4__* aRegion; } ;
struct TYPE_11__ {TYPE_5__ log; } ;
struct TYPE_12__ {TYPE_2__ treehdr; TYPE_1__* pShmhdr; } ;
typedef TYPE_3__ lsm_db ;
typedef scalar_t__ i64 ;
struct TYPE_13__ {scalar_t__ iStart; scalar_t__ iEnd; } ;
struct TYPE_10__ {scalar_t__ iMetaPage; } ;
typedef TYPE_4__ LogRegion ;
typedef TYPE_5__ DbLog ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_2 (TYPE_3__*,int*) ;
 int FUNC_3 (TYPE_3__*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(lsm_db *VAR_1){
  int VAR_2;
  int VAR_3;
  int VAR_4;



  VAR_2 = FUNC_2(VAR_1, &VAR_4);
  if( VAR_2!=VAR_0 || VAR_4 ) return VAR_2;

  VAR_3 = (int)VAR_1->pShmhdr->iMetaPage;
  if( VAR_3==1 || VAR_3==2 ){
    DbLog *VAR_5 = &VAR_1->treehdr.log;
    i64 VAR_6;
    VAR_2 = FUNC_3(VAR_1, VAR_3, &VAR_6);

    if( VAR_2==VAR_0 && VAR_5->iSnapshotId!=VAR_6 ){
      i64 VAR_7 = 0;
      i64 VAR_8 = 0;
      VAR_2 = FUNC_1(VAR_1, &VAR_7, &VAR_8, 0);
      if( VAR_2==VAR_0 && VAR_5->iSnapshotId<VAR_7 ){
        int VAR_9;
        for(VAR_9=0; VAR_9<3; VAR_9++){
          LogRegion *VAR_10 = &VAR_5->aRegion[VAR_9];
          if( VAR_8>=VAR_10->iStart && VAR_8<=VAR_10->iEnd ) break;
          VAR_10->iStart = 0;
          VAR_10->iEnd = 0;
        }
        FUNC_0( VAR_9<3 );
        VAR_5->aRegion[VAR_9].iStart = VAR_8;
        VAR_5->iSnapshotId = VAR_7;
      }
    }
  }
  return VAR_2;
}
