
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RtreeDValue ;
typedef int RtreeCell ;
typedef int Rtree ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static RtreeDValue FUNC_3(Rtree *VAR_0, RtreeCell *VAR_1, RtreeCell *VAR_2){
  RtreeDValue VAR_3;
  RtreeCell VAR_4;
  FUNC_2(&VAR_4, VAR_1, sizeof(RtreeCell));
  VAR_3 = FUNC_0(VAR_0, &VAR_4);
  FUNC_1(VAR_0, &VAR_4, VAR_2);
  return (FUNC_0(VAR_0, &VAR_4)-VAR_3);
}
