
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct aa_loaddata* private; } ;
struct aa_loaddata {int * hash; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct aa_loaddata *VAR_2 = VAR_0->private;
 unsigned int VAR_3, VAR_4 = FUNC_0();

 if (VAR_2->hash) {
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_1(VAR_0, "%.2x", VAR_2->hash[VAR_3]);
  FUNC_2(VAR_0, '\n');
 }

 return 0;
}
