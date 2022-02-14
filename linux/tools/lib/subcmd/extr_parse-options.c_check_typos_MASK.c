
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ type; char const* long_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, const struct option *VAR_3)
{
 if (FUNC_2(VAR_2) < 3)
  return;

 if (FUNC_3(VAR_2, "no-")) {
  FUNC_1(VAR_1, " Error: did you mean `--%s` (with two dashes ?)\n", VAR_2);
  FUNC_0(129);
 }

 for (; VAR_3->type != VAR_0; VAR_3++) {
  if (!VAR_3->long_name)
   continue;
  if (FUNC_3(VAR_3->long_name, VAR_2)) {
   FUNC_1(VAR_1, " Error: did you mean `--%s` (with two dashes ?)\n", VAR_2);
   FUNC_0(129);
  }
 }
}
