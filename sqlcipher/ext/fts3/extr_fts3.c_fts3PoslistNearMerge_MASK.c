
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char**) ;
 int FUNC_1 (char**,char**,char**) ;
 int FUNC_2 (char**,int,int,int ,char**,char**) ;

__attribute__((used)) static int FUNC_3(
  char **VAR_0,
  char *VAR_1,
  int VAR_2,
  int VAR_3,
  char **VAR_4,
  char **VAR_5
){
  char *VAR_6 = *VAR_4;
  char *VAR_7 = *VAR_5;

  char *VAR_8 = VAR_1;
  char *VAR_9;
  char *VAR_10;
  int VAR_11 = 1;

  FUNC_2(&VAR_8, VAR_2, 0, 0, VAR_4, VAR_5);
  VAR_10 = VAR_9 = VAR_8;
  *VAR_4 = VAR_6;
  *VAR_5 = VAR_7;
  FUNC_2(&VAR_9, VAR_3, 1, 0, VAR_5, VAR_4);
  if( VAR_8!=VAR_1 && VAR_9!=VAR_10 ){
    FUNC_1(VAR_0, &VAR_1, &VAR_10);
  }else if( VAR_8!=VAR_1 ){
    FUNC_0(VAR_0, &VAR_1);
  }else if( VAR_9!=VAR_10 ){
    FUNC_0(VAR_0, &VAR_10);
  }else{
    VAR_11 = 0;
  }

  return VAR_11;
}
