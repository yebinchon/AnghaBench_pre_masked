
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char**) ;
 int FUNC_2 (char*,scalar_t__*) ;

void FUNC_3(
  int VAR_0,
  char *VAR_1,
  int VAR_2,
  char **VAR_3,
  sqlite3_int64 *VAR_4,
  u8 *VAR_5
){
  char *VAR_6 = *VAR_3;

  FUNC_0( VAR_2>0 );
  FUNC_0( *VAR_5==0 );
  FUNC_0( VAR_6 || *VAR_4==0 );
  FUNC_0( !VAR_6 || (VAR_6>=VAR_1 && VAR_6<=&VAR_1[VAR_2]) );

  if( VAR_6==0 ){
    VAR_6 = VAR_1;
    VAR_6 += FUNC_2(VAR_6, VAR_4);
  }else{
    FUNC_1(0, &VAR_6);
    while( VAR_6<&VAR_1[VAR_2] && *VAR_6==0 ) VAR_6++;
    if( VAR_6>=&VAR_1[VAR_2] ){
      *VAR_5 = 1;
    }else{
      sqlite3_int64 VAR_7;
      VAR_6 += FUNC_2(VAR_6, &VAR_7);
      *VAR_4 += ((VAR_0 ? -1 : 1) * VAR_7);
    }
  }

  *VAR_3 = VAR_6;
}
