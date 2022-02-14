
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nNode; size_t nPopulate; scalar_t__ pBlob; int * aNode; } ;
typedef TYPE_1__ Fts3SegReader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *,int,size_t) ;

__attribute__((used)) static int FUNC_4(Fts3SegReader *VAR_3){
  int VAR_4;
  int VAR_5;

  VAR_4 = FUNC_0(VAR_3->nNode - VAR_3->nPopulate, VAR_0);
  VAR_5 = FUNC_3(
      VAR_3->pBlob,
      &VAR_3->aNode[VAR_3->nPopulate],
      VAR_4,
      VAR_3->nPopulate
  );

  if( VAR_5==VAR_2 ){
    VAR_3->nPopulate += VAR_4;
    FUNC_1(&VAR_3->aNode[VAR_3->nPopulate], 0, VAR_1);
    if( VAR_3->nPopulate==VAR_3->nNode ){
      FUNC_2(VAR_3->pBlob);
      VAR_3->pBlob = 0;
      VAR_3->nPopulate = 0;
    }
  }
  return VAR_5;
}
