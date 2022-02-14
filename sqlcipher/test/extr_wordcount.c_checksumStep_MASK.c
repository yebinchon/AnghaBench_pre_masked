
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (unsigned int*,unsigned char const) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const unsigned char *VAR_3;
  int VAR_4, VAR_5, VAR_6;
  unsigned int *VAR_7;
  VAR_7 = (unsigned*)FUNC_1(VAR_0, sizeof(unsigned int)*5);

  if( VAR_7 ){
    for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
      VAR_4 = FUNC_2(VAR_2[VAR_5]);
      VAR_3 = (const unsigned char*)FUNC_3(VAR_2[VAR_5]);
      if( VAR_3 ) for(VAR_6=0; VAR_6<VAR_4; VAR_6++) FUNC_0(VAR_7, VAR_3[VAR_6]);
      FUNC_0(VAR_7, '|');
    }
    FUNC_0(VAR_7, '\n');
  }
}
