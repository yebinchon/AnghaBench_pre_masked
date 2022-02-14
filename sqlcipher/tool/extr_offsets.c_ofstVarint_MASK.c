
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {int* aPage; } ;
typedef TYPE_1__ GState ;



__attribute__((used)) static sqlite3_int64 FUNC_0(GState *VAR_0, int *VAR_1){
  sqlite3_int64 VAR_2 = 0;
  u8 *VAR_3 = &VAR_0->aPage[*VAR_1];
  int VAR_4 = 0;
  while( VAR_4<8 && (VAR_3[0] & 0x80)!=0 ){
    VAR_2 = (VAR_2<<7) + (VAR_3[0] & 0x7f);
    VAR_4++;
    VAR_3++;
  }
  if( VAR_4==8 ){
    VAR_2 = (VAR_2<<8) + VAR_3[0];
  }else{
    VAR_2 = (VAR_2<<7) + VAR_3[0];
  }
  *VAR_1 += (VAR_4+1);
  return VAR_2;
}
