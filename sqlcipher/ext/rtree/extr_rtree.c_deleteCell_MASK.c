
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int iNode; struct TYPE_8__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef int Rtree ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 int FUNC_6 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(Rtree *VAR_1, RtreeNode *VAR_2, int VAR_3, int VAR_4){
  RtreeNode *VAR_5;
  int VAR_6;

  if( VAR_0!=(VAR_6 = FUNC_4(VAR_1, VAR_2)) ){
    return VAR_6;
  }




  FUNC_5(VAR_1, VAR_2, VAR_3);






  VAR_5 = VAR_2->pParent;
  FUNC_2( VAR_5 || VAR_2->iNode==1 );
  if( VAR_5 ){
    if( FUNC_0(VAR_2)<FUNC_1(VAR_1) ){
      VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_4);
    }else{
      VAR_6 = FUNC_3(VAR_1, VAR_2);
    }
  }

  return VAR_6;
}
