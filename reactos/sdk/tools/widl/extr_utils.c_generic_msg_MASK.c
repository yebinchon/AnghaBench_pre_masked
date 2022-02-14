
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {char* input_name; int line_number; scalar_t__ near_text; } ;
typedef TYPE_1__ loc_info_t ;


 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*,int ) ;
 scalar_t__ VAR_1 ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(const loc_info_t *VAR_2, const char *VAR_3, const char *VAR_4, va_list VAR_5)
{
 FUNC_0(VAR_0, "%s:%d: %s: ", VAR_2->input_name, VAR_2->line_number, VAR_4);
 FUNC_3(VAR_0, VAR_3, VAR_5);

 if (VAR_1)
 {
  char *VAR_6;
  if(VAR_2->near_text)
  {
   VAR_6 = FUNC_4(VAR_2->near_text);
   FUNC_2(VAR_6);
   FUNC_0(VAR_0, " near '%s'", VAR_6);
   FUNC_1(VAR_6);
  }
 }
}
