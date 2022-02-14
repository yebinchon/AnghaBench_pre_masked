
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,char const*) ;
 int FUNC_1 (struct strbuf*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_1, const char *VAR_2, int *VAR_3)
{
 if (*VAR_3 >= 75) {
  FUNC_1(VAR_1, "\n\t\t\t ");
  *VAR_3 = VAR_0;
 }
 FUNC_0(VAR_1, " %s", VAR_2);
 *VAR_3 += FUNC_2(VAR_2) + 1;
}
