
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int aValue ;
typedef int aRnd ;
typedef int ThreadSet ;
typedef int TestDb ;
struct TYPE_7__ {int nKey; } ;
struct TYPE_6__ {int nMs; int * pSet; } ;
struct TYPE_5__ {int nReadwrite; int nFastReader; int nMs; TYPE_3__ param; int zSystem; } ;
typedef TYPE_1__ Mt1Test ;
typedef TYPE_2__ Mt1DelayCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *,int ,void*,int,int*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int,char*,int*) ;
 int FUNC_2 (char*,int,char*,int,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_11(ThreadSet *VAR_5, int VAR_6, void *VAR_7){
  Mt1Test *VAR_8 = (Mt1Test *)VAR_7;
  Mt1DelayCtx VAR_9;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13;
  TestDb *VAR_14;
  int VAR_15;

  VAR_9.pSet = VAR_5;
  VAR_9.nMs = 0;
  if( VAR_6<VAR_8->nReadwrite ){
    VAR_15 = VAR_1;
  }else if( VAR_6<(VAR_8->nReadwrite+VAR_8->nFastReader) ){
    VAR_15 = VAR_0;
  }else{
    VAR_15 = VAR_2;
    VAR_9.nMs = (VAR_8->nMs / 20);
  }



  VAR_13 = FUNC_7(VAR_6);
  VAR_14 = FUNC_5(VAR_8->zSystem, 0, &VAR_12);

  if( VAR_12==0 ){
    FUNC_3(VAR_14, VAR_4, 0);
  }



  while( VAR_12==0 && FUNC_8(VAR_5)==0 ){
    int VAR_16;


    VAR_16 = (FUNC_7(VAR_13++) % VAR_8->param.nKey);
    FUNC_0(&VAR_8->param, VAR_14, VAR_3, (void *)&VAR_9, VAR_16, &VAR_12);
    if( VAR_12 ) continue;
    VAR_10++;




    if( VAR_15==VAR_1 ){
      char VAR_17[50];
      char VAR_18[25];

      VAR_16 = (FUNC_7(VAR_13++) % VAR_8->param.nKey);
      FUNC_6(VAR_13, VAR_18, sizeof(VAR_18));
      VAR_13 += sizeof(VAR_18);
      FUNC_2(VAR_17, sizeof(VAR_17), "%d.%s", VAR_6, VAR_18);
      VAR_11 += FUNC_1(&VAR_8->param, VAR_14, VAR_16, VAR_17, &VAR_12);
    }
  }
  FUNC_4(&VAR_14);





  if( VAR_12 ){
    FUNC_10(VAR_5, VAR_6, VAR_12, 0);
    FUNC_9(VAR_5);
  }else{
    FUNC_10(VAR_5, VAR_6, 0, "r/w: %d/%d", VAR_10, VAR_11);
  }
}
