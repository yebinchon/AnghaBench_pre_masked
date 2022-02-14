
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_devinfo {int max_mididev; } ;


 int FUNC_0 (struct seq_oss_devinfo*,int,int) ;

void
FUNC_1(struct seq_oss_devinfo *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->max_mididev; VAR_2++)
  FUNC_0(VAR_0, VAR_2, VAR_1);
}
