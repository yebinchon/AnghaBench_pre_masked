
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ iNode; } ;
typedef TYPE_1__ RtreeNode ;
typedef int RtreeCell ;
typedef int Rtree ;


 int FUNC_0 (int *,int *,int,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,int,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_5(Rtree *VAR_1, RtreeNode *VAR_2){
  int VAR_3;
  int VAR_4 = VAR_0;
  int VAR_5 = FUNC_1(VAR_2);

  for(VAR_3=0; VAR_4==VAR_0 && VAR_3<VAR_5; VAR_3++){
    RtreeNode *VAR_6;
    RtreeCell VAR_7;
    FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_7);




    VAR_4 = FUNC_0(VAR_1, &VAR_7, (int)VAR_2->iNode, &VAR_6);
    if( VAR_4==VAR_0 ){
      int VAR_8;
      VAR_4 = FUNC_4(VAR_1, VAR_6, &VAR_7, (int)VAR_2->iNode);
      VAR_8 = FUNC_3(VAR_1, VAR_6);
      if( VAR_4==VAR_0 ){
        VAR_4 = VAR_8;
      }
    }
  }
  return VAR_4;
}
