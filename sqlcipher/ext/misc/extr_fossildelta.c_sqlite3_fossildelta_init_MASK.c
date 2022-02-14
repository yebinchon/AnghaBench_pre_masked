
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,char*,int *,int ) ;

int FUNC_3(
  sqlite3 *VAR_6,
  char **VAR_7,
  const sqlite3_api_routines *VAR_8
){
  int VAR_9 = VAR_0;
  FUNC_0(VAR_8);
  (void)VAR_7;
  VAR_9 = FUNC_1(VAR_6, "delta_create", 2, VAR_1, 0,
                               VAR_3, 0, 0);
  if( VAR_9==VAR_0 ){
    VAR_9 = FUNC_1(VAR_6, "delta_apply", 2, VAR_1, 0,
                                 VAR_2, 0, 0);
  }
  if( VAR_9==VAR_0 ){
    VAR_9 = FUNC_1(VAR_6, "delta_output_size", 1, VAR_1, 0,
                                 VAR_4, 0, 0);
  }
  if( VAR_9==VAR_0 ){
    VAR_9 = FUNC_2(VAR_6, "delta_parse", &VAR_5, 0);
  }
  return VAR_9;
}
