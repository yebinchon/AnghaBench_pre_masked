
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** aNode; int * aPoint; } ;
typedef int RtreeSearchPoint ;
typedef int RtreeNode ;
typedef TYPE_1__ RtreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(RtreeCursor *VAR_1, int VAR_2, int VAR_3){
  RtreeSearchPoint VAR_4 = VAR_1->aPoint[VAR_2];
  FUNC_1( VAR_2<VAR_3 );
  VAR_1->aPoint[VAR_2] = VAR_1->aPoint[VAR_3];
  VAR_1->aPoint[VAR_3] = VAR_4;
  VAR_2++; VAR_3++;
  if( VAR_2<VAR_0 ){
    if( VAR_3>=VAR_0 ){
      FUNC_2(FUNC_0(VAR_1), VAR_1->aNode[VAR_2]);
      VAR_1->aNode[VAR_2] = 0;
    }else{
      RtreeNode *VAR_5 = VAR_1->aNode[VAR_2];
      VAR_1->aNode[VAR_2] = VAR_1->aNode[VAR_3];
      VAR_1->aNode[VAR_3] = VAR_5;
    }
  }
}
