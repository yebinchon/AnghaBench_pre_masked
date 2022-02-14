
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2(
  const unsigned char *VAR_0,
  int VAR_1,
  unsigned int *VAR_2,
  unsigned int *VAR_3
){
  int VAR_4;
  unsigned int VAR_5 = 0;
  unsigned char VAR_6;
  for(VAR_4=1; VAR_4<VAR_1 && (VAR_6 = VAR_0[VAR_4])!=']'; VAR_4++){
    if( !FUNC_1(VAR_6) ) return 0;
    VAR_5 = VAR_5*16 + FUNC_0(VAR_6);
  }
  if( VAR_4==VAR_1 ) return 0;
  *VAR_2 = 2*VAR_5;
  *VAR_3 += VAR_4;
  return 1;
}
