
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {int iReinsertHeight; } ;
struct TYPE_27__ {int iRowid; } ;
struct TYPE_26__ {int iNode; struct TYPE_26__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ RtreeCell ;
typedef TYPE_3__ Rtree ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_9(
  Rtree *VAR_1,
  RtreeNode *VAR_2,
  RtreeCell *VAR_3,
  int VAR_4
){
  int VAR_5 = VAR_0;
  if( VAR_4>0 ){
    RtreeNode *VAR_6 = FUNC_3(VAR_1, VAR_3->iRowid);
    if( VAR_6 ){
      FUNC_6(VAR_1, VAR_6->pParent);
      FUNC_5(VAR_2);
      VAR_6->pParent = VAR_2;
    }
  }
  if( FUNC_4(VAR_1, VAR_2, VAR_3) ){
    if( VAR_4<=VAR_1->iReinsertHeight || VAR_2->iNode==1){
      VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
    }else{
      VAR_1->iReinsertHeight = VAR_4;
      VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    }
  }else{
    VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
    if( VAR_5==VAR_0 ){
      if( VAR_4==0 ){
        VAR_5 = FUNC_8(VAR_1, VAR_3->iRowid, VAR_2->iNode);
      }else{
        VAR_5 = FUNC_7(VAR_1, VAR_3->iRowid, VAR_2->iNode);
      }
    }
  }
  return VAR_5;
}
