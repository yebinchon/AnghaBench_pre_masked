
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum criteria_token { ____Placeholder_criteria_token } criteria_token ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static enum criteria_token FUNC_1(char *VAR_15) {
 if (FUNC_0(VAR_15, "app_id") == 0) {
  return VAR_0;
 } else if (FUNC_0(VAR_15, "con_id") == 0) {
  return VAR_2;
 } else if (FUNC_0(VAR_15, "con_mark") == 0) {
  return VAR_3;
 } else if (FUNC_0(VAR_15, "shell") == 0) {
  return VAR_8;
 } else if (FUNC_0(VAR_15, "title") == 0) {
  return VAR_10;
 } else if (FUNC_0(VAR_15, "urgent") == 0) {
  return VAR_11;
 } else if (FUNC_0(VAR_15, "workspace") == 0) {
  return VAR_14;
 } else if (FUNC_0(VAR_15, "tiling") == 0) {
  return VAR_9;
 } else if (FUNC_0(VAR_15, "floating") == 0) {
  return VAR_4;
 }
 return VAR_7;
}
