
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;
 size_t FUNC_3 (char*,int ) ;
 int VAR_0 ;

void FUNC_4(char *VAR_1) {
 size_t VAR_2 = FUNC_2(VAR_1);
 size_t VAR_3 = FUNC_3(VAR_1, VAR_0);
 FUNC_1(VAR_1, &VAR_1[VAR_3], VAR_2 + 1 - VAR_3);

 if (*VAR_1) {
  for (VAR_2 -= VAR_3 + 1; FUNC_0(VAR_1[VAR_2]); --VAR_2) {}
  VAR_1[VAR_2 + 1] = '\0';
 }
}
