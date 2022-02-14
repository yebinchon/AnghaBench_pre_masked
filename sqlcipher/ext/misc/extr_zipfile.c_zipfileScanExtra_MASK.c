
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_0, int VAR_1, u32 *VAR_2){
  int VAR_3 = 0;
  u8 *VAR_4 = VAR_0;
  u8 *VAR_5 = &VAR_0[VAR_1];

  while( VAR_4<VAR_5 ){
    u16 VAR_6 = FUNC_1(VAR_4);
    u16 VAR_7 = FUNC_1(VAR_4);

    switch( VAR_6 ){
      case 128: {
        u8 VAR_8 = VAR_4[0];
        if( VAR_8 & 0x01 ){
          *VAR_2 = FUNC_0(&VAR_4[1]);
          VAR_3 = 1;
        }
        break;
      }
    }

    VAR_4 += VAR_7;
  }
  return VAR_3;
}
