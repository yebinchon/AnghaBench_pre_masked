
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_1){
  int VAR_2, VAR_3;
  int VAR_4;
  const char **VAR_5;
  VAR_5 = FUNC_0(&VAR_4);

  if( FUNC_2(VAR_1, "SQLITE_", 7)==0 ) VAR_1 += 7;
  VAR_3 = FUNC_3(VAR_1);



  for(VAR_2=0; VAR_2<VAR_4; VAR_2++){
    if( FUNC_2(VAR_1, VAR_5[VAR_2], VAR_3)==0
     && FUNC_1((unsigned char)VAR_5[VAR_2][VAR_3])==0
    ){
      return 1;
    }
  }
  return 0;
}
