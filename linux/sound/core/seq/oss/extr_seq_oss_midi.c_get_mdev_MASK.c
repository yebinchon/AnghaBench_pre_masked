
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_midi {int use_lock; } ;


 struct seq_oss_midi** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct seq_oss_midi *
FUNC_3(int VAR_2)
{
 struct seq_oss_midi *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_1, VAR_4);
 VAR_3 = VAR_0[VAR_2];
 if (VAR_3)
  FUNC_0(&VAR_3->use_lock);
 FUNC_2(&VAR_1, VAR_4);
 return VAR_3;
}
