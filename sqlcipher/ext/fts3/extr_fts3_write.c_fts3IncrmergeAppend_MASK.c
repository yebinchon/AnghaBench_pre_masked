
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_19__ {char* zTerm; int nTerm; char* aDoclist; int nDoclist; } ;
struct TYPE_18__ {int nNodeSize; } ;
struct TYPE_17__ {int nLeafData; int nWork; TYPE_1__* aNodeWriter; } ;
struct TYPE_15__ {scalar_t__ n; int a; } ;
struct TYPE_14__ {int n; char* a; } ;
struct TYPE_16__ {TYPE_12__ key; TYPE_11__ block; int iBlock; } ;
typedef TYPE_1__ NodeWriter ;
typedef TYPE_2__ IncrmergeWriter ;
typedef TYPE_3__ Fts3Table ;
typedef TYPE_4__ Fts3MultiSegReader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_11__*,int,int*) ;
 int FUNC_1 (TYPE_11__*,TYPE_12__*,char const*,int,char const*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,char const*,int) ;
 int FUNC_3 (int ,scalar_t__,char const*,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(
  Fts3Table *VAR_1,
  IncrmergeWriter *VAR_2,
  Fts3MultiSegReader *VAR_3
){
  const char *VAR_4 = VAR_3->zTerm;
  int VAR_5 = VAR_3->nTerm;
  const char *VAR_6 = VAR_3->aDoclist;
  int VAR_7 = VAR_3->nDoclist;
  int VAR_8 = VAR_0;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  NodeWriter *VAR_12;

  VAR_12 = &VAR_2->aNodeWriter[0];
  VAR_10 = FUNC_3(VAR_12->key.a, VAR_12->key.n, VAR_4, VAR_5);
  VAR_11 = VAR_5 - VAR_10;

  VAR_9 = FUNC_5(VAR_10);
  VAR_9 += FUNC_5(VAR_11) + VAR_11;
  VAR_9 += FUNC_5(VAR_7) + VAR_7;




  if( VAR_12->block.n>0 && (VAR_12->block.n + VAR_9)>VAR_1->nNodeSize ){
    VAR_8 = FUNC_4(VAR_1, VAR_12->iBlock, VAR_12->block.a, VAR_12->block.n);
    VAR_2->nWork++;
    if( VAR_8==VAR_0 ){
      VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_10+1);
    }


    VAR_12->iBlock++;
    VAR_12->key.n = 0;
    VAR_12->block.n = 0;

    VAR_11 = VAR_5;
    VAR_9 = 1;
    VAR_9 += FUNC_5(VAR_11) + VAR_11;
    VAR_9 += FUNC_5(VAR_7) + VAR_7;
  }

  VAR_2->nLeafData += VAR_9;
  FUNC_0(&VAR_12->block, VAR_12->block.n + VAR_9, &VAR_8);
  if( VAR_8==VAR_0 ){
    if( VAR_12->block.n==0 ){
      VAR_12->block.n = 1;
      VAR_12->block.a[0] = '\0';
    }
    VAR_8 = FUNC_1(
        &VAR_12->block, &VAR_12->key, VAR_4, VAR_5, VAR_6, VAR_7
    );
  }

  return VAR_8;
}
