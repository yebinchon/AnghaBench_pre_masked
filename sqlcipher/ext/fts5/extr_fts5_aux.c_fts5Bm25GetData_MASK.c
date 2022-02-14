
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_11__ {int nPhrase; double* aIDF; double* aFreq; double avgdl; } ;
struct TYPE_10__ {int (* xPhraseCount ) (int *) ;int (* xRowCount ) (int *,scalar_t__*) ;int (* xColumnTotalSize ) (int *,int,scalar_t__*) ;int (* xQueryPhrase ) (int *,int,void*,int ) ;int (* xSetAuxdata ) (int *,TYPE_2__*,int (*) (TYPE_2__*)) ;TYPE_2__* (* xGetAuxdata ) (int *,int ) ;} ;
typedef TYPE_1__ Fts5ExtensionApi ;
typedef int Fts5Context ;
typedef TYPE_2__ Fts5Bm25Data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 double FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,size_t) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_2__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,int,scalar_t__*) ;
 int FUNC_9 (int *,int,void*,int ) ;
 int FUNC_10 (int *,TYPE_2__*,int (*) (TYPE_2__*)) ;

__attribute__((used)) static int FUNC_11(
  const Fts5ExtensionApi *VAR_3,
  Fts5Context *VAR_4,
  Fts5Bm25Data **VAR_5
){
  int VAR_6 = VAR_1;
  Fts5Bm25Data *VAR_7;

  VAR_7 = VAR_3->xGetAuxdata(VAR_4, 0);
  if( VAR_7==0 ){
    int VAR_8;
    sqlite3_int64 VAR_9 = 0;
    sqlite3_int64 VAR_10 = 0;
    sqlite3_int64 VAR_11;
    int VAR_12;


    VAR_8 = VAR_3->xPhraseCount(VAR_4);
    VAR_11 = sizeof(Fts5Bm25Data) + VAR_8*2*sizeof(double);
    VAR_7 = (Fts5Bm25Data*)FUNC_4(VAR_11);
    if( VAR_7==0 ){
      VAR_6 = VAR_0;
    }else{
      FUNC_2(VAR_7, 0, (size_t)VAR_11);
      VAR_7->nPhrase = VAR_8;
      VAR_7->aIDF = (double*)&VAR_7[1];
      VAR_7->aFreq = &VAR_7->aIDF[VAR_8];
    }


    if( VAR_6==VAR_1 ) VAR_6 = VAR_3->xRowCount(VAR_4, &VAR_9);
    FUNC_0( VAR_6!=VAR_1 || VAR_9>0 );
    if( VAR_6==VAR_1 ) VAR_6 = VAR_3->xColumnTotalSize(VAR_4, -1, &VAR_10);
    if( VAR_6==VAR_1 ) VAR_7->avgdl = (double)VAR_10 / (double)VAR_9;


    for(VAR_12=0; VAR_6==VAR_1 && VAR_12<VAR_8; VAR_12++){
      sqlite3_int64 VAR_13 = 0;
      VAR_6 = VAR_3->xQueryPhrase(VAR_4, VAR_12, (void*)&VAR_13, VAR_2);
      if( VAR_6==VAR_1 ){
        double VAR_14 = FUNC_1( (VAR_9 - VAR_13 + 0.5) / (VAR_13 + 0.5) );
        if( VAR_14<=0.0 ) VAR_14 = 1e-6;
        VAR_7->aIDF[VAR_12] = VAR_14;
      }
    }

    if( VAR_6!=VAR_1 ){
      FUNC_3(VAR_7);
    }else{
      VAR_6 = VAR_3->xSetAuxdata(VAR_4, VAR_7, FUNC_3);
    }
    if( VAR_6!=VAR_1 ) VAR_7 = 0;
  }
  *VAR_5 = VAR_7;
  return VAR_6;
}
