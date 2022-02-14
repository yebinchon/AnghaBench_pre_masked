
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0, int VAR_1){
  int VAR_2;
  u32 VAR_3;
  VAR_2 = FUNC_0(VAR_0, VAR_3);
  if( VAR_2<VAR_1 ){
    while( 1 ){
      int VAR_4 = FUNC_0(&VAR_0[VAR_2], VAR_3);
      if( (VAR_2 + VAR_4) > VAR_1 ) break;
      VAR_2 += VAR_4;
    }
  }
  return VAR_2;
}
