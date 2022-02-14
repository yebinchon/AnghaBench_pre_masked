
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {TYPE_1__* pDb; } ;
struct TYPE_14__ {TYPE_11__* pSeg; } ;
struct TYPE_13__ {int pFS; } ;
struct TYPE_12__ {scalar_t__ iRoot; scalar_t__ iFirst; } ;
typedef TYPE_2__ SegmentPtr ;
typedef int Page ;
typedef TYPE_3__ MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_11__*,int,void*,int,int ,int **) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int,void*,int,int,int*,int*) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(
  MultiCursor *VAR_1,
  SegmentPtr *VAR_2,
  int VAR_3,
  void *VAR_4, int VAR_5,
  int VAR_6,
  int VAR_7,
  int *VAR_8,
  int *VAR_9
){
  int VAR_10 = VAR_6;
  int VAR_11 = VAR_0;

  if( VAR_2->pSeg->iRoot ){
    Page *VAR_12;
    FUNC_0( VAR_2->pSeg->iRoot!=0 );
    VAR_11 = FUNC_1(VAR_1, VAR_2->pSeg, VAR_3, VAR_4, VAR_5, 0, &VAR_12);
    if( VAR_11==VAR_0 ) FUNC_4(VAR_2, VAR_12);
  }else{
    if( VAR_10==0 ){
      VAR_10 = (int)VAR_2->pSeg->iFirst;
    }
    if( VAR_11==VAR_0 ){
      VAR_11 = FUNC_2(VAR_1->pDb->pFS, VAR_2, VAR_10);
    }
  }

  if( VAR_11==VAR_0 ){
    VAR_11 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_9);
  }
  return VAR_11;
}
