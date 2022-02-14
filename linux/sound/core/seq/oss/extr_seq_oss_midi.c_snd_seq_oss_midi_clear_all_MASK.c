
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_midi {int coder; } ;


 int FUNC_0 (struct seq_oss_midi*) ;
 int VAR_0 ;
 struct seq_oss_midi** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(void)
{
 int VAR_3;
 struct seq_oss_midi *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2, VAR_5);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if ((VAR_4 = VAR_1[VAR_3]) != ((void*)0)) {
   FUNC_1(VAR_4->coder);
   FUNC_0(VAR_4);
   VAR_1[VAR_3] = ((void*)0);
  }
 }
 VAR_0 = 0;
 FUNC_3(&VAR_2, VAR_5);
}
