
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_opt_ctx_t {int flags; char const* opt; char** argv; char** out; TYPE_1__* excl_opt; int cpidx; scalar_t__ argc; } ;
struct option {int dummy; } ;
struct TYPE_2__ {char short_name; char* long_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char const*,struct option const*) ;
 int FUNC_1 (struct parse_opt_ctx_t*,char const*,struct option const*) ;
 int FUNC_2 (char const* const*,struct option const*,char const*,int) ;
 int FUNC_3 (struct parse_opt_ctx_t*,struct option const*) ;
 int FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char const* const*,struct option const*,int,struct parse_opt_ctx_t*) ;

__attribute__((used)) static int FUNC_7(struct parse_opt_ctx_t *VAR_9,
         const struct option *VAR_10,
         const char * const VAR_11[])
{
 int VAR_12 = !(VAR_9->flags & VAR_6);
 int VAR_13 = 1;
 const char *VAR_14;


 VAR_9->opt = ((void*)0);

 for (; VAR_9->argc; VAR_9->argc--, VAR_9->argv++) {
  VAR_14 = VAR_9->argv[0];
  if (*VAR_14 != '-' || !VAR_14[1]) {
   if (VAR_9->flags & VAR_7)
    break;
   VAR_9->out[VAR_9->cpidx++] = VAR_9->argv[0];
   continue;
  }

  if (VAR_14[1] != '-') {
   VAR_9->opt = ++VAR_14;
   if (VAR_12 && *VAR_9->opt == 'h') {
    return FUNC_6(VAR_11, VAR_10, 0, VAR_9);
   }
   switch (FUNC_3(VAR_9, VAR_10)) {
   case -1:
    return FUNC_2(VAR_11, VAR_10, VAR_14, 1);
   case -2:
    goto unknown;
   case -3:
    goto exclusive;
   default:
    break;
   }
   if (VAR_9->opt)
    FUNC_0(VAR_14, VAR_10);
   while (VAR_9->opt) {
    if (VAR_12 && *VAR_9->opt == 'h')
     return FUNC_6(VAR_11, VAR_10, 0, VAR_9);
    VAR_14 = VAR_9->opt;
    switch (FUNC_3(VAR_9, VAR_10)) {
    case -1:
     return FUNC_2(VAR_11, VAR_10, VAR_14, 1);
    case -2:





     VAR_9->argv[0] = FUNC_5(VAR_9->opt - 1);
     *(char *)VAR_9->argv[0] = '-';
     goto unknown;
    case -3:
     goto exclusive;
    default:
     break;
    }
   }
   continue;
  }

  if (!VAR_14[2]) {
   if (!(VAR_9->flags & VAR_2)) {
    VAR_9->argc--;
    VAR_9->argv++;
   }
   break;
  }

  VAR_14 += 2;
  if (VAR_12 && !FUNC_4(VAR_14, "help-all"))
   return FUNC_6(VAR_11, VAR_10, 1, VAR_9);
  if (VAR_12 && !FUNC_4(VAR_14, "help"))
   return FUNC_6(VAR_11, VAR_10, 0, VAR_9);
  if (!FUNC_4(VAR_14, "list-opts"))
   return VAR_4;
  if (!FUNC_4(VAR_14, "list-cmds"))
   return VAR_5;
  switch (FUNC_1(VAR_9, VAR_14, VAR_10)) {
  case -1:
   return FUNC_2(VAR_11, VAR_10, VAR_14, 0);
  case -2:
   goto unknown;
  case -3:
   VAR_13 = 0;
   goto exclusive;
  default:
   break;
  }
  continue;
unknown:
  if (!(VAR_9->flags & VAR_3))
   return VAR_8;
  VAR_9->out[VAR_9->cpidx++] = VAR_9->argv[0];
  VAR_9->opt = ((void*)0);
 }
 return VAR_0;

exclusive:
 FUNC_2(VAR_11, VAR_10, VAR_14, VAR_13);
 if ((VAR_13 && VAR_9->excl_opt->short_name) ||
     VAR_9->excl_opt->long_name == ((void*)0)) {
  char VAR_15 = VAR_9->excl_opt->short_name;
  FUNC_2(((void*)0), VAR_10, &VAR_15, 1);
 } else {
  FUNC_2(((void*)0), VAR_10, VAR_9->excl_opt->long_name, 0);
 }
 return VAR_1;
}
