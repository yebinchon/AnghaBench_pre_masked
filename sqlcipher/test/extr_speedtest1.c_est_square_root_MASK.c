
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0){
  int VAR_1 = VAR_0/2;
  int VAR_2;
  int VAR_3;
  for(VAR_3=0; VAR_1>0 && VAR_3<10; VAR_3++){
    VAR_2 = (VAR_1 + VAR_0/VAR_1)/2;
    if( VAR_2==VAR_1 ) break;
    VAR_1 = VAR_2;
  }
  return VAR_1;
}
