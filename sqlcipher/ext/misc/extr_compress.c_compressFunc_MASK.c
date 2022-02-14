
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned long*,unsigned char const*,unsigned int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,unsigned char*,unsigned long,int (*) (unsigned char*)) ;
 unsigned char* FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const unsigned char *VAR_4;
  unsigned char *VAR_5;
  unsigned int VAR_6;
  unsigned long int VAR_7;
  unsigned char VAR_8[8];
  int VAR_9;
  int VAR_10, VAR_11;

  VAR_4 = FUNC_4(VAR_3[0]);
  VAR_6 = FUNC_5(VAR_3[0]);
  VAR_7 = 13 + VAR_6 + (VAR_6+999)/1000;
  VAR_5 = FUNC_2( VAR_7+5 );
  for(VAR_10=4; VAR_10>=0; VAR_10--){
    VAR_8[VAR_10] = (VAR_6 >> (7*(4-VAR_10)))&0x7f;
  }
  for(VAR_10=0; VAR_10<4 && VAR_8[VAR_10]==0; VAR_10++){}
  for(VAR_11=0; VAR_10<=4; VAR_10++, VAR_11++) VAR_5[VAR_11] = VAR_8[VAR_10];
  VAR_5[VAR_11-1] |= 0x80;
  VAR_9 = FUNC_0(&VAR_5[VAR_11], &VAR_7, VAR_4, VAR_6);
  if( VAR_9==VAR_0 ){
    FUNC_3(VAR_1, VAR_5, VAR_7+VAR_11, FUNC_1);
  }else{
    FUNC_1(VAR_5);
  }
}
