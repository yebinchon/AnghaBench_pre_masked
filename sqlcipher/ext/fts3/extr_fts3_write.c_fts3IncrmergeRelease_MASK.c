
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ n; scalar_t__ nAlloc; int* a; } ;
struct TYPE_9__ {scalar_t__ bNoLeafData; int nLeafData; int iEnd; TYPE_2__* aNodeWriter; int iStart; int iIdx; scalar_t__ iAbsLevel; } ;
struct TYPE_7__ {scalar_t__ nAlloc; int* a; } ;
struct TYPE_8__ {TYPE_1__ key; TYPE_4__ block; int iBlock; } ;
typedef TYPE_2__ NodeWriter ;
typedef TYPE_3__ IncrmergeWriter ;
typedef int Fts3Table ;
typedef TYPE_4__ Blob ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,scalar_t__,int*) ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int ,int ,int ,int*,scalar_t__) ;
 int FUNC_3 (int *,int ,int*,scalar_t__) ;
 scalar_t__ FUNC_4 (int*,int ) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static void FUNC_6(
  Fts3Table *VAR_3,
  IncrmergeWriter *VAR_4,
  int *VAR_5
){
  int VAR_6;
  int VAR_7;
  NodeWriter *VAR_8;
  int VAR_9 = *VAR_5;





  for(VAR_7=VAR_1-1; VAR_7>=0; VAR_7--){
    NodeWriter *VAR_10 = &VAR_4->aNodeWriter[VAR_7];
    if( VAR_10->block.n>0 ) break;
    FUNC_0( *VAR_5 || VAR_10->block.nAlloc==0 );
    FUNC_0( *VAR_5 || VAR_10->key.nAlloc==0 );
    FUNC_5(VAR_10->block.a);
    FUNC_5(VAR_10->key.a);
  }


  if( VAR_7<0 ) return;
  if( VAR_7==0 ){
    Blob *VAR_11 = &VAR_4->aNodeWriter[1].block;
    FUNC_1(VAR_11, 1 + VAR_0, &VAR_9);
    if( VAR_9==VAR_2 ){
      VAR_11->a[0] = 0x01;
      VAR_11->n = 1 + FUNC_4(
          &VAR_11->a[1], VAR_4->aNodeWriter[0].iBlock
      );
    }
    VAR_7 = 1;
  }
  VAR_8 = &VAR_4->aNodeWriter[VAR_7];


  for(VAR_6=0; VAR_6<VAR_7; VAR_6++){
    NodeWriter *VAR_12 = &VAR_4->aNodeWriter[VAR_6];
    if( VAR_12->block.n>0 && VAR_9==VAR_2 ){
      VAR_9 = FUNC_3(VAR_3, VAR_12->iBlock, VAR_12->block.a, VAR_12->block.n);
    }
    FUNC_5(VAR_12->block.a);
    FUNC_5(VAR_12->key.a);
  }


  if( VAR_9==VAR_2 ){
    VAR_9 = FUNC_2(VAR_3,
        VAR_4->iAbsLevel+1,
        VAR_4->iIdx,
        VAR_4->iStart,
        VAR_4->aNodeWriter[0].iBlock,
        VAR_4->iEnd,
        (VAR_4->bNoLeafData==0 ? VAR_4->nLeafData : 0),
        VAR_8->block.a, VAR_8->block.n
    );
  }
  FUNC_5(VAR_8->block.a);
  FUNC_5(VAR_8->key.a);

  *VAR_5 = VAR_9;
}
