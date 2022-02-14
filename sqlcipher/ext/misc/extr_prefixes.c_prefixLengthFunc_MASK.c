
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 unsigned char* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  int VAR_3;
  int VAR_4 = 0;
  const unsigned char *VAR_5 = FUNC_2(VAR_2[0]);
  const unsigned char *VAR_6 = FUNC_2(VAR_2[1]);
  int VAR_7 = FUNC_1(VAR_2[0]);
  int VAR_8 = FUNC_1(VAR_2[1]);
  int VAR_9;

  VAR_3 = (VAR_7 > VAR_8 ? VAR_7 : VAR_8);
  for(VAR_9=0; VAR_9<VAR_3; VAR_9++){
    if( VAR_5[VAR_9]!=VAR_6[VAR_9] ) break;
    if( (VAR_5[VAR_9] & 0xC0)!=0x80 ) VAR_4++;
  }

  if( (VAR_5[VAR_9] & 0xC0)==0x80 ) VAR_4--;
  FUNC_0(VAR_0, VAR_4);
}
