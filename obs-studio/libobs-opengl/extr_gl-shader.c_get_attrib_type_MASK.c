
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum attrib_type { ____Placeholder_attrib_type } attrib_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_6, enum attrib_type *VAR_7,
       size_t *VAR_8)
{
 if (FUNC_1(VAR_6, "POSITION") == 0) {
  *VAR_7 = VAR_2;

 } else if (FUNC_1(VAR_6, "NORMAL") == 0) {
  *VAR_7 = VAR_1;

 } else if (FUNC_1(VAR_6, "TANGENT") == 0) {
  *VAR_7 = VAR_3;

 } else if (FUNC_1(VAR_6, "COLOR") == 0) {
  *VAR_7 = VAR_0;

 } else if (FUNC_0(VAR_6, "TEXCOORD", 8) == 0) {
  *VAR_7 = VAR_5;
  *VAR_8 = (*(VAR_6 + 8)) - '0';
  return;

 } else if (FUNC_1(VAR_6, "TARGET") == 0) {
  *VAR_7 = VAR_4;
 }

 *VAR_8 = 0;
}
