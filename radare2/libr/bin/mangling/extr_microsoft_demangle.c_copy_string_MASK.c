
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type_str_len; int curr_pos; char* type_str; } ;
typedef TYPE_1__ STypeCodeStr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 unsigned int FUNC_4 (char*) ;

int FUNC_5(STypeCodeStr *VAR_0, char *VAR_1, unsigned int VAR_2) {
 int VAR_3 = 1;
 int VAR_4 = (VAR_2 == 0 && VAR_1) ? FUNC_4 (VAR_1) : VAR_2;
 int VAR_5 = VAR_0->type_str_len - VAR_0->curr_pos - 1;

 if (VAR_4 > VAR_5) {
  return 0;
 }
 if (VAR_5 > VAR_4) {
  int VAR_6 = VAR_0->type_str_len + (VAR_4 << 1) + 1;
  if (VAR_6 < 1) {
   FUNC_0 (VAR_0->type_str);
   goto copy_string_err;
  }
  VAR_0->type_str_len = VAR_6;
  char *VAR_7 = (char *) FUNC_3 (VAR_0->type_str, VAR_6);
  if (!VAR_7) {
   FUNC_0 (VAR_0->type_str);
   goto copy_string_err;
  }
  VAR_0->type_str = VAR_7;
  if (!VAR_0->type_str) {
   VAR_3 = 0;
   goto copy_string_err;
  }
 }

 char *VAR_8 = VAR_0->type_str + VAR_0->curr_pos;
 if (!VAR_8) {
  return 0;
 }

 if (VAR_1) {
  FUNC_2 (VAR_8, VAR_1, VAR_4 + 1);
 } else {
  FUNC_1 (VAR_8, 0, VAR_4);
 }
 VAR_0->curr_pos += VAR_4;
 if (VAR_0->type_str) {
  VAR_0->type_str[VAR_0->curr_pos] = '\0';
 }

copy_string_err:
 return VAR_3;
}
