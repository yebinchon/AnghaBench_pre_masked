
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* pMerger; } ;
struct TYPE_11__ {TYPE_1__* aReadr; } ;
struct TYPE_10__ {TYPE_3__* pIncr; } ;
typedef int SortSubtask ;
typedef TYPE_1__ PmaReader ;
typedef TYPE_2__ MergeEngine ;
typedef TYPE_3__ IncrMerger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_3__**) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  SortSubtask *VAR_3,
  int VAR_4,
  int VAR_5,
  MergeEngine *VAR_6,
  MergeEngine *VAR_7
){
  int VAR_8 = VAR_2;
  int VAR_9 = 1;
  int VAR_10;
  MergeEngine *VAR_11 = VAR_6;
  IncrMerger *VAR_12;

  VAR_8 = FUNC_1(VAR_3, VAR_7, &VAR_12);

  for(VAR_10=1; VAR_10<VAR_4; VAR_10++){
    VAR_9 = VAR_9 * VAR_0;
  }

  for(VAR_10=1; VAR_10<VAR_4 && VAR_8==VAR_2; VAR_10++){
    int VAR_13 = (VAR_5 / VAR_9) % VAR_0;
    PmaReader *VAR_14 = &VAR_11->aReadr[VAR_13];

    if( VAR_14->pIncr==0 ){
      MergeEngine *VAR_15 = FUNC_2(VAR_0);
      if( VAR_15==0 ){
        VAR_8 = VAR_1;
      }else{
        VAR_8 = FUNC_1(VAR_3, VAR_15, &VAR_14->pIncr);
      }
    }
    if( VAR_8==VAR_2 ){
      VAR_11 = VAR_14->pIncr->pMerger;
      VAR_9 = VAR_9 / VAR_0;
    }
  }

  if( VAR_8==VAR_2 ){
    VAR_11->aReadr[VAR_5 % VAR_0].pIncr = VAR_12;
  }else{
    FUNC_0(VAR_12);
  }
  return VAR_8;
}
