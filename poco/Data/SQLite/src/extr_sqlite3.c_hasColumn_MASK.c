
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ i16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const i16 *VAR_0, int VAR_1, int VAR_2){
  while( VAR_1-- > 0 ){
    FUNC_0( VAR_0[0]>=0 );
    if( VAR_2==*(VAR_0++) ){
      return 1;
    }
  }
  return 0;
}
