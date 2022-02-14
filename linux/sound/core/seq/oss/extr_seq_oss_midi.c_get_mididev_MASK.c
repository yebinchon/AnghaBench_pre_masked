
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_midi {int dummy; } ;
struct seq_oss_devinfo {int max_mididev; } ;


 int FUNC_0 (int,int) ;
 struct seq_oss_midi* FUNC_1 (int) ;

__attribute__((used)) static struct seq_oss_midi *
FUNC_2(struct seq_oss_devinfo *VAR_0, int VAR_1)
{
 if (VAR_1 < 0 || VAR_1 >= VAR_0->max_mididev)
  return ((void*)0);
 VAR_1 = FUNC_0(VAR_1, VAR_0->max_mididev);
 return FUNC_1(VAR_1);
}
