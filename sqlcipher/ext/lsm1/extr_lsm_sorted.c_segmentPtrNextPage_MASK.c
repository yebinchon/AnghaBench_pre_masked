
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pPg; scalar_t__ pSeg; } ;
typedef TYPE_1__ SegmentPtr ;
typedef int Page ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,int,int **) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(
  SegmentPtr *VAR_1,
  int VAR_2
){
  Page *VAR_3;
  int VAR_4;

  FUNC_0( VAR_2==1 || VAR_2==-1 );
  FUNC_0( VAR_1->pPg );
  FUNC_0( VAR_1->pSeg || VAR_2>0 );

  VAR_4 = FUNC_1(VAR_1->pSeg, VAR_1->pPg, VAR_2, &VAR_3);
  FUNC_0( VAR_4==VAR_0 || VAR_3==0 );
  FUNC_2(VAR_1, VAR_3);
  return VAR_4;
}
