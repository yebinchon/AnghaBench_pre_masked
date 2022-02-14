
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char* const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;

const char *FUNC_2(int VAR_6){
  static char * const VAR_7[] = {
    "delete", "persist", "off", "truncate", "memory"

     , "wal"

  };
  FUNC_1( VAR_0==0 );
  FUNC_1( VAR_3==1 );
  FUNC_1( VAR_2==2 );
  FUNC_1( VAR_4==3 );
  FUNC_1( VAR_1==4 );
  FUNC_1( VAR_5==5 );
  FUNC_1( VAR_6>=0 && VAR_6<=FUNC_0(VAR_7) );

  if( VAR_6==FUNC_0(VAR_7) ) return 0;
  return VAR_7[VAR_6];
}
