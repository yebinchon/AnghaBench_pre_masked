
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int sqlite3_stmt ;
typedef void* sqlite3_int64 ;
struct TYPE_20__ {int nNodeSize; } ;
struct TYPE_19__ {int nLeafData; int bNoLeafData; int nLeafEst; void* iStart; int iIdx; TYPE_2__* aNodeWriter; void* iAbsLevel; void* iEnd; } ;
struct TYPE_16__ {char* a; int n; } ;
struct TYPE_18__ {void* iChild; TYPE_1__ term; scalar_t__ aNode; } ;
struct TYPE_15__ {char* a; int n; } ;
struct TYPE_17__ {void* iBlock; TYPE_14__ block; TYPE_14__ key; } ;
typedef TYPE_2__ NodeWriter ;
typedef TYPE_3__ NodeReader ;
typedef TYPE_4__ IncrmergeWriter ;
typedef TYPE_5__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_14__*,int,int*) ;
 int FUNC_3 (TYPE_5__*,void*,int*) ;
 int FUNC_4 (int *,int,void**,int*) ;
 int FUNC_5 (TYPE_5__*,int ,int **,int ) ;
 scalar_t__ FUNC_6 (char const*,int,char*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (TYPE_3__*,char*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_5__*,void*,char**,int*,int ) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int,void*) ;
 char* FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 void* FUNC_16 (int *,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(
  Fts3Table *VAR_4,
  sqlite3_int64 VAR_5,
  int VAR_6,
  const char *VAR_7,
  int VAR_8,
  IncrmergeWriter *VAR_9
){
  int VAR_10;
  sqlite3_stmt *VAR_11 = 0;

  VAR_10 = FUNC_5(VAR_4, VAR_3, &VAR_11, 0);
  if( VAR_10==VAR_1 ){
    sqlite3_int64 VAR_12 = 0;
    sqlite3_int64 VAR_13 = 0;
    sqlite3_int64 VAR_14 = 0;
    const char *VAR_15 = 0;
    int VAR_16 = 0;
    int VAR_17;
    int VAR_18 = 0;


    FUNC_13(VAR_11, 1, VAR_5+1);
    FUNC_12(VAR_11, 2, VAR_6);
    if( FUNC_19(VAR_11)==VAR_2 ){
      VAR_12 = FUNC_16(VAR_11, 1);
      VAR_13 = FUNC_16(VAR_11, 2);
      FUNC_4(VAR_11, 3, &VAR_14, &VAR_9->nLeafData);
      if( VAR_9->nLeafData<0 ){
        VAR_9->nLeafData = VAR_9->nLeafData * -1;
      }
      VAR_9->bNoLeafData = (VAR_9->nLeafData==0);
      VAR_16 = FUNC_15(VAR_11, 4);
      VAR_15 = FUNC_14(VAR_11, 4);
    }else{
      return FUNC_18(VAR_11);
    }


    VAR_10 = FUNC_3(VAR_4, VAR_14, &VAR_18);


    if( VAR_10==VAR_1 && VAR_18 ){
      char *VAR_19 = 0;
      int VAR_20 = 0;

      VAR_10 = FUNC_11(VAR_4, VAR_13, &VAR_19, &VAR_20, 0);
      if( VAR_10==VAR_1 ){
        NodeReader VAR_21;
        for(VAR_10 = FUNC_8(&VAR_21, VAR_19, VAR_20);
            VAR_10==VAR_1 && VAR_21.aNode;
            VAR_10 = FUNC_9(&VAR_21)
        ){
          FUNC_1( VAR_21.aNode );
        }
        if( FUNC_6(VAR_7, VAR_8, VAR_21.term.a, VAR_21.term.n)<=0 ){
          VAR_18 = 0;
        }
        FUNC_10(&VAR_21);
      }
      FUNC_17(VAR_19);
    }

    if( VAR_10==VAR_1 && VAR_18 ){


      int VAR_22;
      int VAR_23 = (int)VAR_15[0];
      NodeWriter *VAR_24;

      VAR_9->nLeafEst = (int)((VAR_14 - VAR_12) + 1)/VAR_0;
      VAR_9->iStart = VAR_12;
      VAR_9->iEnd = VAR_14;
      VAR_9->iAbsLevel = VAR_5;
      VAR_9->iIdx = VAR_6;

      for(VAR_22=VAR_23+1; VAR_22<VAR_0; VAR_22++){
        VAR_9->aNodeWriter[VAR_22].iBlock = VAR_9->iStart + VAR_22*VAR_9->nLeafEst;
      }

      VAR_24 = &VAR_9->aNodeWriter[VAR_23];
      VAR_24->iBlock = VAR_9->iStart + VAR_9->nLeafEst*VAR_23;
      FUNC_2(&VAR_24->block, FUNC_0(VAR_16, VAR_4->nNodeSize), &VAR_10);
      if( VAR_10==VAR_1 ){
        FUNC_7(VAR_24->block.a, VAR_15, VAR_16);
        VAR_24->block.n = VAR_16;
      }

      for(VAR_22=VAR_23; VAR_22>=0 && VAR_10==VAR_1; VAR_22--){
        NodeReader VAR_25;
        VAR_24 = &VAR_9->aNodeWriter[VAR_22];

        VAR_10 = FUNC_8(&VAR_25, VAR_24->block.a, VAR_24->block.n);
        while( VAR_25.aNode && VAR_10==VAR_1 ) VAR_10 = FUNC_9(&VAR_25);
        FUNC_2(&VAR_24->key, VAR_25.term.n, &VAR_10);
        if( VAR_10==VAR_1 ){
          FUNC_7(VAR_24->key.a, VAR_25.term.a, VAR_25.term.n);
          VAR_24->key.n = VAR_25.term.n;
          if( VAR_22>0 ){
            char *VAR_26 = 0;
            int VAR_27 = 0;
            VAR_24 = &VAR_9->aNodeWriter[VAR_22-1];
            VAR_24->iBlock = VAR_25.iChild;
            VAR_10 = FUNC_11(VAR_4, VAR_25.iChild, &VAR_26, &VAR_27, 0);
            FUNC_2(&VAR_24->block, FUNC_0(VAR_27, VAR_4->nNodeSize), &VAR_10);
            if( VAR_10==VAR_1 ){
              FUNC_7(VAR_24->block.a, VAR_26, VAR_27);
              VAR_24->block.n = VAR_27;
            }
            FUNC_17(VAR_26);
          }
        }
        FUNC_10(&VAR_25);
      }
    }

    VAR_17 = FUNC_18(VAR_11);
    if( VAR_10==VAR_1 ) VAR_10 = VAR_17;
  }

  return VAR_10;
}
