
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int argc; } ;
struct option {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (struct option*) ;
 int FUNC_3 (struct option const*,struct parse_opt_ctx_t*) ;
 struct option* FUNC_4 (struct option const*) ;
 int FUNC_5 (struct option const*,int) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (char**) ;

__attribute__((used)) static int FUNC_8(const char * const *VAR_5,
           const struct option *VAR_6, int VAR_7,
           struct parse_opt_ctx_t *VAR_8)
{
 struct option *VAR_9;

 if (!VAR_5)
  return VAR_2;

 FUNC_6();

 if (VAR_3) {
  FUNC_0(VAR_4, "  Error: %s\n", VAR_3);
  FUNC_7(&VAR_3);
 }

 FUNC_0(VAR_4, "\n Usage: %s\n", *VAR_5++);
 while (*VAR_5 && **VAR_5)
  FUNC_0(VAR_4, "    or: %s\n", *VAR_5++);
 while (*VAR_5) {
  FUNC_0(VAR_4, "%s%s\n",
    **VAR_5 ? "    " : "",
    *VAR_5);
  VAR_5++;
 }

 if (VAR_6->type != VAR_1)
  FUNC_1('\n', VAR_4);

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  VAR_6 = VAR_9;

 for ( ; VAR_6->type != VAR_0; VAR_6++) {
  if (VAR_8 && VAR_8->argc > 1 && !FUNC_3(VAR_6, VAR_8))
   continue;
  FUNC_5(VAR_6, VAR_7);
 }

 FUNC_1('\n', VAR_4);

 FUNC_2(VAR_9);

 return VAR_2;
}
