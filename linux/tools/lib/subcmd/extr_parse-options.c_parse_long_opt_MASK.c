
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char const** out; char const* opt; int cpidx; } ;
struct option {scalar_t__ type; char* long_name; struct option* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,char*,char*,char*,char*) ;
 int FUNC_1 (struct parse_opt_ctx_t*,struct option const*,int) ;
 int FUNC_2 (struct option const*,char*,int) ;
 char* FUNC_3 (char const*,char*) ;
 int VAR_3 ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;
 scalar_t__ FUNC_7 (char*,char const*) ;

__attribute__((used)) static int FUNC_8(struct parse_opt_ctx_t *VAR_4, const char *VAR_5,
                          const struct option *VAR_6)
{
 const char *VAR_7 = FUNC_4(VAR_5, '=');
 const struct option *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = 0;

 if (!VAR_7)
  VAR_7 = VAR_5 + FUNC_5(VAR_5);

retry:
 for (; VAR_6->type != VAR_1; VAR_6++) {
  const char *VAR_12;
  int VAR_13 = 0;

  if (!VAR_6->long_name)
   continue;

  VAR_12 = FUNC_3(VAR_5, VAR_6->long_name);
  if (VAR_6->type == VAR_0) {
   if (!VAR_12)
    continue;
   if (*VAR_12 == '=')
    return FUNC_2(VAR_6, "takes no value", VAR_13);
   if (*VAR_12)
    continue;
   VAR_4->out[VAR_4->cpidx++] = VAR_5 - 2;
   return 0;
  }
  if (!VAR_12) {
   if (FUNC_7(VAR_6->long_name, "no-")) {






    VAR_12 = FUNC_3(VAR_5, VAR_6->long_name + 3);
    if (VAR_12) {
     VAR_13 |= VAR_2;
     goto match;
    }

    if (FUNC_7(VAR_6->long_name + 3, VAR_5)) {
     VAR_13 |= VAR_2;
     goto is_abbreviated;
    }
   }

   if (!FUNC_6(VAR_6->long_name, VAR_5, VAR_7 - VAR_5)) {
is_abbreviated:
    if (VAR_8) {






     VAR_9 = VAR_8;
     VAR_11 = VAR_10;
    }
    if (!(VAR_13 & VAR_2) && *VAR_7)
     VAR_4->opt = VAR_7 + 1;
    VAR_8 = VAR_6;
    VAR_10 = VAR_13;
    continue;
   }

   if (FUNC_7("no-", VAR_5)) {
    VAR_13 |= VAR_2;
    goto is_abbreviated;
   }

   if (FUNC_6(VAR_5, "no-", 3))
    continue;
   VAR_13 |= VAR_2;
   VAR_12 = FUNC_3(VAR_5 + 3, VAR_6->long_name);

   if (!VAR_12 && FUNC_7(VAR_6->long_name, VAR_5 + 3))
    goto is_abbreviated;
   if (!VAR_12)
    continue;
  }
match:
  if (*VAR_12) {
   if (*VAR_12 != '=')
    continue;
   VAR_4->opt = VAR_12 + 1;
  }
  return FUNC_1(VAR_4, VAR_6, VAR_13);
 }

 if (VAR_9) {
   FUNC_0(VAR_3,
    " Error: Ambiguous option: %s (could be --%s%s or --%s%s)\n",
    VAR_5,
    (VAR_11 & VAR_2) ? "no-" : "",
    VAR_9->long_name,
    (VAR_10 & VAR_2) ? "no-" : "",
    VAR_8->long_name);
   return -1;
 }
 if (VAR_8)
  return FUNC_1(VAR_4, VAR_8, VAR_10);

 if (VAR_6->parent) {
  VAR_6 = VAR_6->parent;
  goto retry;
 }

 return -2;
}
