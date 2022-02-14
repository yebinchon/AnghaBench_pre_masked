
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_parser {int error_list; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 char* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cf_parser *VAR_1, const char *VAR_2)
{
 char *VAR_3 = FUNC_2(&VAR_1->error_list);

 if (VAR_3) {
  FUNC_1(VAR_0, "Errors/warnings for '%s':\n\n%s",
       VAR_2, VAR_3);

  FUNC_0(VAR_3);
 }
}
