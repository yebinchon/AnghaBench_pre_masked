
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct KeyInfo {int dummy; } ;
typedef int Btree ;
typedef int BtCursor ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,struct KeyInfo*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(
  Btree *VAR_1,
  int VAR_2,
  int VAR_3,
  struct KeyInfo *VAR_4,
  BtCursor *VAR_5
){
  int VAR_6;
  if( VAR_2<1 ){
    VAR_6 = VAR_0;
  }else{
    FUNC_1(VAR_1);
    VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_2(VAR_1);
  }
  return VAR_6;
}
