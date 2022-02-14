
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(
  unsigned int *VAR_0,
  int VAR_1,
  int VAR_2,
  int VAR_3
){
  unsigned int VAR_4;
  FUNC_0( VAR_3>=0 );
  FUNC_0( VAR_3<10000 );
  VAR_4 = VAR_0[VAR_2] + VAR_3;
  if( VAR_4<VAR_0[VAR_1] ) VAR_0[VAR_1] = VAR_4;
}
