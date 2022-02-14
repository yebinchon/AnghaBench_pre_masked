
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(const char *VAR_1, int VAR_2){
  int VAR_3 = 0;
  FUNC_0( VAR_2>=0 );
  while( VAR_2 > 0 ){
    VAR_3 = (VAR_3<<3) ^ VAR_3 ^ VAR_0[(unsigned char)*VAR_1++];
    VAR_2--;
  }
  return VAR_3;
}
