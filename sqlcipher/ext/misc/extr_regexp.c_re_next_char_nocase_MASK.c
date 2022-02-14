
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ReInput ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static unsigned FUNC_1(ReInput *VAR_0){
  unsigned VAR_1 = FUNC_0(VAR_0);
  if( VAR_1>='A' && VAR_1<='Z' ) VAR_1 += 'a' - 'A';
  return VAR_1;
}
