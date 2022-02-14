
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,long,...) ;
 int* VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct seq_file*,long) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_5, void *VAR_6)
{
 long VAR_7;
 int VAR_8;

 if (VAR_6 == VAR_0) {
  FUNC_1(VAR_5, "        Depth    Size   Location"
      "    (%d entries)\n"
      "        -----    ----   --------\n",
      VAR_3);

  if (!VAR_4 && !VAR_2)
   FUNC_0(VAR_5);

  return 0;
 }

 VAR_7 = *(long *)VAR_6;

 if (VAR_7 >= VAR_3)
  return 0;

 if (VAR_7 + 1 == VAR_3)
  VAR_8 = VAR_1[VAR_7];
 else
  VAR_8 = VAR_1[VAR_7] - VAR_1[VAR_7+1];

 FUNC_1(VAR_5, "%3ld) %8d   %5d   ", VAR_7, VAR_1[VAR_7], VAR_8);

 FUNC_2(VAR_5, VAR_7);

 return 0;
}
