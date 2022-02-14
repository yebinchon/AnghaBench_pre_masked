
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_uint64 ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;
 double FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  union {
    sqlite3_uint64 i;
    double r;
    unsigned char x[8];
  } VAR_4;
  char VAR_5[20];
  int VAR_6;
  int VAR_7;
  VAR_4.i = 1;
  VAR_7 = VAR_4.x[0]==0;
  VAR_4.r = FUNC_1(VAR_3[0]);
  for(VAR_6=0; VAR_6<8; VAR_6++){
    if( VAR_7 ){
      VAR_5[VAR_6*2] = "0123456789abcdef"[VAR_4.x[VAR_6]>>4];
      VAR_5[VAR_6*2+1] = "0123456789abcdef"[VAR_4.x[VAR_6]&0xf];
    }else{
      VAR_5[14-VAR_6*2] = "0123456789abcdef"[VAR_4.x[VAR_6]>>4];
      VAR_5[14-VAR_6*2+1] = "0123456789abcdef"[VAR_4.x[VAR_6]&0xf];
    }
  }
  VAR_5[16] = 0;
  FUNC_0(VAR_1, VAR_5, -1, VAR_0);
}
