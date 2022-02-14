
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;


 scalar_t__ FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int *,void*,int,void**,int*) ;
 int FUNC_2 (int) ;

void FUNC_3(
  TestDb *VAR_0,
  TestDb *VAR_1,
  void *VAR_2, int VAR_3,
  int *VAR_4
){
  int VAR_5;
  void *VAR_6;
  void *VAR_7;
  int VAR_8;
  int VAR_9;

  static int VAR_10 = 0;
  VAR_10++;

  VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3, &VAR_6, &VAR_8);
  FUNC_2(VAR_5);

  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_7, &VAR_9);
  FUNC_2(VAR_5);

  if( *VAR_4==0
   && (VAR_8!=VAR_9 || (VAR_8>0 && FUNC_0(VAR_6, VAR_7, VAR_8)))
  ){
    FUNC_2(1);
  }
}
