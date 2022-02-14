
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ state; int err; unsigned int amount_of_read_chars; } ;
struct TYPE_8__ {char* type_str; } ;
typedef TYPE_1__ STypeCodeStr ;
typedef TYPE_2__ SStateInfo ;
typedef int EDemanglerErr ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static EDemanglerErr FUNC_6(char *VAR_6, unsigned int *VAR_7, char **VAR_8) {
 EDemanglerErr VAR_9 = VAR_1;
 char *VAR_10 = FUNC_5(VAR_6);
 STypeCodeStr VAR_11;
 SStateInfo VAR_12;

 if (!FUNC_3(&VAR_11)) {
  VAR_9 = VAR_0;
  goto get_type_code_string_err;
 }

 FUNC_2 (&VAR_12, VAR_10);

 while (VAR_12.state != VAR_4) {
  FUNC_4 (&VAR_12, &VAR_11);
  if (VAR_12.err != VAR_5) {
   *VAR_8 = ((void*)0);
   *VAR_7 = 0;
   switch (VAR_12.err) {
   case 129:
    VAR_9 = VAR_2;
    break;
   case 128:
    VAR_9 = VAR_3;
   default:
    break;
   }
   goto get_type_code_string_err;
  }
 }

 *VAR_8 = FUNC_5 (VAR_11.type_str);
 *VAR_7 = VAR_12.amount_of_read_chars;

get_type_code_string_err:
 FUNC_0 (VAR_10);
 FUNC_1 (&VAR_11);
 return VAR_9;
}
