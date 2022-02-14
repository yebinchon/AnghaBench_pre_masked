
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int,int,int,int*,char*,char const*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char* FUNC_4(const char* VAR_0, int VAR_1, int VAR_2) {
 if (!VAR_0) {
  return ((void*)0);
 }
 int VAR_3 = FUNC_3 (VAR_0);
 int* VAR_4 = FUNC_0 (VAR_3 * VAR_1, sizeof (int));
 if (!VAR_4) {
  return ((void*)0);
 }
 char* VAR_5 = FUNC_0 (VAR_2 + 1, sizeof (char));
 if (!VAR_5) {
  FUNC_2 (VAR_4);
  return ((void*)0);
 }
 FUNC_1 (1, 1, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_0);
 FUNC_2 (VAR_4);
 return VAR_5;
}
