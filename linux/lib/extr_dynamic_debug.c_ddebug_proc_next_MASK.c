
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct ddebug_iter* private; } ;
struct ddebug_iter {int dummy; } ;
typedef void _ddebug ;
typedef scalar_t__ loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (struct ddebug_iter*) ;
 void* FUNC_1 (struct ddebug_iter*) ;
 int FUNC_2 (char*,struct seq_file*,void*,unsigned long long) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 struct ddebug_iter *VAR_4 = VAR_1->private;
 struct _ddebug *VAR_5;

 FUNC_2("called m=%p p=%p *pos=%lld\n",
   VAR_1, VAR_2, (unsigned long long)*VAR_3);

 if (VAR_2 == VAR_0)
  VAR_5 = FUNC_0(VAR_4);
 else
  VAR_5 = FUNC_1(VAR_4);
 ++*VAR_3;
 return VAR_5;
}
