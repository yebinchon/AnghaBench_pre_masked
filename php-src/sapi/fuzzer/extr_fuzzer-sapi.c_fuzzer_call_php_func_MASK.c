
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(const char *VAR_0, int VAR_1, char **VAR_2) {
 zval VAR_3[VAR_1];
 int VAR_4;

 for(VAR_4=0;VAR_4<VAR_1;VAR_4++) {
  FUNC_0(&VAR_3[VAR_4], VAR_2[VAR_4]);
 }

 FUNC_2(VAR_0, VAR_1, VAR_3);

 for(VAR_4=0;VAR_4<VAR_1;VAR_4++) {
  FUNC_3(&VAR_3[VAR_4]);
  FUNC_1(&VAR_3[VAR_4]);
 }
}
