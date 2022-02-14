
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_opt_ctx_t {char** argv; int * opt; } ;
struct option {char const* const long_name; int type; } ;
struct TYPE_2__ {int exec_name; } ;


 int VAR_0 ;




 int FUNC_0 (char**,char const* const) ;
 int FUNC_1 (char**,char*,int ,...) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct parse_opt_ctx_t*) ;
 int FUNC_4 (struct parse_opt_ctx_t*,int,char const**,int) ;
 int FUNC_5 (struct parse_opt_ctx_t*,struct option const*,char const**) ;
 int FUNC_6 (char*,char const* const) ;
 int FUNC_7 (char) ;
 TYPE_1__ VAR_2 ;
 int FUNC_8 (char const**,struct option const*) ;

int FUNC_9(int VAR_3, const char **VAR_4, const struct option *VAR_5,
   const char *const VAR_6[], const char *VAR_7[], int VAR_8)
{
 struct parse_opt_ctx_t VAR_9;


 if (VAR_6 && !VAR_7[0]) {
  char *VAR_10 = ((void*)0);

  FUNC_1(&VAR_10, "%s %s [<options>] {", VAR_2.exec_name, VAR_4[0]);

  for (int VAR_11 = 0; VAR_6[VAR_11]; VAR_11++) {
   if (VAR_11)
    FUNC_0(&VAR_10, "|");
   FUNC_0(&VAR_10, VAR_6[VAR_11]);
  }
  FUNC_0(&VAR_10, "}");

  VAR_7[0] = VAR_10;
 }

 FUNC_4(&VAR_9, VAR_3, VAR_4, VAR_8);
 switch (FUNC_5(&VAR_9, VAR_5, VAR_7)) {
 case 130:
  FUNC_2(129);
 case 131:
  break;
 case 129:
  while (VAR_5->type != VAR_0) {
   if (VAR_5->long_name)
    FUNC_6("--%s ", VAR_5->long_name);
   VAR_5++;
  }
  FUNC_7('\n');
  FUNC_2(130);
 case 128:
  if (VAR_6) {
   for (int VAR_12 = 0; VAR_6[VAR_12]; VAR_12++)
    FUNC_6("%s ", VAR_6[VAR_12]);
  }
  FUNC_7('\n');
  FUNC_2(130);
 default:
  if (VAR_9.argv[0][1] == '-')
   FUNC_1(&VAR_1, "unknown option `%s'",
     VAR_9.argv[0] + 2);
  else
   FUNC_1(&VAR_1, "unknown switch `%c'", *VAR_9.opt);
  FUNC_8(VAR_7, VAR_5);
 }

 return FUNC_3(&VAR_9);
}
