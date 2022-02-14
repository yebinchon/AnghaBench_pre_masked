
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ i64 ;
typedef int RtreeNode ;
typedef int Rtree ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(
  Rtree *VAR_2,
  RtreeNode *VAR_3,
  i64 VAR_4,
  int *VAR_5
){
  int VAR_6;
  int VAR_7 = FUNC_0(VAR_3);
  FUNC_2( VAR_7<200 );
  for(VAR_6=0; VAR_6<VAR_7; VAR_6++){
    if( FUNC_3(VAR_2, VAR_3, VAR_6)==VAR_4 ){
      *VAR_5 = VAR_6;
      return VAR_1;
    }
  }
  FUNC_1(VAR_2);
  return VAR_0;
}
