
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,unsigned char*,unsigned long,int (*) (unsigned char*)) ;
 unsigned char* FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*,unsigned long*,unsigned char const*,unsigned int) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const unsigned char *VAR_4;
  unsigned char *VAR_5;
  unsigned int VAR_6;
  unsigned long int VAR_7;
  int VAR_8;
  int VAR_9;

  VAR_4 = FUNC_3(VAR_3[0]);
  VAR_6 = FUNC_4(VAR_3[0]);
  VAR_7 = 0;
  for(VAR_9=0; VAR_9<VAR_6 && VAR_9<5; VAR_9++){
    VAR_7 = (VAR_7<<7) | (VAR_4[VAR_9]&0x7f);
    if( (VAR_4[VAR_9]&0x80)!=0 ){ VAR_9++; break; }
  }
  VAR_5 = FUNC_1( VAR_7+1 );
  VAR_8 = FUNC_5(VAR_5, &VAR_7, &VAR_4[VAR_9], VAR_6-VAR_9);
  if( VAR_8==VAR_0 ){
    FUNC_2(VAR_1, VAR_5, VAR_7, FUNC_0);
  }else{
    FUNC_0(VAR_5);
  }
}
