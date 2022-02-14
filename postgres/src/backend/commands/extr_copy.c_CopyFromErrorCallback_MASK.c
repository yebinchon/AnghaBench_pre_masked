
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int curlineno_str ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {int cur_relname; TYPE_1__ line_buf; int need_transcoding; scalar_t__ line_buf_converted; scalar_t__ line_buf_valid; scalar_t__ cur_attname; scalar_t__ cur_attval; scalar_t__ binary; int cur_lineno; } ;
typedef TYPE_2__* CopyState ;


 char* VAR_0 ;
 int FUNC_0 (char*,int ,char*,...) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,int ) ;

void
FUNC_4(void *VAR_1)
{
 CopyState VAR_2 = (CopyState) VAR_1;
 char VAR_3[32];

 FUNC_3(VAR_3, sizeof(VAR_3), VAR_0,
    VAR_2->cur_lineno);

 if (VAR_2->binary)
 {

  if (VAR_2->cur_attname)
   FUNC_0("COPY %s, line %s, column %s",
        VAR_2->cur_relname, VAR_3,
        VAR_2->cur_attname);
  else
   FUNC_0("COPY %s, line %s",
        VAR_2->cur_relname, VAR_3);
 }
 else
 {
  if (VAR_2->cur_attname && VAR_2->cur_attval)
  {

   char *VAR_4;

   VAR_4 = FUNC_1(VAR_2->cur_attval);
   FUNC_0("COPY %s, line %s, column %s: \"%s\"",
        VAR_2->cur_relname, VAR_3,
        VAR_2->cur_attname, VAR_4);
   FUNC_2(VAR_4);
  }
  else if (VAR_2->cur_attname)
  {

   FUNC_0("COPY %s, line %s, column %s: null input",
        VAR_2->cur_relname, VAR_3,
        VAR_2->cur_attname);
  }
  else
  {
   if (VAR_2->line_buf_valid &&
    (VAR_2->line_buf_converted || !VAR_2->need_transcoding))
   {
    char *VAR_5;

    VAR_5 = FUNC_1(VAR_2->line_buf.data);
    FUNC_0("COPY %s, line %s: \"%s\"",
         VAR_2->cur_relname, VAR_3, VAR_5);
    FUNC_2(VAR_5);
   }
   else
   {
    FUNC_0("COPY %s, line %s",
         VAR_2->cur_relname, VAR_3);
   }
  }
 }
}
