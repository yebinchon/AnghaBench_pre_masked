
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RAsmOp ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int *,int*,int) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,char,char) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static inline int FUNC_8(RAsmOp *VAR_0, char *VAR_1) {
 int VAR_2, VAR_3 = 0;
 FUNC_4 (VAR_1, ',', ' ');
 VAR_3 = FUNC_5 (VAR_1);
 FUNC_7 (VAR_1);
 ut8 *VAR_4 = FUNC_1 (VAR_3);
 if (!VAR_4) {
  return 0;
 }
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  const char *VAR_5 = FUNC_6 (VAR_1, VAR_2);
  int VAR_6 = (int)FUNC_3 (((void*)0), VAR_5);
  VAR_4[VAR_2] = VAR_6;
 }
 FUNC_2 (VAR_0, VAR_4, VAR_3);
 FUNC_0 (VAR_4);
 return VAR_3;
}
