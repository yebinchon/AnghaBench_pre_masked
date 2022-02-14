
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int*) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, int *VAR_2){
  u8 VAR_3 = VAR_1[0];
  switch( VAR_3 ){
    case 0x00:
    case 0x05:
      *VAR_2 = 1;
      break;

    case 0x01:
    case 0x02:
      *VAR_2 = 9;
      break;

    case 0x03:
    case 0x04: {
      int VAR_4;
      int VAR_5;
      VAR_5 = FUNC_1(&VAR_1[1], &VAR_4);
      *VAR_2 = 1 + VAR_5 + VAR_4;
      break;
    }

    default:
      return FUNC_0();
  }
  return VAR_0;
}
