
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
  void *VAR_1, int VAR_2,
  void *VAR_3, int VAR_4,
  int *VAR_5
){
  if( *VAR_5==0 ){
    void *VAR_6;
    int VAR_7;
    int VAR_8;

    static int VAR_9 = 0; VAR_9++;

    VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_6, &VAR_7);
    FUNC_2(VAR_8);
    if( VAR_8==0 && (VAR_4!=VAR_7 || (VAR_4>0 && FUNC_0(VAR_3, VAR_6, VAR_4))) ){
      FUNC_2(1);
    }
  }
}
