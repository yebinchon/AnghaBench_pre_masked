
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nPendingData; } ;
typedef TYPE_1__ fulltext_vtab ;
struct TYPE_14__ {scalar_t__ nData; int pData; } ;
struct TYPE_13__ {int nPhrase; int isPrefix; int nTerm; int pTerm; } ;
typedef TYPE_2__ QueryTerm ;
typedef TYPE_3__ DataBuffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,scalar_t__,scalar_t__,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ,int ,scalar_t__,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(
  fulltext_vtab *VAR_4,
  int VAR_5,
  QueryTerm *VAR_6,
  DataBuffer *VAR_7
){
  DataBuffer VAR_8, VAR_9, VAR_10;
  int VAR_11, VAR_12;


  FUNC_0( VAR_6->nPhrase==0 || VAR_0!=VAR_1 );


  FUNC_0( VAR_4->nPendingData<0 );

  FUNC_2(&VAR_8, 0);
  VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6->pTerm, VAR_6->nTerm, VAR_6->isPrefix,
                  0<VAR_6->nPhrase ? VAR_2 : VAR_1, &VAR_8);
  if( VAR_12 ) return VAR_12;
  for(VAR_11=1; VAR_11<=VAR_6->nPhrase && VAR_8.nData>0; VAR_11++){
    FUNC_2(&VAR_9, 0);
    VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6[VAR_11].pTerm, VAR_6[VAR_11].nTerm,
                    VAR_6[VAR_11].isPrefix, VAR_2, &VAR_9);
    if( VAR_12 ){
      FUNC_1(&VAR_8);
      return VAR_12;
    }
    FUNC_2(&VAR_10, 0);
    FUNC_3(VAR_8.pData, VAR_8.nData, VAR_9.pData, VAR_9.nData,
                       VAR_11<VAR_6->nPhrase ? VAR_2 : VAR_1, &VAR_10);
    FUNC_1(&VAR_8);
    FUNC_1(&VAR_9);
    VAR_8 = VAR_10;
  }
  *VAR_7 = VAR_8;
  return VAR_3;
}
