
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type_str_len; char* type_str; scalar_t__ curr_pos; } ;
typedef TYPE_1__ STypeCodeStr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(STypeCodeStr *VAR_1) {



 VAR_1->type_str_len = 1024;

 VAR_1->type_str = (char *) FUNC_0 (1024, sizeof (char));
 if (!VAR_1->type_str) {
  return 0;
 }
 FUNC_1 (VAR_1->type_str, 0, 1024 * sizeof(char));

 VAR_1->curr_pos = 0;


 return 1;

}
