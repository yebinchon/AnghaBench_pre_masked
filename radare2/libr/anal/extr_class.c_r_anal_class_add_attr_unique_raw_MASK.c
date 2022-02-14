
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int attr_id ;
typedef scalar_t__ RAnalClassErr ;
typedef int RAnalClassAttrType ;
typedef int RAnal ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,int ,char*,char const*) ;
 int FUNC_1 (int *,char const*,int ,char*,int) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static RAnalClassErr FUNC_3(RAnal *VAR_1, const char *VAR_2, RAnalClassAttrType VAR_3, const char *VAR_4, char *VAR_5, size_t VAR_6) {
 char VAR_7[16];
 FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_7, sizeof(VAR_7));

 RAnalClassErr VAR_8 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_7, VAR_4);
 if (VAR_8 != VAR_0) {
  return VAR_8;
 }

 if (VAR_5) {
  FUNC_2 (VAR_5, VAR_7, VAR_6);
 }

 return VAR_0;
}
