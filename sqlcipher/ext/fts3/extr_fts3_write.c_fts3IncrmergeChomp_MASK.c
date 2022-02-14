
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_6__ {int nSegment; TYPE_1__** apSegment; } ;
struct TYPE_5__ {int iIdx; scalar_t__ aNode; char* zTerm; int nTerm; } ;
typedef int Fts3Table ;
typedef TYPE_1__ Fts3SegReader ;
typedef TYPE_2__ Fts3MultiSegReader ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int,char const*,int) ;

__attribute__((used)) static int FUNC_6(
  Fts3Table *VAR_1,
  sqlite3_int64 VAR_2,
  Fts3MultiSegReader *VAR_3,
  int *VAR_4
){
  int VAR_5;
  int VAR_6 = 0;
  int VAR_7 = VAR_0;

  for(VAR_5=VAR_3->nSegment-1; VAR_5>=0 && VAR_7==VAR_0; VAR_5--){
    Fts3SegReader *VAR_8 = 0;
    int VAR_9;



    for(VAR_9=0; FUNC_0(VAR_9<VAR_3->nSegment); VAR_9++){
      VAR_8 = VAR_3->apSegment[VAR_9];
      if( VAR_8->iIdx==VAR_5 ) break;
    }
    FUNC_1( VAR_9<VAR_3->nSegment && VAR_8->iIdx==VAR_5 );

    if( VAR_8->aNode==0 ){

      VAR_7 = FUNC_2(VAR_1, VAR_8);
      if( VAR_7==VAR_0 ){
        VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_8->iIdx);
      }
      *VAR_4 = 0;
    }else{



      const char *VAR_10 = VAR_8->zTerm;
      int VAR_11 = VAR_8->nTerm;
      VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_8->iIdx, VAR_10, VAR_11);
      VAR_6++;
    }
  }

  if( VAR_7==VAR_0 && VAR_6!=VAR_3->nSegment ){
    VAR_7 = FUNC_4(VAR_1, VAR_2);
  }

  *VAR_4 = VAR_6;
  return VAR_7;
}
