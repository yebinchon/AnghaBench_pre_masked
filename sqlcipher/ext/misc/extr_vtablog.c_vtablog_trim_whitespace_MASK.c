
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0){
  size_t VAR_1 = FUNC_1(VAR_0);
  while( VAR_1>0 && FUNC_0((unsigned char)VAR_0[VAR_1]) ) VAR_1--;
  VAR_0[VAR_1] = 0;
}
