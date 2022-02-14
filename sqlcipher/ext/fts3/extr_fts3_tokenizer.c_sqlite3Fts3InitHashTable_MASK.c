
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int Fts3Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char const*,int,int const,void*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;
 int VAR_5 ;

int FUNC_3(
  sqlite3 *VAR_6,
  Fts3Hash *VAR_7,
  const char *VAR_8
){
  int VAR_9 = VAR_2;
  void *VAR_10 = (void *)VAR_7;
  const int VAR_11 = VAR_0;
  if( VAR_2==VAR_9 ){
    VAR_9 = FUNC_0(VAR_6, VAR_8, 1, VAR_11, VAR_10, VAR_3, 0, 0);
  }
  if( VAR_2==VAR_9 ){
    VAR_9 = FUNC_0(VAR_6, VAR_8, 2, VAR_11, VAR_10, VAR_3, 0, 0);
  }
  return VAR_9;
}
