
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct ddebug_iter* private; } ;
struct ddebug_iter {int dummy; } ;
typedef void _ddebug ;
typedef int loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (struct ddebug_iter*) ;
 void* FUNC_1 (struct ddebug_iter*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct seq_file*,unsigned long long) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_2, loff_t *VAR_3)
{
 struct ddebug_iter *VAR_4 = VAR_2->private;
 struct _ddebug *VAR_5;
 int VAR_6 = *VAR_3;

 FUNC_3("called m=%p *pos=%lld\n", VAR_2, (unsigned long long)*VAR_3);

 FUNC_2(&VAR_1);

 if (!VAR_6)
  return VAR_0;
 if (VAR_6 < 0)
  return ((void*)0);
 VAR_5 = FUNC_0(VAR_4);
 while (VAR_5 != ((void*)0) && --VAR_6 > 0)
  VAR_5 = FUNC_1(VAR_4);
 return VAR_5;
}
