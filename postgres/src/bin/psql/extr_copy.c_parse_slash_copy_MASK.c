
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct copy_options {int from; int program; int psql_inout; void* after_tofrom; int * file; void* before_tofrom; } ;
struct TYPE_2__ {int encoding; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (struct copy_options*) ;
 int FUNC_2 (char*,...) ;
 struct copy_options* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 void* FUNC_5 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,char,int ,int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*,char const*,char*,char*,char,int,int,int ) ;
 int FUNC_10 (void**,char*) ;

__attribute__((used)) static struct copy_options *
FUNC_11(const char *VAR_1)
{
 struct copy_options *VAR_2;
 char *VAR_3;
 const char *VAR_4 = " \t\n\r";
 char VAR_5 = FUNC_6() ? 0 : '\\';

 if (!VAR_1)
 {
  FUNC_2("\\copy: arguments required");
  return ((void*)0);
 }

 VAR_2 = FUNC_3(sizeof(struct copy_options));

 VAR_2->before_tofrom = FUNC_5("");

 VAR_3 = FUNC_9(VAR_1, VAR_4, ".,()", "\"",
     0, 0, 0, VAR_0.encoding);
 if (!VAR_3)
  goto error;


 if (FUNC_4(VAR_3, "binary") == 0)
 {
  FUNC_10(&VAR_2->before_tofrom, VAR_3);
  VAR_3 = FUNC_9(((void*)0), VAR_4, ".,()", "\"",
      0, 0, 0, VAR_0.encoding);
  if (!VAR_3)
   goto error;
 }


 if (VAR_3[0] == '(')
 {
  int VAR_6 = 1;

  while (VAR_6 > 0)
  {
   FUNC_10(&VAR_2->before_tofrom, " ");
   FUNC_10(&VAR_2->before_tofrom, VAR_3);
   VAR_3 = FUNC_9(((void*)0), VAR_4, "()", "\"'",
       VAR_5, 1, 0, VAR_0.encoding);
   if (!VAR_3)
    goto error;
   if (VAR_3[0] == '(')
    VAR_6++;
   else if (VAR_3[0] == ')')
    VAR_6--;
  }
 }

 FUNC_10(&VAR_2->before_tofrom, " ");
 FUNC_10(&VAR_2->before_tofrom, VAR_3);
 VAR_3 = FUNC_9(((void*)0), VAR_4, ".,()", "\"",
     0, 0, 0, VAR_0.encoding);
 if (!VAR_3)
  goto error;





 if (VAR_3[0] == '.')
 {

  FUNC_10(&VAR_2->before_tofrom, VAR_3);
  VAR_3 = FUNC_9(((void*)0), VAR_4, ".,()", "\"",
      0, 0, 0, VAR_0.encoding);
  if (!VAR_3)
   goto error;
  FUNC_10(&VAR_2->before_tofrom, VAR_3);
  VAR_3 = FUNC_9(((void*)0), VAR_4, ".,()", "\"",
      0, 0, 0, VAR_0.encoding);
  if (!VAR_3)
   goto error;
 }

 if (VAR_3[0] == '(')
 {

  for (;;)
  {
   FUNC_10(&VAR_2->before_tofrom, " ");
   FUNC_10(&VAR_2->before_tofrom, VAR_3);
   VAR_3 = FUNC_9(((void*)0), VAR_4, "()", "\"",
       0, 0, 0, VAR_0.encoding);
   if (!VAR_3)
    goto error;
   if (VAR_3[0] == ')')
    break;
  }
  FUNC_10(&VAR_2->before_tofrom, " ");
  FUNC_10(&VAR_2->before_tofrom, VAR_3);
  VAR_3 = FUNC_9(((void*)0), VAR_4, ".,()", "\"",
      0, 0, 0, VAR_0.encoding);
  if (!VAR_3)
   goto error;
 }

 if (FUNC_4(VAR_3, "from") == 0)
  VAR_2->from = 1;
 else if (FUNC_4(VAR_3, "to") == 0)
  VAR_2->from = 0;
 else
  goto error;


 VAR_3 = FUNC_9(((void*)0), VAR_4, ";", "'",
     0, 0, 0, VAR_0.encoding);
 if (!VAR_3)
  goto error;

 if (FUNC_4(VAR_3, "program") == 0)
 {
  int VAR_7;

  VAR_3 = FUNC_9(((void*)0), VAR_4, ";", "'",
      0, 0, 0, VAR_0.encoding);
  if (!VAR_3)
   goto error;





  VAR_7 = FUNC_8(VAR_3);
  if (VAR_3[0] != '\'' || VAR_7 < 2 || VAR_3[VAR_7 - 1] != '\'')
   goto error;

  FUNC_7(VAR_3, '\'', 0, VAR_0.encoding);

  VAR_2->program = 1;
  VAR_2->file = FUNC_5(VAR_3);
 }
 else if (FUNC_4(VAR_3, "stdin") == 0 ||
    FUNC_4(VAR_3, "stdout") == 0)
 {
  VAR_2->file = ((void*)0);
 }
 else if (FUNC_4(VAR_3, "pstdin") == 0 ||
    FUNC_4(VAR_3, "pstdout") == 0)
 {
  VAR_2->psql_inout = 1;
  VAR_2->file = ((void*)0);
 }
 else
 {

  FUNC_7(VAR_3, '\'', 0, VAR_0.encoding);
  VAR_2->file = FUNC_5(VAR_3);
  FUNC_0(&VAR_2->file);
 }


 VAR_3 = FUNC_9(((void*)0), "", ((void*)0), ((void*)0),
     0, 0, 0, VAR_0.encoding);
 if (VAR_3)
  VAR_2->after_tofrom = FUNC_5(VAR_3);

 return VAR_2;

error:
 if (VAR_3)
  FUNC_2("\\copy: parse error at \"%s\"", VAR_3);
 else
  FUNC_2("\\copy: parse error at end of line");
 FUNC_1(VAR_2);

 return ((void*)0);
}
