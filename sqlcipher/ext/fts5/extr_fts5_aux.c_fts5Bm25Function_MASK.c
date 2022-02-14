
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_7__ {double* aFreq; int nPhrase; double* aIDF; double const avgdl; } ;
struct TYPE_6__ {int (* xInstCount ) (int *,int*) ;int (* xInst ) (int *,int,int*,int*,int*) ;int (* xColumnSize ) (int *,int,int*) ;} ;
typedef TYPE_1__ Fts5ExtensionApi ;
typedef int Fts5Context ;
typedef TYPE_2__ Fts5Bm25Data ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,int *,TYPE_2__**) ;
 int FUNC_1 (double*,int ,int) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,int) ;
 double FUNC_4 (int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int,int*,int*,int*) ;
 int FUNC_7 (int *,int,int*) ;

__attribute__((used)) static void FUNC_8(
  const Fts5ExtensionApi *VAR_1,
  Fts5Context *VAR_2,
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  const double VAR_6 = 1.2;
  const double VAR_7 = 0.75;
  int VAR_8 = VAR_0;
  double VAR_9 = 0.0;
  Fts5Bm25Data *VAR_10;
  int VAR_11;
  int VAR_12 = 0;
  double VAR_13 = 0.0;
  double *VAR_14 = 0;



  VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_10);
  if( VAR_8==VAR_0 ){
    VAR_14 = VAR_10->aFreq;
    FUNC_1(VAR_14, 0, sizeof(double) * VAR_10->nPhrase);
    VAR_8 = VAR_1->xInstCount(VAR_2, &VAR_12);
  }
  for(VAR_11=0; VAR_8==VAR_0 && VAR_11<VAR_12; VAR_11++){
    int VAR_15; int VAR_16; int VAR_17;
    VAR_8 = VAR_1->xInst(VAR_2, VAR_11, &VAR_15, &VAR_16, &VAR_17);
    if( VAR_8==VAR_0 ){
      double VAR_18 = (VAR_4 > VAR_16) ? FUNC_4(VAR_5[VAR_16]) : 1.0;
      VAR_14[VAR_15] += VAR_18;
    }
  }


  if( VAR_8==VAR_0 ){
    int VAR_19;
    VAR_8 = VAR_1->xColumnSize(VAR_2, -1, &VAR_19);
    VAR_13 = (double)VAR_19;
  }


  for(VAR_11=0; VAR_8==VAR_0 && VAR_11<VAR_10->nPhrase; VAR_11++){
    VAR_9 += VAR_10->aIDF[VAR_11] * (
      ( VAR_14[VAR_11] * (VAR_6 + 1.0) ) /
      ( VAR_14[VAR_11] + VAR_6 * (1 - VAR_7 + VAR_7 * VAR_13 / VAR_10->avgdl) )
    );
  }



  if( VAR_8==VAR_0 ){
    FUNC_2(VAR_3, -1.0 * VAR_9);
  }else{
    FUNC_3(VAR_3, VAR_8);
  }
}
