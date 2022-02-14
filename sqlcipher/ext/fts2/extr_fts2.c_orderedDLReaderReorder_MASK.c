
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OrderedDLReader ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(OrderedDLReader *VAR_0, int VAR_1){
  while( VAR_1>1 && FUNC_0(VAR_0, VAR_0+1)>0 ){
    OrderedDLReader VAR_2 = VAR_0[0];
    VAR_0[0] = VAR_0[1];
    VAR_0[1] = VAR_2;
    VAR_1--;
    VAR_0++;
  }
}
