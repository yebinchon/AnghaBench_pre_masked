
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ddebug_iter* private; } ;
struct ddebug_iter {TYPE_1__* table; } ;
struct _ddebug {int format; int function; int lineno; int filename; } ;
typedef int flagsbuf ;
struct TYPE_2__ {int mod_name; } ;


 void* VAR_0 ;
 int FUNC_0 (struct _ddebug*,char*,int) ;
 int FUNC_1 (struct seq_file*,int ,char*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,struct seq_file*,void*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct ddebug_iter *VAR_3 = VAR_1->private;
 struct _ddebug *VAR_4 = VAR_2;
 char VAR_5[10];

 FUNC_5("called m=%p p=%p\n", VAR_1, VAR_2);

 if (VAR_2 == VAR_0) {
  FUNC_3(VAR_1,
    "# filename:lineno [module]function flags format\n");
  return 0;
 }

 FUNC_2(VAR_1, "%s:%u [%s]%s =%s \"",
     FUNC_4(VAR_4->filename), VAR_4->lineno,
     VAR_3->table->mod_name, VAR_4->function,
     FUNC_0(VAR_4, VAR_5, sizeof(VAR_5)));
 FUNC_1(VAR_1, VAR_4->format, "\t\r\n\"");
 FUNC_3(VAR_1, "\"\n");

 return 0;
}
