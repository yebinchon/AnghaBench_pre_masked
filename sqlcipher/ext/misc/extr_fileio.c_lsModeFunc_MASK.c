
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  int VAR_5 = FUNC_4(VAR_3[0]);
  char VAR_6[16];
  (void)VAR_2;
  if( FUNC_1(VAR_5) ){
    VAR_6[0] = 'l';
  }else if( FUNC_2(VAR_5) ){
    VAR_6[0] = '-';
  }else if( FUNC_0(VAR_5) ){
    VAR_6[0] = 'd';
  }else{
    VAR_6[0] = '?';
  }
  for(VAR_4=0; VAR_4<3; VAR_4++){
    int VAR_7 = (VAR_5 >> ((2-VAR_4)*3));
    char *VAR_8 = &VAR_6[1 + VAR_4*3];
    VAR_8[0] = (VAR_7 & 0x4) ? 'r' : '-';
    VAR_8[1] = (VAR_7 & 0x2) ? 'w' : '-';
    VAR_8[2] = (VAR_7 & 0x1) ? 'x' : '-';
  }
  VAR_6[10] = '\0';
  FUNC_3(VAR_1, VAR_6, -1, VAR_0);
}
