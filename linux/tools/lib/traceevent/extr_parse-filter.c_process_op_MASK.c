
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tep_filter_op_type { ____Placeholder_tep_filter_op_type } tep_filter_op_type ;
typedef enum tep_filter_exp_type { ____Placeholder_tep_filter_exp_type } tep_filter_exp_type ;
typedef enum tep_filter_cmp_type { ____Placeholder_tep_filter_cmp_type } tep_filter_cmp_type ;
typedef enum op_type { ____Placeholder_op_type } op_type ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum op_type FUNC_1(const char *VAR_29,
          enum tep_filter_op_type *VAR_30,
          enum tep_filter_cmp_type *VAR_31,
          enum tep_filter_exp_type *VAR_32)
{
 *VAR_30 = VAR_27;
 *VAR_32 = VAR_20;
 *VAR_31 = VAR_11;

 if (FUNC_0(VAR_29, "&&") == 0)
  *VAR_30 = VAR_26;
 else if (FUNC_0(VAR_29, "||") == 0)
  *VAR_30 = VAR_28;
 else if (FUNC_0(VAR_29, "!") == 0)
  return VAR_4;

 if (*VAR_30 != VAR_27)
  return VAR_0;


 if (FUNC_0(VAR_29, "+") == 0) {
  *VAR_32 = VAR_14;
 } else if (FUNC_0(VAR_29, "-") == 0) {
  *VAR_32 = VAR_24;
 } else if (FUNC_0(VAR_29, "*") == 0) {
  *VAR_32 = VAR_19;
 } else if (FUNC_0(VAR_29, "/") == 0) {
  *VAR_32 = VAR_16;
 } else if (FUNC_0(VAR_29, "%") == 0) {
  *VAR_32 = VAR_18;
 } else if (FUNC_0(VAR_29, ">>") == 0) {
  *VAR_32 = VAR_23;
 } else if (FUNC_0(VAR_29, "<<") == 0) {
  *VAR_32 = VAR_17;
 } else if (FUNC_0(VAR_29, "&") == 0) {
  *VAR_32 = VAR_15;
 } else if (FUNC_0(VAR_29, "|") == 0) {
  *VAR_32 = VAR_22;
 } else if (FUNC_0(VAR_29, "^") == 0) {
  *VAR_32 = VAR_25;
 } else if (FUNC_0(VAR_29, "~") == 0)
  *VAR_32 = VAR_21;

 if (*VAR_32 != VAR_20)
  return VAR_2;


 if (FUNC_0(VAR_29, "==") == 0)
  *VAR_31 = VAR_5;
 else if (FUNC_0(VAR_29, "!=") == 0)
  *VAR_31 = VAR_10;
 else if (FUNC_0(VAR_29, "<") == 0)
  *VAR_31 = VAR_9;
 else if (FUNC_0(VAR_29, ">") == 0)
  *VAR_31 = VAR_7;
 else if (FUNC_0(VAR_29, "<=") == 0)
  *VAR_31 = VAR_8;
 else if (FUNC_0(VAR_29, ">=") == 0)
  *VAR_31 = VAR_6;
 else if (FUNC_0(VAR_29, "=~") == 0)
  *VAR_31 = VAR_13;
 else if (FUNC_0(VAR_29, "!~") == 0)
  *VAR_31 = VAR_12;
 else
  return VAR_3;

 return VAR_1;
}
