
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*,int) ;

__attribute__((used)) static int FUNC_1(
  const u8 **VAR_0,
  int VAR_1,
  int VAR_2
){
  int VAR_3 = 0;
  const u8 *VAR_4 = *VAR_0;
  const u8 *VAR_5 = &VAR_4[VAR_1];

  while( VAR_2>VAR_3 ){





    while( *VAR_4!=0x01 ){
      while( *VAR_4++ & 0x80 );
      if( VAR_4>=VAR_5 ) return 0;
    }
    *VAR_0 = VAR_4++;
    VAR_3 = *VAR_4++;
    if( VAR_3 & 0x80 ){
      VAR_4--;
      VAR_4 += FUNC_0(VAR_4, VAR_3);
    }
  }
  if( VAR_2!=VAR_3 ) return 0;



  while( VAR_4<VAR_5 && *VAR_4!=0x01 ){
    while( *VAR_4++ & 0x80 );
  }

  return VAR_4 - (*VAR_0);
}
