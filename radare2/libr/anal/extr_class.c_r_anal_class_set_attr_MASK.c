
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAnalClassErr ;
typedef int RAnalClassAttrType ;
typedef int RAnal ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int ,char*,char const*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static RAnalClassErr FUNC_3(RAnal *VAR_1, const char *VAR_2, RAnalClassAttrType VAR_3, const char *VAR_4, const char *VAR_5) {
 char *VAR_6 = FUNC_2 (VAR_2);
 if (!VAR_6) {
  return VAR_0;
 }

 char *VAR_7 = FUNC_2 (VAR_4);
 if (!VAR_7) {
  FUNC_0 (VAR_6);
  return VAR_0;
 }

 RAnalClassErr VAR_8 = FUNC_1 (VAR_1, VAR_6, VAR_3, VAR_7, VAR_5);

 FUNC_0 (VAR_6);
 FUNC_0 (VAR_7);

 return VAR_8;
}
