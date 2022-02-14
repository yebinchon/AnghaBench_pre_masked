
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_2__ {char* input; int line_number; int char_number; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_3 (char const*) ;
 int VAR_1 ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, const char *VAR_3, const char *VAR_4, va_list VAR_5)
{
 FUNC_0(VAR_1, "%s:%d:%d: %s: ", VAR_0.input ? VAR_0.input : "stdin",
                VAR_0.line_number, VAR_0.char_number, VAR_3);
 FUNC_4(VAR_1, VAR_2, VAR_5);
 FUNC_0(VAR_1, "\n");
}
