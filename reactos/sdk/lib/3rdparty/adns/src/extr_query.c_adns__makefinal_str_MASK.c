
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adns_query ;


 char* FUNC_0 (int ,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*) ;

void FUNC_3(adns_query VAR_0, char **VAR_1) {
  int VAR_2;
  char *VAR_3, *VAR_4;

  VAR_3= *VAR_1;
  if (!VAR_3) return;
  VAR_2= FUNC_2(VAR_3)+1;
  VAR_4= FUNC_0(VAR_0, (size_t) VAR_2);
  FUNC_1(VAR_4,VAR_3,(size_t) VAR_2);
  *VAR_1= VAR_4;
}
