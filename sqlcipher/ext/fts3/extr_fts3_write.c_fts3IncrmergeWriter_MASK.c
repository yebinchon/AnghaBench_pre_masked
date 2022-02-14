
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
struct TYPE_8__ {int nSegment; } ;
struct TYPE_7__ {int nLeafEst; int iIdx; int iStart; TYPE_1__* aNodeWriter; int iAbsLevel; scalar_t__ iEnd; } ;
struct TYPE_6__ {scalar_t__ iBlock; } ;
typedef TYPE_2__ IncrmergeWriter ;
typedef int Fts3Table ;
typedef TYPE_3__ Fts3MultiSegReader ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int **,int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  Fts3Table *VAR_5,
  sqlite3_int64 VAR_6,
  int VAR_7,
  Fts3MultiSegReader *VAR_8,
  IncrmergeWriter *VAR_9
){
  int VAR_10;
  int VAR_11;
  int VAR_12 = 0;
  sqlite3_stmt *VAR_13 = 0;
  sqlite3_stmt *VAR_14 = 0;


  VAR_10 = FUNC_0(VAR_5, VAR_3, &VAR_13, 0);
  if( VAR_10==VAR_1 ){
    FUNC_2(VAR_13, 1, VAR_6);
    FUNC_2(VAR_13, 2, VAR_8->nSegment);
    if( VAR_2==FUNC_6(VAR_13) ){
      VAR_12 = FUNC_3(VAR_13, 0);
    }
    VAR_10 = FUNC_5(VAR_13);
  }
  if( VAR_10!=VAR_1 ) return VAR_10;


  VAR_10 = FUNC_0(VAR_5, VAR_4, &VAR_14, 0);
  if( VAR_10==VAR_1 ){
    if( VAR_2==FUNC_6(VAR_14) ){
      VAR_9->iStart = FUNC_4(VAR_14, 0);
      VAR_9->iEnd = VAR_9->iStart - 1;
      VAR_9->iEnd += VAR_12 * VAR_0;
    }
    VAR_10 = FUNC_5(VAR_14);
  }
  if( VAR_10!=VAR_1 ) return VAR_10;




  VAR_10 = FUNC_1(VAR_5, VAR_9->iEnd, 0, 0);
  if( VAR_10!=VAR_1 ) return VAR_10;

  VAR_9->iAbsLevel = VAR_6;
  VAR_9->nLeafEst = VAR_12;
  VAR_9->iIdx = VAR_7;


  for(VAR_11=0; VAR_11<VAR_0; VAR_11++){
    VAR_9->aNodeWriter[VAR_11].iBlock = VAR_9->iStart + VAR_11*VAR_9->nLeafEst;
  }
  return VAR_1;
}
