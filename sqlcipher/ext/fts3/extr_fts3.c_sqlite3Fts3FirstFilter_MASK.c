
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 int FUNC_0 (int ,char**) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (char*,int ) ;

int FUNC_3(
  sqlite3_int64 VAR_0,
  char *VAR_1,
  int VAR_2,
  char *VAR_3
){
  int VAR_4 = 0;
  int VAR_5 = 0;
  char *VAR_6 = VAR_1;
  char *VAR_7 = &VAR_1[VAR_2];

  if( *VAR_6!=0x01 ){
    if( *VAR_6==0x02 ){
      VAR_4 += FUNC_2(&VAR_3[VAR_4], VAR_0);
      VAR_3[VAR_4++] = 0x02;
      VAR_5 = 1;
    }
    FUNC_0(0, &VAR_6);
  }

  while( VAR_6<VAR_7 ){
    sqlite3_int64 VAR_8;
    VAR_6++;
    VAR_6 += FUNC_1(VAR_6, &VAR_8);
    if( *VAR_6==0x02 ){
      if( VAR_5==0 ){
        VAR_4 += FUNC_2(&VAR_3[VAR_4], VAR_0);
        VAR_5 = 1;
      }
      VAR_3[VAR_4++] = 0x01;
      VAR_4 += FUNC_2(&VAR_3[VAR_4], VAR_8);
      VAR_3[VAR_4++] = 0x02;
    }
    FUNC_0(0, &VAR_6);
  }
  if( VAR_5 ){
    VAR_3[VAR_4++] = 0x00;
  }

  return VAR_4;
}
