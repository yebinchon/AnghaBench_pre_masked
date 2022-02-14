
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum field_op_id { ____Placeholder_field_op_id } field_op_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_4)
{
 enum field_op_id VAR_5 = VAR_1;
 char *VAR_6;

 VAR_6 = FUNC_0(VAR_4, "+-");
 if (!VAR_6)
  return VAR_1;

 switch (*VAR_6) {
 case '-':
  if (*VAR_4 == '-')
   VAR_5 = VAR_3;
  else
   VAR_5 = VAR_0;
  break;
 case '+':
  VAR_5 = VAR_2;
  break;
 default:
  break;
 }

 return VAR_5;
}
