
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const char **VAR_1, int *VAR_2){
  const char *VAR_3 = VAR_0;
  int VAR_4;


  while( FUNC_0(*VAR_3) ){
    VAR_3++;
  }


  *VAR_1 = VAR_3;
  VAR_4 = 0;
  while( (VAR_3[VAR_4]>='a' && VAR_3[VAR_4]<='z') || (VAR_3[VAR_4]>='A' && VAR_3[VAR_4]<='Z') ) VAR_4++;
  *VAR_2 = VAR_4;
}
