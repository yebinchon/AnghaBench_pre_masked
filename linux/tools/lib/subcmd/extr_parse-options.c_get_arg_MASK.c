
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char* opt; int argc; char** argv; } ;
struct option {int flags; scalar_t__ defval; } ;


 int VAR_0 ;
 int FUNC_0 (struct option const*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct parse_opt_ctx_t *VAR_1, const struct option *VAR_2,
     int VAR_3, const char **VAR_4)
{
 const char *VAR_5;

 if (VAR_1->opt) {
  VAR_5 = VAR_1->opt;
  VAR_1->opt = ((void*)0);
 } else if ((VAR_2->flags & VAR_0) && (VAR_1->argc == 1 ||
      **(VAR_1->argv + 1) == '-')) {
  VAR_5 = (const char *)VAR_2->defval;
 } else if (VAR_1->argc > 1) {
  VAR_1->argc--;
  VAR_5 = *++VAR_1->argv;
 } else
  return FUNC_0(VAR_2, "requires a value", VAR_3);
 if (VAR_4)
  *VAR_4 = VAR_5;
 return 0;
}
