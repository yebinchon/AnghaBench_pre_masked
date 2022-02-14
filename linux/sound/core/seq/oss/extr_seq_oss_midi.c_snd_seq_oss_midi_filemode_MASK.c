
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_midi {int opened; int use_lock; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct seq_oss_midi* FUNC_0 (struct seq_oss_devinfo*,int) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct seq_oss_devinfo *VAR_4, int VAR_5)
{
 struct seq_oss_midi *VAR_6;
 int VAR_7;

 if ((VAR_6 = FUNC_0(VAR_4, VAR_5)) == ((void*)0))
  return 0;

 VAR_7 = 0;
 if (VAR_6->opened & VAR_1)
  VAR_7 |= VAR_3;
 if (VAR_6->opened & VAR_0)
  VAR_7 |= VAR_2;

 FUNC_1(&VAR_6->use_lock);
 return VAR_7;
}
