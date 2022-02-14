
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_midi {size_t seq_device; int coder; int use_lock; } ;


 struct seq_oss_midi* FUNC_0 (int,int) ;
 int FUNC_1 (struct seq_oss_midi*) ;
 int VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(int VAR_3, int VAR_4)
{
 struct seq_oss_midi *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if ((VAR_5 = FUNC_0(VAR_3, VAR_4)) != ((void*)0)) {
  FUNC_5(&VAR_2, VAR_6);
  VAR_1[VAR_5->seq_device] = ((void*)0);
  FUNC_6(&VAR_2, VAR_6);
  FUNC_3(&VAR_5->use_lock);
  FUNC_4(&VAR_5->use_lock);
  FUNC_2(VAR_5->coder);
  FUNC_1(VAR_5);
 }
 FUNC_5(&VAR_2, VAR_6);
 for (VAR_7 = VAR_0 - 1; VAR_7 >= 0; VAR_7--) {
  if (VAR_1[VAR_7])
   break;
 }
 VAR_0 = VAR_7 + 1;
 FUNC_6(&VAR_2, VAR_6);
 return 0;
}
