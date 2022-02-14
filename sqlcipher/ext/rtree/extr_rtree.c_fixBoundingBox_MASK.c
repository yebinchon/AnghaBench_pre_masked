
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int iRowid; } ;
struct TYPE_12__ {int iNode; struct TYPE_12__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ RtreeCell ;
typedef int Rtree ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (int *,TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_5(Rtree *VAR_1, RtreeNode *VAR_2){
  RtreeNode *VAR_3 = VAR_2->pParent;
  int VAR_4 = VAR_0;
  if( VAR_3 ){
    int VAR_5;
    int VAR_6 = FUNC_0(VAR_2);
    RtreeCell VAR_7;
    FUNC_2(VAR_1, VAR_2, 0, &VAR_7);
    for(VAR_5=1; VAR_5<VAR_6; VAR_5++){
      RtreeCell VAR_8;
      FUNC_2(VAR_1, VAR_2, VAR_5, &VAR_8);
      FUNC_1(VAR_1, &VAR_7, &VAR_8);
    }
    VAR_7.iRowid = VAR_2->iNode;
    VAR_4 = FUNC_4(VAR_1, VAR_2, &VAR_5);
    if( VAR_4==VAR_0 ){
      FUNC_3(VAR_1, VAR_3, &VAR_7, VAR_5);
      VAR_4 = FUNC_5(VAR_1, VAR_3);
    }
  }
  return VAR_4;
}
