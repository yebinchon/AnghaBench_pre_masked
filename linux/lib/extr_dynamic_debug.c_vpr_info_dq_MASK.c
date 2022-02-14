
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddebug_query {char* format; char* function; char* filename; char* module; int last_lineno; int first_lineno; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char*,char*,char*,int,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct ddebug_query *VAR_0, const char *VAR_1)
{

 int VAR_2 = 0;

 if (VAR_0->format) {
  VAR_2 = FUNC_0(VAR_0->format);
  while (VAR_2 && VAR_0->format[VAR_2 - 1] == '\n')
   VAR_2--;
 }

 FUNC_1("%s: func=\"%s\" file=\"%s\" module=\"%s\" format=\"%.*s\" lineno=%u-%u\n",
   VAR_1,
   VAR_0->function ? VAR_0->function : "",
   VAR_0->filename ? VAR_0->filename : "",
   VAR_0->module ? VAR_0->module : "",
   VAR_2, VAR_0->format ? VAR_0->format : "",
   VAR_0->first_lineno, VAR_0->last_lineno);
}
