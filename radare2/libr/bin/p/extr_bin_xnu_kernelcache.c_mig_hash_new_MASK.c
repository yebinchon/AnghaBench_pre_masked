
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HtPP ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int *,char const*,char const*) ;
 int * FUNC_1 () ;

__attribute__((used)) static HtPP *FUNC_2() {
 HtPP *VAR_2 = FUNC_1 ();
 if (!VAR_2) {
  return ((void*)0);
 }

 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 += 2) {
  const char *VAR_4 = VAR_1[VAR_3];
  const char *VAR_5 = VAR_1[VAR_3+1];
  FUNC_0 (VAR_2, VAR_4, VAR_5);
 }

 return VAR_2;
}
