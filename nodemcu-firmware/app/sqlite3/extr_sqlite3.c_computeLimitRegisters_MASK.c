
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef int Vdbe ;
struct TYPE_9__ {int nMem; } ;
struct TYPE_8__ {int iLimit; scalar_t__ nSelectRow; int iOffset; int pOffset; int pLimit; int selFlags; } ;
typedef TYPE_1__ Select ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int * FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ,int,int,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12(Parse *VAR_5, Select *VAR_6, int VAR_7){
  Vdbe *VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11;
  if( VAR_6->iLimit ) return;







  FUNC_3(VAR_5);
  FUNC_2( VAR_6->pOffset==0 || VAR_6->pLimit!=0 );
  if( VAR_6->pLimit ){
    VAR_6->iLimit = VAR_9 = ++VAR_5->nMem;
    VAR_8 = FUNC_6(VAR_5);
    FUNC_2( VAR_8!=0 );
    if( FUNC_5(VAR_6->pLimit, &VAR_11) ){
      FUNC_9(VAR_8, VAR_1, VAR_11, VAR_9);
      FUNC_0((VAR_8, "LIMIT counter"));
      if( VAR_11==0 ){
        FUNC_11(VAR_8, VAR_7);
      }else if( VAR_11>=0 && VAR_6->nSelectRow>FUNC_7((u64)VAR_11) ){
        VAR_6->nSelectRow = FUNC_7((u64)VAR_11);
        VAR_6->selFlags |= VAR_4;
      }
    }else{
      FUNC_4(VAR_5, VAR_6->pLimit, VAR_9);
      FUNC_8(VAR_8, VAR_2, VAR_9); FUNC_1(VAR_8);
      FUNC_0((VAR_8, "LIMIT counter"));
      FUNC_9(VAR_8, VAR_0, VAR_9, VAR_7); FUNC_1(VAR_8);
    }
    if( VAR_6->pOffset ){
      VAR_6->iOffset = VAR_10 = ++VAR_5->nMem;
      VAR_5->nMem++;
      FUNC_4(VAR_5, VAR_6->pOffset, VAR_10);
      FUNC_8(VAR_8, VAR_2, VAR_10); FUNC_1(VAR_8);
      FUNC_0((VAR_8, "OFFSET counter"));
      FUNC_10(VAR_8, VAR_3, VAR_9, VAR_10+1, VAR_10);
      FUNC_0((VAR_8, "LIMIT+OFFSET"));
    }
  }
}
