
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddebug_query {char const* module; char const* function; char const* filename; char const* format; int first_lineno; int last_lineno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const**,char*,char*) ;
 int FUNC_1 (struct ddebug_query*,int ,int) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct ddebug_query*,char*) ;

__attribute__((used)) static int FUNC_8(char *VAR_5[], int VAR_6,
   struct ddebug_query *VAR_7, const char *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10 = 0;


 if (VAR_6 % 2 != 0) {
  FUNC_3("expecting pairs of match-spec <value>\n");
  return -VAR_0;
 }
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));

 if (VAR_8)

  VAR_7->module = VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 2) {
  if (!FUNC_5(VAR_5[VAR_9], "func")) {
   VAR_10 = FUNC_0(&VAR_7->function, VAR_5[VAR_9+1], "func");
  } else if (!FUNC_5(VAR_5[VAR_9], "file")) {
   VAR_10 = FUNC_0(&VAR_7->filename, VAR_5[VAR_9+1], "file");
  } else if (!FUNC_5(VAR_5[VAR_9], "module")) {
   VAR_10 = FUNC_0(&VAR_7->module, VAR_5[VAR_9+1], "module");
  } else if (!FUNC_5(VAR_5[VAR_9], "format")) {
   FUNC_6(VAR_5[VAR_9+1], VAR_3 |
           VAR_2 |
           VAR_4);
   VAR_10 = FUNC_0(&VAR_7->format, VAR_5[VAR_9+1], "format");
  } else if (!FUNC_5(VAR_5[VAR_9], "line")) {
   char *VAR_11 = VAR_5[VAR_9+1];
   char *VAR_12 = FUNC_4(VAR_11, '-');
   if (VAR_7->first_lineno || VAR_7->last_lineno) {
    FUNC_3("match-spec: line used 2x\n");
    return -VAR_0;
   }
   if (VAR_12)
    *VAR_12++ = '\0';
   if (FUNC_2(VAR_11, &VAR_7->first_lineno) < 0)
    return -VAR_0;
   if (VAR_12) {

    if (FUNC_2(VAR_12, &VAR_7->last_lineno) < 0)
     return -VAR_0;


    if (VAR_7->last_lineno == 0)
     VAR_7->last_lineno = VAR_1;

    if (VAR_7->last_lineno < VAR_7->first_lineno) {
     FUNC_3("last-line:%d < 1st-line:%d\n",
      VAR_7->last_lineno,
      VAR_7->first_lineno);
     return -VAR_0;
    }
   } else {
    VAR_7->last_lineno = VAR_7->first_lineno;
   }
  } else {
   FUNC_3("unknown keyword \"%s\"\n", VAR_5[VAR_9]);
   return -VAR_0;
  }
  if (VAR_10)
   return VAR_10;
 }
 FUNC_7(VAR_7, "parsed");
 return 0;
}
