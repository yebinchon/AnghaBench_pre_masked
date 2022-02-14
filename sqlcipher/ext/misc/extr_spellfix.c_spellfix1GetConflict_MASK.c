
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const char *FUNC_2(sqlite3 *VAR_5){
  static const char *VAR_6[] = {

    "ROLLBACK", "IGNORE", "ABORT", "ABORT", "REPLACE"
  };
  int VAR_7 = FUNC_1(VAR_5);

  FUNC_0( VAR_7==VAR_4 || VAR_7==VAR_2
       || VAR_7==VAR_1 || VAR_7==VAR_0
       || VAR_7==VAR_3
  );
  FUNC_0( VAR_4==1 );
  FUNC_0( VAR_2==2 );
  FUNC_0( VAR_1==3 );
  FUNC_0( VAR_0==4 );
  FUNC_0( VAR_3==5 );

  return VAR_6[VAR_7-1];
}
