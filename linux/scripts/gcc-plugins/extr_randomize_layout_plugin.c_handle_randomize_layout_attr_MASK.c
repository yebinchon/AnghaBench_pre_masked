
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static tree FUNC_8(tree *VAR_6, tree VAR_7, tree VAR_8, int VAR_9, bool *VAR_10)
{
 tree VAR_11;

 *VAR_10 = 1;
 if (FUNC_1(*VAR_6) == VAR_0) {
  FUNC_5("%qE attribute does not apply to functions (%qF)", VAR_7, *VAR_6);
  return VAR_1;
 }

 if (FUNC_1(*VAR_6) == VAR_2) {
  FUNC_5("%qE attribute does not apply to function parameters (%qD)", VAR_7, *VAR_6);
  return VAR_1;
 }

 if (FUNC_1(*VAR_6) == VAR_5) {
  FUNC_5("%qE attribute does not apply to variables (%qD)", VAR_7, *VAR_6);
  return VAR_1;
 }

 if (FUNC_4(*VAR_6)) {
  VAR_11 = *VAR_6;
 } else {
  FUNC_6(FUNC_1(*VAR_6) == VAR_4);
  VAR_11 = FUNC_2(*VAR_6);
 }

 if (FUNC_1(VAR_11) != VAR_3) {
  FUNC_5("%qE attribute used on %qT applies to struct types only", VAR_7, VAR_11);
  return VAR_1;
 }

 if (FUNC_7(FUNC_0(VAR_7), FUNC_3(VAR_11))) {
  FUNC_5("%qE attribute is already applied to the type %qT", VAR_7, VAR_11);
  return VAR_1;
 }

 *VAR_10 = 0;

 return VAR_1;
}
