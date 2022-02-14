
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char*,char) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, char **VAR_2, char **VAR_3){
  struct dstr *VAR_4 = (struct dstr*)VAR_0;
  int VAR_5;
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    if( VAR_2[VAR_5]==0 ){
      FUNC_0(VAR_4, "NULL", ' ');
    }else{
      FUNC_0(VAR_4, VAR_2[VAR_5], ' ');
    }
  }
  return 0;
}
