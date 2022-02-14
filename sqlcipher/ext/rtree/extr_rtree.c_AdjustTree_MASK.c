
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef int RtreeCell ;
typedef int Rtree ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_6(
  Rtree *VAR_2,
  RtreeNode *VAR_3,
  RtreeCell *VAR_4
){
  RtreeNode *VAR_5 = VAR_3;
  int VAR_6 = 0;
  while( VAR_5->pParent ){
    RtreeNode *VAR_7 = VAR_5->pParent;
    RtreeCell VAR_8;
    int VAR_9;

    if( (++VAR_6)>1000 || FUNC_5(VAR_2, VAR_5, &VAR_9) ){
      FUNC_0(VAR_2);
      return VAR_0;
    }

    FUNC_3(VAR_2, VAR_7, VAR_9, &VAR_8);
    if( !FUNC_1(VAR_2, &VAR_8, VAR_4) ){
      FUNC_2(VAR_2, &VAR_8, VAR_4);
      FUNC_4(VAR_2, VAR_7, &VAR_8, VAR_9);
    }

    VAR_5 = VAR_7;
  }
  return VAR_1;
}
