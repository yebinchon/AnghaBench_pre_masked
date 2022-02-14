
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {char** aaOutput; int* anOutput; } ;
typedef TYPE_1__ TermSelect ;
struct TYPE_23__ {int nDoclist; int aDoclist; } ;
struct TYPE_22__ {TYPE_5__* pSegcsr; int n; int z; scalar_t__ bFirst; scalar_t__ isPrefix; } ;
struct TYPE_21__ {int flags; int iCol; int nTerm; int zTerm; } ;
struct TYPE_20__ {int nColumn; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3SegFilter ;
typedef TYPE_4__ Fts3PhraseToken ;
typedef TYPE_5__ Fts3MultiSegReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_5__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(
  Fts3Table *VAR_7,
  Fts3PhraseToken *VAR_8,
  int VAR_9,
  int *VAR_10,
  char **VAR_11
){
  int VAR_12;
  Fts3MultiSegReader *VAR_13;
  TermSelect VAR_14;
  Fts3SegFilter VAR_15;

  VAR_13 = VAR_8->pSegcsr;
  FUNC_4(&VAR_14, 0, sizeof(TermSelect));

  VAR_15.flags = VAR_2 | VAR_4
        | (VAR_8->isPrefix ? VAR_3 : 0)
        | (VAR_8->bFirst ? VAR_1 : 0)
        | (VAR_9<VAR_7->nColumn ? VAR_0 : 0);
  VAR_15.iCol = VAR_9;
  VAR_15.zTerm = VAR_8->z;
  VAR_15.nTerm = VAR_8->n;

  VAR_12 = FUNC_5(VAR_7, VAR_13, &VAR_15);
  while( VAR_5==VAR_12
      && VAR_6==(VAR_12 = FUNC_6(VAR_7, VAR_13))
  ){
    VAR_12 = FUNC_3(VAR_7, &VAR_14, VAR_13->aDoclist, VAR_13->nDoclist);
  }

  if( VAR_12==VAR_5 ){
    VAR_12 = FUNC_2(VAR_7, &VAR_14);
  }
  if( VAR_12==VAR_5 ){
    *VAR_11 = VAR_14.aaOutput[0];
    *VAR_10 = VAR_14.anOutput[0];
  }else{
    int VAR_16;
    for(VAR_16=0; VAR_16<FUNC_0(VAR_14.aaOutput); VAR_16++){
      FUNC_7(VAR_14.aaOutput[VAR_16]);
    }
  }

  FUNC_1(VAR_13);
  VAR_8->pSegcsr = 0;
  return VAR_12;
}
